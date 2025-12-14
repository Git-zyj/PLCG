#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14185;
unsigned int var_6 = 405381179U;
unsigned int var_11 = 3804038108U;
unsigned int var_15 = 2108297547U;
unsigned int var_16 = 3994112691U;
int zero = 0;
unsigned short var_17 = (unsigned short)28541;
unsigned int var_18 = 2120093622U;
int var_19 = -1047113494;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
