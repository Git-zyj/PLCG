#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13601;
short var_1 = (short)-15505;
long long int var_3 = -5628567159017595722LL;
short var_4 = (short)-29925;
unsigned char var_5 = (unsigned char)101;
signed char var_6 = (signed char)39;
unsigned short var_7 = (unsigned short)34446;
short var_8 = (short)-18484;
short var_9 = (short)-16035;
int zero = 0;
int var_10 = -1281482676;
unsigned short var_11 = (unsigned short)30949;
int var_12 = -1747914364;
unsigned short var_13 = (unsigned short)42690;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
