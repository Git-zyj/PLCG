#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1935841937U;
_Bool var_6 = (_Bool)0;
int var_11 = 1765499811;
unsigned char var_14 = (unsigned char)117;
int zero = 0;
long long int var_16 = -7120390220034732270LL;
short var_17 = (short)-16471;
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
