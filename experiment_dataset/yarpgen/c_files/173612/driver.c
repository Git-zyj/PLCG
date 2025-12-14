#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1982179957;
signed char var_3 = (signed char)95;
long long int var_6 = 2543767324612860771LL;
unsigned char var_10 = (unsigned char)128;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 3673450543813208572LL;
unsigned short var_16 = (unsigned short)23163;
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
