#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 811644071U;
_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)75;
int zero = 0;
unsigned char var_16 = (unsigned char)92;
unsigned long long int var_17 = 1012414836765836507ULL;
unsigned short var_18 = (unsigned short)14793;
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
