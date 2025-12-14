#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6463661194106654764LL;
unsigned short var_6 = (unsigned short)50925;
unsigned short var_9 = (unsigned short)30336;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)18663;
_Bool var_16 = (_Bool)0;
long long int var_17 = -1736634410952360260LL;
long long int var_18 = -5810648404439449454LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
