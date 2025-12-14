#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 105914911;
short var_4 = (short)6954;
unsigned char var_5 = (unsigned char)205;
unsigned short var_10 = (unsigned short)54750;
int zero = 0;
unsigned int var_14 = 995346600U;
unsigned char var_15 = (unsigned char)230;
_Bool var_16 = (_Bool)1;
int var_17 = -2145093646;
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
