#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
int var_7 = 1599721653;
unsigned short var_11 = (unsigned short)49826;
unsigned long long int var_12 = 2657803788567406533ULL;
int zero = 0;
unsigned int var_16 = 2450045121U;
unsigned long long int var_17 = 4745227458471367938ULL;
void init() {
}

void checksum() {
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
