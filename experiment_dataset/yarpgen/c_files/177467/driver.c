#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21737;
int var_1 = -2063671883;
int var_2 = 1492521843;
signed char var_5 = (signed char)-83;
unsigned char var_6 = (unsigned char)131;
unsigned int var_7 = 773306091U;
unsigned int var_11 = 1332610985U;
unsigned char var_12 = (unsigned char)241;
short var_13 = (short)-6382;
signed char var_14 = (signed char)-31;
int zero = 0;
unsigned char var_15 = (unsigned char)188;
int var_16 = -1454513144;
unsigned long long int var_17 = 14688350230157513614ULL;
int var_18 = 1005271591;
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
