#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4120533366U;
int var_2 = -393548623;
unsigned short var_5 = (unsigned short)2452;
long long int var_6 = -7678720371682174156LL;
long long int var_10 = -8245066426112146689LL;
int zero = 0;
unsigned int var_11 = 4117768331U;
unsigned short var_12 = (unsigned short)16341;
void init() {
}

void checksum() {
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
