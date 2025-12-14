#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_5 = (unsigned short)48962;
signed char var_6 = (signed char)-63;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)30;
_Bool var_11 = (_Bool)0;
short var_13 = (short)23256;
int zero = 0;
unsigned short var_15 = (unsigned short)53757;
short var_16 = (short)-6514;
unsigned long long int var_17 = 98545161652372591ULL;
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
