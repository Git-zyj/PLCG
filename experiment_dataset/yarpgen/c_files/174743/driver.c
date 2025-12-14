#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)47227;
unsigned char var_5 = (unsigned char)24;
unsigned short var_12 = (unsigned short)64404;
signed char var_13 = (signed char)101;
long long int var_14 = -8897234281635982162LL;
unsigned char var_15 = (unsigned char)230;
int zero = 0;
unsigned int var_20 = 2258453708U;
_Bool var_21 = (_Bool)0;
long long int var_22 = 4256206672067737195LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
