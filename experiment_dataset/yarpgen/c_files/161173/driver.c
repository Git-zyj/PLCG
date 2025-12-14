#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)14526;
short var_6 = (short)-32456;
unsigned char var_13 = (unsigned char)168;
unsigned char var_14 = (unsigned char)93;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 3298851931U;
unsigned short var_21 = (unsigned short)37747;
unsigned long long int var_22 = 5873919489416919869ULL;
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
