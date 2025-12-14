#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)242;
unsigned short var_2 = (unsigned short)65482;
short var_5 = (short)-13008;
unsigned long long int var_7 = 14362273316646537050ULL;
unsigned char var_8 = (unsigned char)26;
unsigned short var_9 = (unsigned short)49904;
unsigned short var_12 = (unsigned short)55712;
unsigned int var_13 = 1908191574U;
unsigned char var_17 = (unsigned char)34;
int zero = 0;
signed char var_18 = (signed char)99;
signed char var_19 = (signed char)-41;
unsigned char var_20 = (unsigned char)14;
unsigned short var_21 = (unsigned short)24043;
unsigned short var_22 = (unsigned short)53507;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
