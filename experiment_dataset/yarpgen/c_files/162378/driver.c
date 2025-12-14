#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2283389849U;
unsigned int var_2 = 645248598U;
unsigned int var_4 = 3395228908U;
unsigned int var_9 = 1737249364U;
unsigned int var_10 = 3650488227U;
unsigned int var_15 = 3173585314U;
unsigned int var_16 = 3491478461U;
unsigned int var_17 = 350071295U;
unsigned int var_19 = 1081403517U;
int zero = 0;
unsigned int var_20 = 1745958043U;
unsigned int var_21 = 388114685U;
unsigned int var_22 = 1921664803U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
