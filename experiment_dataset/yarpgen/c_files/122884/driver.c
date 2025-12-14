#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)72;
unsigned int var_4 = 174459377U;
unsigned char var_7 = (unsigned char)45;
long long int var_8 = -7529227911892854624LL;
unsigned int var_10 = 3486593974U;
int zero = 0;
unsigned long long int var_13 = 13716094051784887777ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
