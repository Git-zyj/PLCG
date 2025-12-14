#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1037859140U;
unsigned char var_4 = (unsigned char)171;
unsigned short var_5 = (unsigned short)27464;
int var_8 = 114832107;
_Bool var_13 = (_Bool)1;
unsigned char var_16 = (unsigned char)224;
int zero = 0;
unsigned char var_20 = (unsigned char)246;
int var_21 = 2017881626;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
