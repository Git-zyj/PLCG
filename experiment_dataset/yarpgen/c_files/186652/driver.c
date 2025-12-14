#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)25117;
unsigned char var_4 = (unsigned char)198;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3588968517U;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_16 = (short)14977;
short var_17 = (short)-21470;
void init() {
}

void checksum() {
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
