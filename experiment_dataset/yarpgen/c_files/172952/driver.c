#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27870;
unsigned char var_7 = (unsigned char)213;
signed char var_8 = (signed char)-99;
unsigned int var_11 = 2617038159U;
_Bool var_12 = (_Bool)1;
unsigned char var_15 = (unsigned char)244;
int zero = 0;
long long int var_17 = -2074558367105281431LL;
unsigned char var_18 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
