#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1485631364;
unsigned char var_2 = (unsigned char)244;
unsigned short var_3 = (unsigned short)46861;
long long int var_6 = 4925967020801987392LL;
unsigned char var_7 = (unsigned char)185;
unsigned char var_12 = (unsigned char)199;
unsigned int var_14 = 3568904686U;
int zero = 0;
unsigned char var_15 = (unsigned char)209;
int var_16 = 1628117542;
signed char var_17 = (signed char)-97;
void init() {
}

void checksum() {
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
