#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11061;
short var_3 = (short)-21866;
unsigned int var_5 = 3034177841U;
signed char var_12 = (signed char)-100;
unsigned short var_15 = (unsigned short)1999;
int zero = 0;
unsigned int var_18 = 105782166U;
int var_19 = -81658473;
short var_20 = (short)30891;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
