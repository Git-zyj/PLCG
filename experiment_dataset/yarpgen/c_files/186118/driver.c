#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1345591444;
unsigned char var_1 = (unsigned char)50;
int var_2 = 1733468062;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-60;
short var_10 = (short)-8832;
int var_11 = -1529190139;
unsigned char var_12 = (unsigned char)111;
unsigned char var_13 = (unsigned char)99;
int zero = 0;
unsigned char var_15 = (unsigned char)73;
short var_16 = (short)16937;
void init() {
}

void checksum() {
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
