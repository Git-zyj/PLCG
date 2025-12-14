#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9030225215018254239ULL;
unsigned int var_10 = 755548643U;
long long int var_15 = -3443433541526751391LL;
int zero = 0;
long long int var_16 = 4427998119269233160LL;
int var_17 = 209078036;
void init() {
}

void checksum() {
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
