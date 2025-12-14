#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_8 = -1962399542;
unsigned short var_10 = (unsigned short)56597;
short var_11 = (short)-7844;
short var_13 = (short)-19436;
short var_14 = (short)-16812;
int zero = 0;
unsigned short var_15 = (unsigned short)43841;
int var_16 = -1006204596;
void init() {
}

void checksum() {
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
