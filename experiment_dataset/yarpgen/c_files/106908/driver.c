#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)33;
int var_2 = -304468690;
unsigned short var_3 = (unsigned short)55102;
signed char var_6 = (signed char)62;
short var_8 = (short)15750;
int var_10 = -2044353304;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-12;
unsigned int var_15 = 915164574U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
