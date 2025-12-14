#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1241770860425965991LL;
unsigned int var_1 = 2216275283U;
int var_4 = 1325331964;
unsigned short var_5 = (unsigned short)19811;
int var_6 = -1230275993;
int zero = 0;
int var_11 = -143435023;
short var_12 = (short)-16640;
unsigned short var_13 = (unsigned short)43451;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
