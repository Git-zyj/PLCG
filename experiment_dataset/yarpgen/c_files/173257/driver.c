#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)64;
signed char var_2 = (signed char)-59;
int var_5 = -1555886096;
long long int var_6 = -3831370994224120106LL;
int var_7 = -489507378;
signed char var_10 = (signed char)-22;
int zero = 0;
short var_12 = (short)4129;
int var_13 = 2119596239;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
