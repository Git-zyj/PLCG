#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11266301408401525539ULL;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)3;
unsigned long long int var_10 = 11193185374714037327ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 6237343961468927330ULL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)19;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
