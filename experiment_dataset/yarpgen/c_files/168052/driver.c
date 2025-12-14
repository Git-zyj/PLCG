#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2078142605413059578ULL;
_Bool var_4 = (_Bool)0;
unsigned short var_8 = (unsigned short)54496;
unsigned short var_12 = (unsigned short)24891;
int zero = 0;
unsigned short var_14 = (unsigned short)62110;
unsigned short var_15 = (unsigned short)26495;
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
