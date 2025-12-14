#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3700951241796256712LL;
long long int var_4 = 1122172006160373440LL;
unsigned char var_5 = (unsigned char)199;
long long int var_9 = -6134274129237291350LL;
unsigned char var_11 = (unsigned char)100;
long long int var_13 = -4639957357284655616LL;
unsigned char var_15 = (unsigned char)7;
long long int var_17 = -4562229888142401163LL;
int zero = 0;
long long int var_18 = 6633889360448236077LL;
long long int var_19 = -2096568062583193247LL;
long long int var_20 = 70282948933162144LL;
long long int var_21 = -3202754175761237395LL;
unsigned char var_22 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
