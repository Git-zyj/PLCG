#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4108167070U;
unsigned int var_1 = 410631999U;
short var_3 = (short)-24794;
unsigned int var_4 = 3575465097U;
unsigned int var_12 = 973025337U;
unsigned int var_13 = 1919676393U;
int zero = 0;
unsigned int var_14 = 625278491U;
unsigned int var_15 = 393120795U;
short var_16 = (short)30876;
short var_17 = (short)-6336;
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
