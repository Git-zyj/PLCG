#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned short var_10 = (unsigned short)14798;
int var_14 = -2049979646;
int var_16 = -670500542;
int zero = 0;
short var_17 = (short)-1337;
_Bool var_18 = (_Bool)1;
short var_19 = (short)27213;
unsigned short var_20 = (unsigned short)29642;
int var_21 = -836939194;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
