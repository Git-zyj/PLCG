#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)157;
signed char var_5 = (signed char)98;
signed char var_6 = (signed char)-3;
unsigned int var_7 = 2476589191U;
int var_10 = -217793049;
unsigned long long int var_12 = 9922262239279191059ULL;
unsigned short var_13 = (unsigned short)23170;
signed char var_14 = (signed char)-122;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int var_17 = 1721227104;
unsigned char var_18 = (unsigned char)71;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
