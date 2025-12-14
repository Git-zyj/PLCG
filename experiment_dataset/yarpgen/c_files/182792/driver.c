#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)16342;
unsigned long long int var_8 = 7509653697715277352ULL;
short var_9 = (short)-13782;
_Bool var_10 = (_Bool)1;
short var_12 = (short)-1171;
short var_13 = (short)26433;
unsigned short var_14 = (unsigned short)35934;
int zero = 0;
unsigned short var_16 = (unsigned short)35761;
unsigned int var_17 = 3506964185U;
unsigned short var_18 = (unsigned short)4582;
short var_19 = (short)-10946;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
