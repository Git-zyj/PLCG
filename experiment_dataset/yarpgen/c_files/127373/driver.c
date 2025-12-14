#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)53;
short var_4 = (short)20009;
unsigned char var_6 = (unsigned char)253;
short var_8 = (short)3351;
int var_12 = -432567022;
short var_13 = (short)-24724;
int zero = 0;
long long int var_16 = 5675167078366018658LL;
_Bool var_17 = (_Bool)1;
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
