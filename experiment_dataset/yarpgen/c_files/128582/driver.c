#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2078343324;
unsigned long long int var_7 = 7745991090837820970ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)33;
long long int var_18 = 2447004569290379455LL;
unsigned int var_19 = 1264607514U;
signed char var_20 = (signed char)76;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
