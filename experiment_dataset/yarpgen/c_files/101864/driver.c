#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60049;
unsigned int var_2 = 1359506768U;
unsigned short var_3 = (unsigned short)63552;
unsigned char var_4 = (unsigned char)84;
int var_5 = 1170255864;
unsigned char var_8 = (unsigned char)115;
long long int var_10 = 9137372424553064934LL;
int var_13 = 1212638795;
int zero = 0;
unsigned int var_14 = 2094448645U;
short var_15 = (short)-14234;
short var_16 = (short)4179;
unsigned int var_17 = 872373540U;
void init() {
}

void checksum() {
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
