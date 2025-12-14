#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)175;
short var_6 = (short)-561;
unsigned short var_7 = (unsigned short)30332;
int var_8 = -1221711127;
signed char var_11 = (signed char)74;
short var_12 = (short)-17152;
unsigned char var_13 = (unsigned char)198;
unsigned int var_14 = 145503287U;
int zero = 0;
signed char var_17 = (signed char)-77;
unsigned char var_18 = (unsigned char)215;
short var_19 = (short)-30584;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
