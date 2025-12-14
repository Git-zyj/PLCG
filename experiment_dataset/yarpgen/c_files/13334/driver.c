#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13923;
unsigned char var_2 = (unsigned char)242;
unsigned long long int var_7 = 3320170282957247736ULL;
unsigned char var_8 = (unsigned char)113;
int var_10 = -1530445459;
long long int var_11 = 7398218895146061115LL;
int zero = 0;
unsigned long long int var_12 = 14287167054678228625ULL;
signed char var_13 = (signed char)-69;
unsigned short var_14 = (unsigned short)45435;
unsigned int var_15 = 4071084960U;
long long int var_16 = 81723829164954630LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
