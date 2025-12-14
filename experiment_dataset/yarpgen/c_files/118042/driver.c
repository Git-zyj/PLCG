#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)116;
unsigned char var_10 = (unsigned char)200;
unsigned short var_16 = (unsigned short)51838;
unsigned int var_18 = 1245663163U;
int zero = 0;
unsigned int var_19 = 4154809980U;
unsigned short var_20 = (unsigned short)15242;
unsigned int var_21 = 2935704877U;
unsigned char var_22 = (unsigned char)44;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
