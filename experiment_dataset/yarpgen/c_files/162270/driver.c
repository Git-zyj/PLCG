#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 518501507232565230ULL;
short var_2 = (short)5071;
short var_3 = (short)-29215;
unsigned int var_7 = 4230808032U;
short var_8 = (short)6183;
unsigned int var_10 = 3412319823U;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-20875;
unsigned int var_17 = 2109495825U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
