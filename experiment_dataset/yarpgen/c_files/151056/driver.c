#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7936;
unsigned int var_1 = 297148586U;
unsigned char var_3 = (unsigned char)251;
unsigned char var_4 = (unsigned char)55;
unsigned char var_7 = (unsigned char)201;
unsigned char var_8 = (unsigned char)106;
unsigned char var_11 = (unsigned char)114;
short var_12 = (short)13954;
unsigned char var_13 = (unsigned char)173;
int zero = 0;
unsigned char var_17 = (unsigned char)18;
short var_18 = (short)-11640;
unsigned int var_19 = 2014566494U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
