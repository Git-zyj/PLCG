#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_6 = (signed char)120;
_Bool var_8 = (_Bool)0;
unsigned short var_12 = (unsigned short)60342;
unsigned int var_15 = 3801408275U;
unsigned long long int var_17 = 6524944354465701843ULL;
int zero = 0;
unsigned int var_20 = 2869984440U;
int var_21 = -626700873;
void init() {
}

void checksum() {
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
