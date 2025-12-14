#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1164;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)84;
_Bool var_12 = (_Bool)0;
unsigned char var_16 = (unsigned char)175;
short var_18 = (short)6157;
int zero = 0;
unsigned char var_20 = (unsigned char)5;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-4718;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
