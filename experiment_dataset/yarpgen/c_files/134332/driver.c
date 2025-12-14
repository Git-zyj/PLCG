#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2014439613;
unsigned int var_3 = 1412037914U;
signed char var_4 = (signed char)9;
signed char var_13 = (signed char)120;
unsigned short var_16 = (unsigned short)55597;
int zero = 0;
unsigned int var_17 = 223814763U;
_Bool var_18 = (_Bool)1;
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
