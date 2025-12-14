#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25008;
_Bool var_10 = (_Bool)0;
short var_15 = (short)-27829;
short var_16 = (short)-32669;
int zero = 0;
unsigned int var_17 = 1894918808U;
unsigned char var_18 = (unsigned char)249;
short var_19 = (short)-15404;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
