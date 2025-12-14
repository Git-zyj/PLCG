#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)3;
unsigned short var_1 = (unsigned short)12534;
short var_3 = (short)21300;
short var_4 = (short)14248;
short var_5 = (short)-20092;
short var_7 = (short)24978;
unsigned int var_8 = 1125535314U;
int var_10 = -1459211459;
int zero = 0;
unsigned int var_12 = 394849340U;
unsigned long long int var_13 = 11363876367692140984ULL;
long long int var_14 = -6939481259568137521LL;
unsigned short var_15 = (unsigned short)30883;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
