#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
unsigned short var_3 = (unsigned short)36495;
_Bool var_4 = (_Bool)1;
short var_6 = (short)3357;
unsigned short var_8 = (unsigned short)32668;
int var_10 = 742788843;
short var_12 = (short)-4750;
unsigned short var_14 = (unsigned short)29409;
int zero = 0;
int var_15 = -383786887;
unsigned int var_16 = 1350443516U;
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
