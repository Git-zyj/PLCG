#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -58427319;
short var_1 = (short)24719;
short var_6 = (short)-32481;
_Bool var_7 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_16 = 732938780094919773LL;
signed char var_17 = (signed char)111;
void init() {
}

void checksum() {
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
