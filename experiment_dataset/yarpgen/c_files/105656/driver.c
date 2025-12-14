#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9303;
_Bool var_1 = (_Bool)1;
unsigned long long int var_6 = 8018440018210370674ULL;
unsigned short var_10 = (unsigned short)48456;
int zero = 0;
int var_13 = -1974884883;
long long int var_14 = -7354222138699219384LL;
unsigned short var_15 = (unsigned short)13463;
short var_16 = (short)-27492;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
