#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1547068861;
int var_7 = -1674460773;
long long int var_12 = -7449382954823720781LL;
long long int var_13 = -7084768246981647017LL;
int zero = 0;
long long int var_15 = -2956584162267449208LL;
unsigned short var_16 = (unsigned short)30486;
unsigned char var_17 = (unsigned char)95;
_Bool var_18 = (_Bool)0;
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
