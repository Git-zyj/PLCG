#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3515811216081098205ULL;
unsigned short var_7 = (unsigned short)63452;
unsigned char var_15 = (unsigned char)112;
int zero = 0;
int var_17 = 721843693;
unsigned char var_18 = (unsigned char)33;
void init() {
}

void checksum() {
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
