#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3014649817U;
unsigned short var_8 = (unsigned short)48634;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 672139524U;
int zero = 0;
unsigned short var_19 = (unsigned short)62257;
unsigned short var_20 = (unsigned short)64324;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
