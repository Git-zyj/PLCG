#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -179815676;
unsigned short var_8 = (unsigned short)28396;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
short var_13 = (short)-8922;
short var_14 = (short)-15252;
int zero = 0;
unsigned int var_15 = 3471628615U;
short var_16 = (short)-30027;
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
