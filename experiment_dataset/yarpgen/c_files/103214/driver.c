#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_3 = (unsigned char)84;
short var_5 = (short)9350;
unsigned long long int var_6 = 8581896966257130881ULL;
unsigned int var_7 = 3866347034U;
signed char var_8 = (signed char)47;
int zero = 0;
signed char var_10 = (signed char)47;
signed char var_11 = (signed char)-17;
unsigned int var_12 = 2668596082U;
unsigned char var_13 = (unsigned char)39;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
