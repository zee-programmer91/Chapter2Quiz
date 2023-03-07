#include <iostream>

int readNumber();
void writeAnswer(int answer);

int main() {
	int firstNumber { readNumber() };
	int secondNumber{ readNumber() };

	int answer{ firstNumber + secondNumber };
	writeAnswer(answer);

	return 0;
}

int readNumber() {
	int number;

	std::cout << "Enter Number: ";
	std::cin  >> number;

	return number;
}

void writeAnswer(int answer) {
	std::cout << answer;
}
