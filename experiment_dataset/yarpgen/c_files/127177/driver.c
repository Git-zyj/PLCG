#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)47;
unsigned short var_2 = (unsigned short)42901;
unsigned short var_3 = (unsigned short)55550;
unsigned long long int var_4 = 3639671675346255456ULL;
unsigned short var_5 = (unsigned short)22592;
unsigned long long int var_9 = 4805536546336199935ULL;
unsigned char var_12 = (unsigned char)99;
int zero = 0;
unsigned short var_13 = (unsigned short)60801;
unsigned long long int var_14 = 4121472861248923631ULL;
unsigned short var_15 = (unsigned short)19777;
unsigned short var_16 = (unsigned short)45826;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
