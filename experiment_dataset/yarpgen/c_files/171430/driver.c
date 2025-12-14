#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)100;
unsigned long long int var_7 = 11767513379128220030ULL;
unsigned long long int var_8 = 4771725381661888412ULL;
int zero = 0;
unsigned long long int var_10 = 4207210472791158660ULL;
unsigned long long int var_11 = 13251875492757341362ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
