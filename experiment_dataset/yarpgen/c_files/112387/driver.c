#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23315;
signed char var_2 = (signed char)-41;
signed char var_3 = (signed char)87;
int var_4 = 1120568306;
signed char var_6 = (signed char)25;
short var_8 = (short)27816;
signed char var_9 = (signed char)-95;
signed char var_10 = (signed char)-18;
unsigned int var_15 = 1866981065U;
unsigned long long int var_16 = 8158660374138787587ULL;
short var_17 = (short)-27333;
signed char var_18 = (signed char)-77;
int zero = 0;
unsigned int var_19 = 2221277749U;
int var_20 = -95777714;
signed char var_21 = (signed char)58;
unsigned int var_22 = 242904336U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
