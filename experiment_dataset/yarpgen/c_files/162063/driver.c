#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)44231;
unsigned long long int var_6 = 294319355738131729ULL;
unsigned int var_8 = 2020548913U;
int var_11 = -179214009;
unsigned short var_18 = (unsigned short)1559;
int zero = 0;
unsigned char var_19 = (unsigned char)19;
unsigned short var_20 = (unsigned short)6129;
long long int var_21 = -3254518194767303478LL;
signed char var_22 = (signed char)5;
short var_23 = (short)-5993;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
