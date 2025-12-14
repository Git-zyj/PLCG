#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -442878406;
unsigned short var_10 = (unsigned short)28510;
unsigned long long int var_12 = 14836715048345827403ULL;
int zero = 0;
signed char var_14 = (signed char)-21;
unsigned int var_15 = 525503845U;
short var_16 = (short)-31046;
int var_17 = -212196379;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
