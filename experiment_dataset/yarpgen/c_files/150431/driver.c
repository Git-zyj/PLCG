#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)62;
unsigned char var_3 = (unsigned char)58;
short var_4 = (short)21719;
unsigned short var_5 = (unsigned short)52094;
unsigned int var_9 = 1807031576U;
unsigned short var_10 = (unsigned short)17304;
short var_11 = (short)31594;
int zero = 0;
short var_15 = (short)3008;
unsigned char var_16 = (unsigned char)218;
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
