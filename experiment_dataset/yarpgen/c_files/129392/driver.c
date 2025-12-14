#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)97;
unsigned char var_3 = (unsigned char)75;
unsigned long long int var_5 = 9815872676246608526ULL;
int var_6 = -817160699;
unsigned short var_9 = (unsigned short)1743;
int zero = 0;
unsigned int var_10 = 2466568017U;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
