#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int var_11 = -118809765;
int var_15 = 2091185769;
int zero = 0;
int var_16 = 372073121;
int var_17 = 918752772;
int var_18 = -2031091057;
int var_19 = 2051482564;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
