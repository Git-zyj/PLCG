#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)33;
unsigned char var_2 = (unsigned char)59;
_Bool var_5 = (_Bool)1;
unsigned int var_10 = 768493668U;
int zero = 0;
unsigned char var_11 = (unsigned char)63;
unsigned short var_12 = (unsigned short)14798;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
