#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_4 = 678770443;
int var_5 = 1742700854;
unsigned long long int var_10 = 9544191736689086909ULL;
int zero = 0;
unsigned long long int var_12 = 5248096304211023223ULL;
unsigned int var_13 = 1864065294U;
unsigned int var_14 = 2865649535U;
int var_15 = 638247762;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
