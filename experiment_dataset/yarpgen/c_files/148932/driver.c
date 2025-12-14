#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6995090445065238858LL;
unsigned long long int var_3 = 18128384147243005363ULL;
_Bool var_5 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)49485;
unsigned long long int var_16 = 7519724954399971044ULL;
unsigned char var_17 = (unsigned char)242;
void init() {
}

void checksum() {
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
