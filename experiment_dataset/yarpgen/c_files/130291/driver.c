#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3788327808U;
unsigned int var_1 = 3364917240U;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)13033;
unsigned short var_5 = (unsigned short)38783;
unsigned short var_6 = (unsigned short)28592;
unsigned char var_7 = (unsigned char)35;
unsigned short var_8 = (unsigned short)37379;
long long int var_9 = 4196864303806593471LL;
unsigned int var_10 = 3392168746U;
unsigned char var_11 = (unsigned char)96;
unsigned int var_12 = 385587741U;
int zero = 0;
short var_13 = (short)-19453;
unsigned short var_14 = (unsigned short)23523;
unsigned short var_15 = (unsigned short)24339;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
