#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62955;
short var_8 = (short)-15151;
unsigned short var_9 = (unsigned short)3814;
int var_11 = -1013492412;
unsigned short var_12 = (unsigned short)5733;
unsigned char var_14 = (unsigned char)3;
int zero = 0;
unsigned char var_16 = (unsigned char)142;
unsigned short var_17 = (unsigned short)55247;
void init() {
}

void checksum() {
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
