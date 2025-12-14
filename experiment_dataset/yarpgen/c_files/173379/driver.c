#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)48;
long long int var_10 = -126259094186433828LL;
unsigned short var_13 = (unsigned short)18029;
unsigned char var_15 = (unsigned char)55;
unsigned int var_16 = 2133819320U;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1088122369U;
unsigned char var_20 = (unsigned char)158;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
