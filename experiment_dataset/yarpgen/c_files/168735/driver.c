#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1137958225U;
unsigned long long int var_6 = 8038448878918455360ULL;
unsigned long long int var_11 = 11751372902856251400ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_16 = (short)11023;
unsigned short var_17 = (unsigned short)30724;
unsigned long long int var_18 = 10026292196076100190ULL;
unsigned long long int var_19 = 12794879678032249843ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
