#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
signed char var_6 = (signed char)19;
unsigned short var_7 = (unsigned short)18868;
unsigned char var_12 = (unsigned char)176;
unsigned char var_13 = (unsigned char)248;
int zero = 0;
unsigned char var_15 = (unsigned char)175;
unsigned long long int var_16 = 14590781174000515727ULL;
unsigned char var_17 = (unsigned char)72;
short var_18 = (short)-32172;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
