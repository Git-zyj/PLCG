#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15597805445644967277ULL;
unsigned short var_4 = (unsigned short)7494;
_Bool var_6 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)52970;
unsigned long long int var_15 = 9484544104504437179ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
