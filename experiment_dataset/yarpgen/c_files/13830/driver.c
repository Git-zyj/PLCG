#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-18;
signed char var_5 = (signed char)29;
unsigned short var_7 = (unsigned short)32309;
short var_8 = (short)-13824;
int var_10 = -863896083;
unsigned int var_14 = 3046601019U;
int var_15 = -246462927;
short var_17 = (short)-4094;
int zero = 0;
unsigned int var_19 = 1987362344U;
unsigned long long int var_20 = 11565635635162590700ULL;
unsigned long long int var_21 = 10309307324783775142ULL;
unsigned long long int var_22 = 4591962077406252705ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
