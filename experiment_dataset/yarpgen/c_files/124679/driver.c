#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-97;
long long int var_5 = -7339333340254613416LL;
long long int var_9 = -2054848703436080845LL;
int var_10 = 1467283666;
short var_13 = (short)-16413;
int var_15 = 882226901;
int zero = 0;
long long int var_17 = -7825295668021764695LL;
unsigned short var_18 = (unsigned short)12315;
short var_19 = (short)12449;
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
