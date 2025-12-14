#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
signed char var_10 = (signed char)16;
long long int var_11 = 311167007737783963LL;
unsigned char var_12 = (unsigned char)91;
int zero = 0;
unsigned int var_14 = 1522605596U;
unsigned char var_15 = (unsigned char)211;
_Bool var_16 = (_Bool)0;
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
