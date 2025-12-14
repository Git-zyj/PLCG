#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)40;
unsigned short var_15 = (unsigned short)19217;
unsigned long long int var_16 = 12509211747420752046ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)12824;
unsigned short var_20 = (unsigned short)6965;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
