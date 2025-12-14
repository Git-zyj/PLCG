#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)32031;
unsigned long long int var_8 = 638789409972678524ULL;
_Bool var_10 = (_Bool)0;
int var_12 = 115842683;
int zero = 0;
unsigned short var_16 = (unsigned short)49831;
unsigned int var_17 = 4106424668U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
