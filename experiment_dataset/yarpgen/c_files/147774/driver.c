#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = 8299510521607673293LL;
unsigned int var_7 = 242782057U;
_Bool var_8 = (_Bool)0;
long long int var_10 = 5561401957210502645LL;
unsigned int var_14 = 1010086083U;
int zero = 0;
long long int var_16 = -8169101892958379275LL;
unsigned short var_17 = (unsigned short)41534;
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
