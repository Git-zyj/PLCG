#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)16103;
unsigned short var_9 = (unsigned short)10232;
short var_13 = (short)30224;
int var_14 = 320675745;
int zero = 0;
short var_15 = (short)31699;
short var_16 = (short)-29506;
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
