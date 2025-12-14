#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 6467260276701153608ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 12966307213963097421ULL;
long long int var_14 = -1928691873849075826LL;
unsigned char var_17 = (unsigned char)193;
int zero = 0;
unsigned char var_18 = (unsigned char)255;
unsigned long long int var_19 = 11001484033277248216ULL;
unsigned short var_20 = (unsigned short)29432;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
