#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2138632137829456577ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 11928120567546622893ULL;
int var_10 = -152761298;
unsigned long long int var_13 = 13317696621638980068ULL;
int zero = 0;
unsigned long long int var_19 = 9450902713508748312ULL;
unsigned long long int var_20 = 17013593869783072767ULL;
void init() {
}

void checksum() {
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
