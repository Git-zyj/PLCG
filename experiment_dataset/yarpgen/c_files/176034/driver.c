#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39348;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)46369;
long long int var_13 = 8395368296693544478LL;
int zero = 0;
unsigned char var_14 = (unsigned char)165;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)46;
unsigned int var_17 = 2026808837U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
