#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 12513773389325820422ULL;
short var_10 = (short)12046;
unsigned short var_11 = (unsigned short)59313;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_20 = -1136941977;
unsigned char var_21 = (unsigned char)252;
unsigned long long int var_22 = 3072715579906450253ULL;
short var_23 = (short)8545;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
