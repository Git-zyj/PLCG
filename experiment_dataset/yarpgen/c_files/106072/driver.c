#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-17786;
unsigned int var_5 = 2669707937U;
unsigned char var_6 = (unsigned char)246;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = -7607060393251019758LL;
long long int var_13 = 1842104876885050280LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
