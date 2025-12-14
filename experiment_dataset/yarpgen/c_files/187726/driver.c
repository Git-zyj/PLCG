#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-8301;
unsigned char var_3 = (unsigned char)214;
short var_5 = (short)-11536;
int var_6 = 165975727;
int zero = 0;
short var_13 = (short)-715;
long long int var_14 = -8091495440814089780LL;
short var_15 = (short)-355;
int var_16 = 1451783007;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
