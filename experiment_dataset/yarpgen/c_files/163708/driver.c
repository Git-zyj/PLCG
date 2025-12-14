#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)114;
unsigned char var_3 = (unsigned char)184;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)99;
short var_7 = (short)-3660;
unsigned short var_10 = (unsigned short)23271;
short var_11 = (short)-20251;
short var_16 = (short)5101;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)30890;
short var_19 = (short)-25814;
int var_20 = 728817852;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
