#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7437258292459068876ULL;
long long int var_1 = 5081223294921055013LL;
short var_2 = (short)-75;
unsigned long long int var_3 = 12900604731822113969ULL;
long long int var_4 = 7080427752680290532LL;
unsigned char var_5 = (unsigned char)66;
int var_6 = -618646405;
unsigned int var_8 = 2485392417U;
unsigned long long int var_10 = 11486794091126470302ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)7652;
int var_16 = 788477997;
int var_17 = 1966401464;
unsigned long long int var_18 = 13742187829194416116ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
