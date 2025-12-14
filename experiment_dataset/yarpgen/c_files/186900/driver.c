#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16506;
unsigned short var_3 = (unsigned short)36716;
int var_6 = -682255558;
unsigned short var_8 = (unsigned short)30997;
int var_9 = 538780687;
int var_13 = -251220616;
int zero = 0;
unsigned short var_15 = (unsigned short)18421;
int var_16 = -1351463732;
unsigned short var_17 = (unsigned short)44112;
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
