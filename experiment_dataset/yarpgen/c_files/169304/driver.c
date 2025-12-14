#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)122;
unsigned char var_11 = (unsigned char)90;
unsigned short var_15 = (unsigned short)46317;
unsigned int var_17 = 2662706939U;
long long int var_18 = 2572426741508705960LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = 2660146773287932897LL;
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
