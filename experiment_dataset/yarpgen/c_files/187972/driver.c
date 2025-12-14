#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)8298;
unsigned long long int var_3 = 15932239541560548029ULL;
unsigned char var_7 = (unsigned char)45;
unsigned int var_11 = 3420964313U;
unsigned short var_12 = (unsigned short)70;
int zero = 0;
unsigned char var_14 = (unsigned char)133;
short var_15 = (short)-13561;
unsigned int var_16 = 4189264655U;
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
