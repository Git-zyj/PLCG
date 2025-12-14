#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)163;
unsigned char var_2 = (unsigned char)211;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)4412;
unsigned short var_10 = (unsigned short)46423;
int zero = 0;
unsigned int var_11 = 4285137611U;
unsigned long long int var_12 = 4953002949374809694ULL;
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
