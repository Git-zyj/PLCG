#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2144704401U;
unsigned char var_4 = (unsigned char)0;
_Bool var_6 = (_Bool)0;
short var_13 = (short)24399;
signed char var_16 = (signed char)-77;
unsigned int var_17 = 1770866140U;
unsigned char var_18 = (unsigned char)232;
int zero = 0;
unsigned long long int var_20 = 13962541835501469366ULL;
unsigned long long int var_21 = 15899878393778747236ULL;
unsigned char var_22 = (unsigned char)227;
_Bool var_23 = (_Bool)1;
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
