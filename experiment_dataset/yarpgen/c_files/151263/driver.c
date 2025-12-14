#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 1121101712U;
short var_6 = (short)2182;
short var_8 = (short)-1897;
short var_11 = (short)-23641;
unsigned long long int var_12 = 1752462906080925997ULL;
short var_15 = (short)17310;
int zero = 0;
short var_16 = (short)4282;
_Bool var_17 = (_Bool)1;
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
