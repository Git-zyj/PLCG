#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1533958923;
unsigned short var_7 = (unsigned short)16350;
int zero = 0;
unsigned int var_10 = 2825495718U;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 16646013813495820588ULL;
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
