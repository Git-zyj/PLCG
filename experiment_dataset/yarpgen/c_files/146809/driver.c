#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16989970204444749789ULL;
_Bool var_2 = (_Bool)0;
signed char var_10 = (signed char)83;
int zero = 0;
unsigned char var_14 = (unsigned char)218;
short var_15 = (short)-32120;
unsigned int var_16 = 4023833349U;
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
