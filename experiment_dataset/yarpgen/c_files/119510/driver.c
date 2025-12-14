#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-20;
unsigned int var_1 = 1303145686U;
short var_3 = (short)-13004;
short var_4 = (short)16438;
short var_5 = (short)-11970;
unsigned char var_9 = (unsigned char)232;
unsigned int var_12 = 2506949626U;
unsigned short var_13 = (unsigned short)30923;
short var_14 = (short)18725;
unsigned long long int var_16 = 13102047998231731706ULL;
int zero = 0;
signed char var_19 = (signed char)-120;
signed char var_20 = (signed char)-50;
int var_21 = -1479027676;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
