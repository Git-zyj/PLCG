#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3760724412543985258ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 4917136679383397204ULL;
unsigned int var_10 = 958258135U;
unsigned int var_12 = 4246779995U;
unsigned int var_13 = 3904716261U;
_Bool var_14 = (_Bool)1;
unsigned char var_16 = (unsigned char)89;
signed char var_17 = (signed char)-120;
unsigned short var_19 = (unsigned short)1218;
int zero = 0;
unsigned short var_20 = (unsigned short)24604;
_Bool var_21 = (_Bool)0;
long long int var_22 = 3613505140748831406LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
