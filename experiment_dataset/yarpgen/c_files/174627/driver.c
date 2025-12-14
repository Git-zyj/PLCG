#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_3 = (signed char)64;
_Bool var_4 = (_Bool)1;
unsigned int var_8 = 194318750U;
unsigned int var_11 = 3010989479U;
int zero = 0;
unsigned long long int var_16 = 5073815113716695574ULL;
unsigned char var_17 = (unsigned char)157;
unsigned char var_18 = (unsigned char)154;
void init() {
}

void checksum() {
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
