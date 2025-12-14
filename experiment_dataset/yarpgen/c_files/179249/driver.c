#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8562998879534092749LL;
unsigned long long int var_4 = 14562591798905937375ULL;
unsigned int var_5 = 1316809333U;
unsigned int var_8 = 1707486973U;
int zero = 0;
signed char var_12 = (signed char)-51;
unsigned long long int var_13 = 14691623363526849258ULL;
unsigned long long int var_14 = 13904489680464310585ULL;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)160;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
