#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 12565160020288250391ULL;
unsigned long long int var_3 = 14042818421742204099ULL;
unsigned long long int var_7 = 18064212331980359033ULL;
short var_8 = (short)16148;
int var_10 = 511856163;
unsigned short var_11 = (unsigned short)35825;
int zero = 0;
unsigned char var_12 = (unsigned char)86;
short var_13 = (short)14344;
unsigned short var_14 = (unsigned short)49288;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
