#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1496137256;
long long int var_4 = -9063170594313208198LL;
unsigned short var_6 = (unsigned short)25342;
short var_9 = (short)-1197;
long long int var_16 = -8658344589749307778LL;
int zero = 0;
unsigned char var_17 = (unsigned char)200;
int var_18 = -414156356;
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
