#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49254;
long long int var_3 = -7573130601698784950LL;
unsigned char var_4 = (unsigned char)96;
int var_5 = -75289344;
long long int var_8 = 3986243750138806735LL;
unsigned int var_9 = 3072651036U;
long long int var_11 = -5572432272712607431LL;
int zero = 0;
unsigned long long int var_12 = 2447917839125364644ULL;
unsigned char var_13 = (unsigned char)44;
unsigned char var_14 = (unsigned char)247;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
