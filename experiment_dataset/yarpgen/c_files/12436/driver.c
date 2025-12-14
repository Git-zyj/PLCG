#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 952680108U;
int var_9 = -606713067;
int var_14 = 1362979399;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_20 = -72235148;
int var_21 = -1043966471;
long long int var_22 = 386641217870184428LL;
long long int var_23 = -7622403570612841108LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
