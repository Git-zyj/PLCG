#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)104;
short var_6 = (short)-8376;
unsigned short var_8 = (unsigned short)36514;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_15 = (short)-12805;
unsigned long long int var_16 = 8135439850485087517ULL;
signed char var_17 = (signed char)55;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
