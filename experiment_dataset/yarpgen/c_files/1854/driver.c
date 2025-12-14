#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_8 = -180115023;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)176;
int zero = 0;
long long int var_14 = -2774953684735852005LL;
unsigned short var_15 = (unsigned short)43365;
short var_16 = (short)-7197;
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
