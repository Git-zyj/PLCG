#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1404463921158706228ULL;
int var_1 = 577683960;
signed char var_2 = (signed char)11;
unsigned short var_7 = (unsigned short)57992;
unsigned char var_8 = (unsigned char)63;
short var_9 = (short)-12091;
unsigned short var_10 = (unsigned short)34403;
long long int var_11 = -5003292221049061425LL;
unsigned short var_12 = (unsigned short)44511;
unsigned short var_13 = (unsigned short)33501;
signed char var_14 = (signed char)13;
int zero = 0;
unsigned long long int var_15 = 14404617396364120584ULL;
unsigned char var_16 = (unsigned char)137;
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
