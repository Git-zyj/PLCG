#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2220081955726381032LL;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)20;
short var_12 = (short)-11491;
unsigned int var_13 = 2283969732U;
int var_14 = -1188347304;
short var_17 = (short)-13593;
signed char var_18 = (signed char)102;
int var_19 = -1556314880;
int zero = 0;
int var_20 = -211700899;
short var_21 = (short)3876;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 1351788606566354298ULL;
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
