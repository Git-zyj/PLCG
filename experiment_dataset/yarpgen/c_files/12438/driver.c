#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)24;
unsigned short var_1 = (unsigned short)48606;
short var_2 = (short)12415;
unsigned int var_10 = 2448554787U;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)30;
int zero = 0;
long long int var_13 = 2231521260112770050LL;
unsigned long long int var_14 = 18211098308609904438ULL;
unsigned char var_15 = (unsigned char)52;
unsigned char var_16 = (unsigned char)140;
long long int var_17 = -5363753762802057720LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
