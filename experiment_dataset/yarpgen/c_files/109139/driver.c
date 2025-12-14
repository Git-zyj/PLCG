#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2080750688;
long long int var_7 = -903473224186581038LL;
unsigned int var_9 = 3969202494U;
unsigned int var_11 = 4222773425U;
int zero = 0;
signed char var_13 = (signed char)-14;
signed char var_14 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
