#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 5022377468147179901LL;
long long int var_7 = -4939571754507334580LL;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)19433;
unsigned short var_11 = (unsigned short)45408;
int var_16 = -1279975999;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)235;
unsigned int var_21 = 3745585892U;
unsigned int var_22 = 546830944U;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
