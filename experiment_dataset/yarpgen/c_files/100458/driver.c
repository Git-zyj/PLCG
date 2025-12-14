#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -908886491;
int var_1 = 966204550;
int var_12 = -611668653;
int var_14 = -1102406006;
int var_16 = 1149613773;
int var_17 = 1892259134;
unsigned short var_19 = (unsigned short)46634;
int zero = 0;
unsigned short var_20 = (unsigned short)57057;
int var_21 = 2088067514;
int var_22 = -1118923369;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
