#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55682;
long long int var_5 = -2769366321111620188LL;
unsigned int var_10 = 226611688U;
unsigned short var_11 = (unsigned short)14167;
unsigned short var_12 = (unsigned short)30663;
int zero = 0;
unsigned long long int var_14 = 18323992519573863055ULL;
unsigned short var_15 = (unsigned short)12303;
long long int var_16 = 1802545149718791761LL;
unsigned short var_17 = (unsigned short)51935;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
