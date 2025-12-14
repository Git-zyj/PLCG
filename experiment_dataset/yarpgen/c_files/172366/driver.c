#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4070569045U;
unsigned short var_3 = (unsigned short)31446;
unsigned char var_4 = (unsigned char)240;
short var_5 = (short)-2438;
unsigned short var_7 = (unsigned short)50513;
unsigned short var_8 = (unsigned short)1434;
unsigned short var_10 = (unsigned short)39348;
unsigned int var_11 = 1548621764U;
int var_12 = 2011256471;
short var_13 = (short)-29849;
int zero = 0;
unsigned short var_14 = (unsigned short)55879;
unsigned short var_15 = (unsigned short)1773;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
