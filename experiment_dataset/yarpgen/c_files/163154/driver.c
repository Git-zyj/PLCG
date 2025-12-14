#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)239;
long long int var_8 = 3719210416192033802LL;
unsigned char var_10 = (unsigned char)9;
unsigned char var_11 = (unsigned char)33;
unsigned char var_12 = (unsigned char)28;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)59494;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2887918663U;
void init() {
}

void checksum() {
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
