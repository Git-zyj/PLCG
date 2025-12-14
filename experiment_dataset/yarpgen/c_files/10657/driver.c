#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3189893483U;
unsigned long long int var_3 = 14835740382563220808ULL;
signed char var_5 = (signed char)102;
unsigned long long int var_6 = 16311471300323981995ULL;
unsigned int var_8 = 291389770U;
int zero = 0;
unsigned char var_12 = (unsigned char)1;
long long int var_13 = 8664843831101200737LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
