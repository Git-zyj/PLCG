#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2651574002151240981ULL;
short var_6 = (short)8130;
unsigned long long int var_7 = 1457148880114916003ULL;
unsigned long long int var_12 = 1710935646669828630ULL;
short var_15 = (short)2484;
short var_18 = (short)17098;
int zero = 0;
unsigned long long int var_20 = 1383265506035195801ULL;
unsigned long long int var_21 = 1646387079570767908ULL;
short var_22 = (short)-23526;
short var_23 = (short)-8166;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
