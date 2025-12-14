#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)2;
unsigned int var_5 = 1108075684U;
unsigned int var_6 = 3691636761U;
unsigned short var_11 = (unsigned short)34168;
int var_12 = -2059734991;
unsigned short var_14 = (unsigned short)28997;
unsigned char var_16 = (unsigned char)119;
int zero = 0;
int var_17 = -689003789;
int var_18 = -2052254715;
int var_19 = -200975846;
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
