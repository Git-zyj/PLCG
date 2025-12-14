#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1660422413U;
unsigned int var_7 = 2989355140U;
int var_9 = 1366155574;
int var_10 = 1428960158;
int zero = 0;
long long int var_15 = 4518815658635697174LL;
unsigned int var_16 = 1960022621U;
short var_17 = (short)-25008;
void init() {
}

void checksum() {
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
