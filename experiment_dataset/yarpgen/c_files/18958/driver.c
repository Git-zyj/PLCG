#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)144;
unsigned long long int var_5 = 16211336715752013171ULL;
unsigned short var_7 = (unsigned short)53973;
unsigned long long int var_9 = 15917412630430463779ULL;
int zero = 0;
long long int var_10 = 7995460204833130137LL;
unsigned short var_11 = (unsigned short)5435;
unsigned short var_12 = (unsigned short)5543;
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
