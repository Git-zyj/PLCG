#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8666254572879119954ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_9 = (unsigned char)70;
unsigned short var_10 = (unsigned short)52203;
int zero = 0;
short var_12 = (short)-7650;
unsigned short var_13 = (unsigned short)23620;
long long int var_14 = -2797148608730954592LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
