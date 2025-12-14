#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)15394;
short var_2 = (short)-24449;
unsigned long long int var_3 = 17890352078062426909ULL;
long long int var_5 = -5196324665555128991LL;
long long int var_7 = 3808580292951209383LL;
unsigned int var_9 = 2663053919U;
short var_11 = (short)30105;
unsigned int var_12 = 3847385680U;
unsigned long long int var_13 = 3106256996265832076ULL;
unsigned int var_16 = 1793776059U;
int zero = 0;
short var_18 = (short)25877;
int var_19 = 1956594005;
unsigned long long int var_20 = 16546265493547667898ULL;
int var_21 = 1765838216;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
