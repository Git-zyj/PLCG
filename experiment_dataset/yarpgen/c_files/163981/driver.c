#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
long long int var_3 = 5430130905245892604LL;
unsigned short var_4 = (unsigned short)48660;
int var_5 = 765292911;
signed char var_8 = (signed char)3;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 11596028563451281828ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)30639;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
