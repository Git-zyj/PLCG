#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3090170047U;
long long int var_2 = 3609337023039882409LL;
long long int var_7 = 7246815666020006529LL;
unsigned short var_10 = (unsigned short)4633;
int zero = 0;
int var_13 = 1941102708;
unsigned int var_14 = 14446134U;
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
