#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3009038749952897887LL;
int var_3 = 938672007;
unsigned char var_4 = (unsigned char)218;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-89;
short var_7 = (short)-23063;
unsigned long long int var_8 = 509452762059455525ULL;
int var_10 = -1376304484;
int zero = 0;
unsigned short var_11 = (unsigned short)29993;
unsigned int var_12 = 2097367933U;
signed char var_13 = (signed char)-64;
signed char var_14 = (signed char)-69;
unsigned int var_15 = 2881848260U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
