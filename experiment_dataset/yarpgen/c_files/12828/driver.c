#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -310510346;
unsigned char var_1 = (unsigned char)95;
short var_5 = (short)-12159;
short var_6 = (short)32363;
unsigned long long int var_7 = 8790625165732618026ULL;
unsigned long long int var_11 = 12960283247531092942ULL;
short var_12 = (short)-16828;
int var_13 = 1970560199;
int var_14 = 2090727371;
int var_15 = -463035256;
int zero = 0;
unsigned char var_16 = (unsigned char)49;
unsigned long long int var_17 = 18422611662611145638ULL;
int var_18 = -1433243759;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
