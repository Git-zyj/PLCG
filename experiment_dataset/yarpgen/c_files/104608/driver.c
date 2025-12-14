#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -923046206;
unsigned int var_5 = 1336342875U;
int var_6 = 2135036461;
_Bool var_8 = (_Bool)0;
unsigned int var_11 = 257678363U;
_Bool var_16 = (_Bool)1;
int var_17 = 1946922153;
int var_18 = 1570627122;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = 4753456787375143503LL;
int var_21 = -1516157244;
unsigned int var_22 = 2022925466U;
int var_23 = 832717242;
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
