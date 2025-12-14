#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12324;
unsigned short var_1 = (unsigned short)3868;
int var_4 = -1619432275;
signed char var_5 = (signed char)-19;
int var_6 = -255023923;
signed char var_8 = (signed char)-49;
unsigned short var_9 = (unsigned short)12220;
unsigned int var_10 = 1580472619U;
unsigned char var_11 = (unsigned char)33;
unsigned short var_12 = (unsigned short)14755;
unsigned short var_13 = (unsigned short)39885;
unsigned short var_14 = (unsigned short)5680;
int zero = 0;
unsigned char var_15 = (unsigned char)253;
short var_16 = (short)29966;
unsigned char var_17 = (unsigned char)236;
signed char var_18 = (signed char)94;
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
