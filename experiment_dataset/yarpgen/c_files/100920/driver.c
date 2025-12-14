#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29829;
unsigned short var_2 = (unsigned short)52195;
unsigned char var_7 = (unsigned char)141;
unsigned char var_11 = (unsigned char)50;
unsigned short var_12 = (unsigned short)30936;
unsigned int var_14 = 1407147420U;
int zero = 0;
unsigned short var_20 = (unsigned short)49566;
unsigned short var_21 = (unsigned short)31480;
unsigned char var_22 = (unsigned char)1;
signed char var_23 = (signed char)-8;
short var_24 = (short)-12223;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
