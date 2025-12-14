#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 273301001U;
_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)1;
short var_6 = (short)31599;
int var_10 = 1795800611;
short var_12 = (short)-5695;
short var_13 = (short)2035;
int zero = 0;
short var_14 = (short)1316;
unsigned int var_15 = 50981563U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
