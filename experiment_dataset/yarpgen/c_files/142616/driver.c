#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)109;
long long int var_17 = -5274420390505961338LL;
int zero = 0;
long long int var_20 = -8743262270480178717LL;
int var_21 = 354280427;
unsigned char var_22 = (unsigned char)3;
unsigned short var_23 = (unsigned short)24666;
_Bool var_24 = (_Bool)0;
unsigned int var_25 = 33759100U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
