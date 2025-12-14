#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)55695;
short var_3 = (short)-5100;
signed char var_5 = (signed char)5;
unsigned char var_6 = (unsigned char)141;
signed char var_10 = (signed char)-30;
int zero = 0;
unsigned char var_13 = (unsigned char)63;
unsigned short var_14 = (unsigned short)62360;
unsigned char var_15 = (unsigned char)210;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-25788;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
