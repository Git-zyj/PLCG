#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)7743;
unsigned short var_7 = (unsigned short)17940;
unsigned char var_12 = (unsigned char)92;
short var_13 = (short)1470;
unsigned short var_16 = (unsigned short)24191;
int zero = 0;
unsigned char var_17 = (unsigned char)9;
short var_18 = (short)-10508;
int var_19 = 1660458335;
short var_20 = (short)3508;
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
