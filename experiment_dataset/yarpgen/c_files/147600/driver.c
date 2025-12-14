#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_3 = 1762538264402653625LL;
unsigned short var_6 = (unsigned short)60836;
signed char var_7 = (signed char)-122;
unsigned short var_9 = (unsigned short)47233;
unsigned short var_11 = (unsigned short)12172;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)204;
signed char var_16 = (signed char)72;
unsigned int var_17 = 346432822U;
long long int var_18 = -3611582024518458898LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
