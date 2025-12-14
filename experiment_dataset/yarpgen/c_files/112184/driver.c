#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_4 = 1984157203U;
unsigned short var_8 = (unsigned short)22403;
_Bool var_11 = (_Bool)1;
long long int var_13 = 1008307554671252175LL;
int zero = 0;
unsigned long long int var_15 = 18292680187196141663ULL;
unsigned char var_16 = (unsigned char)140;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
