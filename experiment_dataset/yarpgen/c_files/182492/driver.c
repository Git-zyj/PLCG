#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)30379;
unsigned int var_4 = 3797304069U;
unsigned short var_10 = (unsigned short)62900;
int zero = 0;
unsigned long long int var_14 = 5711651829059670845ULL;
unsigned int var_15 = 2258572563U;
unsigned short var_16 = (unsigned short)47243;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
