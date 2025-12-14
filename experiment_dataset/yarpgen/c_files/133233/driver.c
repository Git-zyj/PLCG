#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)42923;
unsigned short var_3 = (unsigned short)62867;
unsigned char var_4 = (unsigned char)199;
unsigned int var_5 = 3548905895U;
unsigned short var_7 = (unsigned short)24758;
int var_9 = 1042417229;
short var_10 = (short)-32443;
int zero = 0;
unsigned int var_16 = 2023825117U;
unsigned char var_17 = (unsigned char)129;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-39;
unsigned int var_20 = 3249370473U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
