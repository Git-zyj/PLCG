#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 443160640277320668LL;
unsigned char var_10 = (unsigned char)212;
unsigned char var_11 = (unsigned char)149;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)97;
int var_15 = -830663845;
unsigned long long int var_16 = 11524252721072109812ULL;
unsigned long long int var_17 = 17583774244350429246ULL;
unsigned int var_18 = 2101922060U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
