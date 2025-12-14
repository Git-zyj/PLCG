#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-80;
short var_1 = (short)-12102;
int var_3 = 1569820525;
unsigned short var_4 = (unsigned short)30826;
int var_6 = 661338149;
unsigned long long int var_7 = 13758078855316539215ULL;
short var_8 = (short)-31604;
unsigned short var_10 = (unsigned short)37833;
unsigned int var_13 = 2679971595U;
unsigned long long int var_14 = 2012016700950858806ULL;
unsigned long long int var_17 = 384902265652462123ULL;
int zero = 0;
int var_20 = -193538165;
unsigned short var_21 = (unsigned short)2786;
signed char var_22 = (signed char)40;
unsigned short var_23 = (unsigned short)26933;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
