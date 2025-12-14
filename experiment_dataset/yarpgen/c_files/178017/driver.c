#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 840665967U;
unsigned char var_3 = (unsigned char)198;
short var_6 = (short)-3256;
unsigned short var_9 = (unsigned short)6511;
unsigned short var_10 = (unsigned short)62085;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 16962403796669588386ULL;
short var_13 = (short)-2518;
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
