#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)242;
unsigned short var_2 = (unsigned short)18566;
unsigned short var_7 = (unsigned short)28094;
signed char var_8 = (signed char)-70;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3530326494U;
unsigned char var_14 = (unsigned char)88;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
