#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)221;
short var_5 = (short)-10691;
unsigned char var_7 = (unsigned char)173;
_Bool var_8 = (_Bool)1;
long long int var_9 = 2490415517999698593LL;
short var_10 = (short)19369;
unsigned char var_11 = (unsigned char)52;
long long int var_12 = 7576701664970801425LL;
unsigned short var_14 = (unsigned short)9819;
long long int var_15 = -1345152147999022153LL;
int zero = 0;
unsigned long long int var_16 = 3142005699716284764ULL;
long long int var_17 = 1738001513596694227LL;
void init() {
}

void checksum() {
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
