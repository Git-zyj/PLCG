#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-28025;
signed char var_6 = (signed char)48;
unsigned short var_11 = (unsigned short)54599;
int zero = 0;
long long int var_16 = 6858094769538892645LL;
unsigned char var_17 = (unsigned char)241;
long long int var_18 = 2011704420555892619LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
