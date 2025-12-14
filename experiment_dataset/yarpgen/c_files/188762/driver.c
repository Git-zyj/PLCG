#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = 2118462596;
unsigned long long int var_3 = 138228735847719906ULL;
unsigned char var_4 = (unsigned char)212;
unsigned char var_6 = (unsigned char)209;
unsigned int var_7 = 2925881723U;
unsigned char var_11 = (unsigned char)69;
unsigned long long int var_17 = 7239657638986538958ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)187;
unsigned int var_21 = 515815211U;
unsigned char var_22 = (unsigned char)212;
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
