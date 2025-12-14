#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)19472;
unsigned int var_5 = 836129251U;
unsigned int var_6 = 1782524708U;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)190;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)55879;
long long int var_14 = -2370596508372803035LL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3061813801U;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2444236529U;
void init() {
}

void checksum() {
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
