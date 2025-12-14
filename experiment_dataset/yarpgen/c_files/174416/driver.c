#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)1;
unsigned int var_15 = 4267504288U;
unsigned char var_16 = (unsigned char)146;
unsigned long long int var_17 = 15151423966961414038ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)9932;
unsigned char var_21 = (unsigned char)160;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
