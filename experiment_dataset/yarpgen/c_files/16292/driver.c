#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 314195493471562591ULL;
unsigned long long int var_3 = 2588846125965190273ULL;
unsigned long long int var_6 = 17590944816447601086ULL;
int zero = 0;
unsigned long long int var_10 = 11886148495618163614ULL;
_Bool var_11 = (_Bool)1;
int var_12 = -1500610027;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
