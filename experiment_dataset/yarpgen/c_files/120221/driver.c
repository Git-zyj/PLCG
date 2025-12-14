#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)124;
int var_9 = 1778090574;
unsigned char var_11 = (unsigned char)88;
unsigned char var_12 = (unsigned char)151;
unsigned char var_13 = (unsigned char)107;
unsigned char var_15 = (unsigned char)105;
int zero = 0;
int var_17 = 1355950452;
int var_18 = 386982734;
signed char var_19 = (signed char)64;
unsigned long long int var_20 = 3603555195550273915ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
