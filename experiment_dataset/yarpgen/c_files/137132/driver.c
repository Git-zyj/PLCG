#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11065762098941131727ULL;
unsigned short var_5 = (unsigned short)47840;
unsigned short var_6 = (unsigned short)9190;
unsigned long long int var_11 = 15051395164004781605ULL;
unsigned short var_12 = (unsigned short)63562;
int zero = 0;
unsigned long long int var_15 = 7131662037882223501ULL;
unsigned short var_16 = (unsigned short)4566;
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
