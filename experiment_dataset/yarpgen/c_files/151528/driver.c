#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11631240818479640025ULL;
unsigned int var_5 = 649545192U;
int zero = 0;
int var_14 = -2076572306;
unsigned int var_15 = 1271427206U;
unsigned int var_16 = 268347257U;
unsigned long long int var_17 = 2061639329003167588ULL;
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
