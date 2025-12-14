#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7754;
unsigned short var_3 = (unsigned short)54086;
long long int var_8 = 8626369604432931427LL;
int zero = 0;
unsigned int var_10 = 2499826681U;
unsigned short var_11 = (unsigned short)24237;
int var_12 = -961749306;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
