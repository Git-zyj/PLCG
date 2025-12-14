#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1137404047;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)234;
int var_5 = -815705319;
long long int var_7 = 886530145908227145LL;
unsigned short var_8 = (unsigned short)6277;
long long int var_9 = -8824712625585093046LL;
short var_10 = (short)26593;
int var_11 = -158747819;
int zero = 0;
signed char var_14 = (signed char)59;
unsigned short var_15 = (unsigned short)51482;
int var_16 = 480527105;
unsigned short var_17 = (unsigned short)44620;
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
