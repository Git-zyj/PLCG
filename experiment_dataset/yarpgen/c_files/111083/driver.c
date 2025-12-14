#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 3372145182063272937ULL;
long long int var_5 = -8246508245101380491LL;
unsigned char var_6 = (unsigned char)65;
long long int var_7 = -8581948168536535038LL;
unsigned short var_14 = (unsigned short)14564;
short var_15 = (short)-6338;
int zero = 0;
unsigned short var_16 = (unsigned short)31966;
unsigned int var_17 = 3690444249U;
unsigned char var_18 = (unsigned char)9;
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
