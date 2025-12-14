#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)112;
short var_1 = (short)-28939;
unsigned short var_2 = (unsigned short)59642;
unsigned char var_3 = (unsigned char)162;
unsigned short var_4 = (unsigned short)47949;
unsigned char var_5 = (unsigned char)121;
unsigned short var_6 = (unsigned short)43775;
int zero = 0;
int var_10 = 2136264874;
unsigned char var_11 = (unsigned char)198;
unsigned short var_12 = (unsigned short)49411;
short var_13 = (short)-7283;
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
