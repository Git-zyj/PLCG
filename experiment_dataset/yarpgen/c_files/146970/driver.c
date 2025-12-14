#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)248;
unsigned long long int var_2 = 12184939761278349205ULL;
int var_6 = 1708468984;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_10 = (short)2474;
unsigned char var_11 = (unsigned char)74;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
