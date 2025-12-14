#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -759709933;
int var_2 = -1103150360;
signed char var_4 = (signed char)101;
long long int var_8 = 484390549079465872LL;
unsigned char var_10 = (unsigned char)51;
int zero = 0;
unsigned char var_13 = (unsigned char)218;
int var_14 = 1506658578;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
