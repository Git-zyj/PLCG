#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)154;
unsigned int var_4 = 2039779630U;
unsigned short var_10 = (unsigned short)12479;
int zero = 0;
short var_14 = (short)-13350;
unsigned char var_15 = (unsigned char)236;
_Bool var_16 = (_Bool)0;
int var_17 = -594090994;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
