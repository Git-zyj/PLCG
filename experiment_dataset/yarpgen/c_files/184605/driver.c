#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)129;
unsigned int var_2 = 2231889853U;
unsigned int var_3 = 3022481110U;
int var_5 = -335966735;
unsigned short var_7 = (unsigned short)63811;
unsigned long long int var_8 = 7120481962458164955ULL;
signed char var_9 = (signed char)-115;
signed char var_12 = (signed char)75;
unsigned long long int var_13 = 9803061095285623466ULL;
int zero = 0;
unsigned long long int var_14 = 12947105067321845837ULL;
unsigned char var_15 = (unsigned char)187;
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
