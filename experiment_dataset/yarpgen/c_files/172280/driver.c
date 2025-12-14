#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-9024;
unsigned short var_7 = (unsigned short)8752;
unsigned short var_13 = (unsigned short)48825;
int zero = 0;
short var_14 = (short)14355;
unsigned int var_15 = 1630641342U;
unsigned int var_16 = 560451170U;
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
