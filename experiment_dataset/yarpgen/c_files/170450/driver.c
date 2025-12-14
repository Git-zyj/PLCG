#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10693762561477487779ULL;
unsigned char var_4 = (unsigned char)173;
short var_5 = (short)-8458;
short var_6 = (short)-6943;
unsigned short var_7 = (unsigned short)52503;
int zero = 0;
unsigned short var_17 = (unsigned short)10511;
short var_18 = (short)-13141;
void init() {
}

void checksum() {
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
