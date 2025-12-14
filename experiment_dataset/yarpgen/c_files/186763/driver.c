#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51915;
short var_6 = (short)355;
int var_8 = 611713805;
unsigned int var_11 = 148169461U;
int zero = 0;
unsigned int var_14 = 3609089853U;
unsigned int var_15 = 51502246U;
int var_16 = 2103643190;
void init() {
}

void checksum() {
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
