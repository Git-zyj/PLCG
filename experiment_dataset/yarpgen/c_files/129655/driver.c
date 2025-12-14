#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1058509386;
_Bool var_8 = (_Bool)1;
unsigned int var_11 = 2984368012U;
signed char var_12 = (signed char)-61;
short var_15 = (short)-16352;
int zero = 0;
unsigned short var_16 = (unsigned short)48037;
int var_17 = -44787059;
long long int var_18 = 4284549885109446898LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
