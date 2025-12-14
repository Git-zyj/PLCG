#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)53;
unsigned int var_3 = 1760393052U;
signed char var_5 = (signed char)-112;
unsigned char var_13 = (unsigned char)60;
int zero = 0;
short var_15 = (short)-22008;
long long int var_16 = 8250717773777468479LL;
void init() {
}

void checksum() {
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
