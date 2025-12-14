#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1505865968;
_Bool var_1 = (_Bool)1;
unsigned long long int var_5 = 6107517922611956796ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)11529;
unsigned short var_12 = (unsigned short)26185;
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
