#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)205;
short var_5 = (short)8150;
unsigned long long int var_7 = 4098496615785793200ULL;
unsigned short var_8 = (unsigned short)40990;
unsigned int var_11 = 2012806141U;
signed char var_12 = (signed char)8;
unsigned short var_13 = (unsigned short)14532;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 5278332992844032311ULL;
unsigned short var_18 = (unsigned short)12729;
unsigned char var_19 = (unsigned char)159;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
