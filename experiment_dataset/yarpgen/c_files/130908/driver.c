#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)221;
unsigned long long int var_4 = 2728148945496219361ULL;
short var_6 = (short)-24226;
int var_7 = -1058215606;
unsigned short var_8 = (unsigned short)53872;
int var_11 = -898574300;
int var_12 = 889731478;
int var_13 = 1036897755;
int zero = 0;
unsigned char var_14 = (unsigned char)57;
unsigned short var_15 = (unsigned short)12516;
unsigned short var_16 = (unsigned short)58164;
short var_17 = (short)-17195;
unsigned int var_18 = 2503730233U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
