#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)1652;
unsigned short var_7 = (unsigned short)14789;
unsigned int var_8 = 2454958003U;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)4398;
_Bool var_12 = (_Bool)0;
int var_14 = -1821666385;
unsigned long long int var_17 = 7212067373187760291ULL;
unsigned int var_18 = 1427780174U;
int zero = 0;
unsigned long long int var_19 = 5006374114051510633ULL;
signed char var_20 = (signed char)62;
unsigned short var_21 = (unsigned short)31335;
short var_22 = (short)21132;
unsigned long long int var_23 = 10780759722238239526ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
