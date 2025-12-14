#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 955617569U;
unsigned int var_2 = 3712212272U;
unsigned short var_6 = (unsigned short)13659;
unsigned int var_8 = 1565134136U;
short var_9 = (short)-8821;
unsigned short var_10 = (unsigned short)36702;
unsigned char var_12 = (unsigned char)241;
unsigned long long int var_14 = 12737191851329067513ULL;
unsigned short var_16 = (unsigned short)12445;
unsigned int var_17 = 906675252U;
int zero = 0;
unsigned int var_18 = 1594956866U;
unsigned int var_19 = 570879847U;
short var_20 = (short)11014;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
