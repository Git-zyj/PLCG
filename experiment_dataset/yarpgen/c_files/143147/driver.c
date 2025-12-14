#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21743;
long long int var_1 = -5513631592845011310LL;
int var_3 = 1995294092;
unsigned int var_4 = 236093965U;
unsigned char var_5 = (unsigned char)187;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)139;
long long int var_9 = -7312104941548044754LL;
_Bool var_10 = (_Bool)0;
int var_12 = -490149172;
int zero = 0;
unsigned char var_14 = (unsigned char)93;
short var_15 = (short)22593;
signed char var_16 = (signed char)-47;
long long int var_17 = -4028048244804804131LL;
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
