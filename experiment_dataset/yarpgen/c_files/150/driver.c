#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -569331970;
int var_10 = 2073023010;
short var_12 = (short)7068;
int zero = 0;
int var_13 = 1385929639;
unsigned long long int var_14 = 2369796701987804862ULL;
short var_15 = (short)-31122;
short var_16 = (short)24077;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
