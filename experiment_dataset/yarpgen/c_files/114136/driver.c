#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)33578;
unsigned short var_5 = (unsigned short)27841;
unsigned int var_8 = 2451830362U;
unsigned int var_10 = 2303608030U;
int zero = 0;
unsigned char var_14 = (unsigned char)0;
short var_15 = (short)10299;
short var_16 = (short)-19287;
short var_17 = (short)6813;
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
