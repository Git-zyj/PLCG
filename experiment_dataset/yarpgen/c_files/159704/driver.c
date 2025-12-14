#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)24887;
unsigned short var_6 = (unsigned short)62052;
unsigned char var_8 = (unsigned char)203;
unsigned char var_10 = (unsigned char)123;
int zero = 0;
unsigned short var_11 = (unsigned short)32452;
unsigned long long int var_12 = 16601701405704552546ULL;
long long int var_13 = 4686795667774055514LL;
long long int var_14 = 42142497724745904LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
