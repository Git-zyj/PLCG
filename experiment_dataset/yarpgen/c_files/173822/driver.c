#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-81;
int var_8 = -1508211978;
unsigned char var_11 = (unsigned char)128;
long long int var_14 = 8697157437623776251LL;
int zero = 0;
unsigned long long int var_17 = 1593698130735060807ULL;
unsigned char var_18 = (unsigned char)210;
int var_19 = 688556935;
int var_20 = 1794701466;
int var_21 = 699307129;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
