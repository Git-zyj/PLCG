#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23691;
long long int var_2 = -1615705016533559737LL;
unsigned short var_12 = (unsigned short)38686;
unsigned char var_13 = (unsigned char)93;
int zero = 0;
unsigned int var_14 = 1918538298U;
signed char var_15 = (signed char)-59;
signed char var_16 = (signed char)-1;
void init() {
}

void checksum() {
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
