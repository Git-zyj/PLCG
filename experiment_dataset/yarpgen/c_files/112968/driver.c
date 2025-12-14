#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2297425058U;
unsigned int var_5 = 2780044608U;
unsigned int var_11 = 410745239U;
short var_14 = (short)-16919;
int zero = 0;
signed char var_15 = (signed char)114;
unsigned long long int var_16 = 3775963448034501458ULL;
void init() {
}

void checksum() {
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
