#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17518;
short var_2 = (short)-5054;
unsigned short var_3 = (unsigned short)64848;
unsigned short var_4 = (unsigned short)6841;
unsigned char var_7 = (unsigned char)233;
unsigned char var_10 = (unsigned char)126;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)8489;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)70;
void init() {
}

void checksum() {
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
