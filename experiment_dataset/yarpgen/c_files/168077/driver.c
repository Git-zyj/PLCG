#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -1820895884770374718LL;
long long int var_11 = 3246121205296616716LL;
int var_15 = -504786527;
unsigned char var_16 = (unsigned char)44;
int zero = 0;
signed char var_20 = (signed char)43;
unsigned int var_21 = 3963502875U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
