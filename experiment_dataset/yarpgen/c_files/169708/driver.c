#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_4 = 1173715664;
signed char var_6 = (signed char)113;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 1747887329U;
unsigned int var_11 = 696344593U;
unsigned char var_12 = (unsigned char)19;
unsigned int var_13 = 3638074534U;
int zero = 0;
unsigned char var_15 = (unsigned char)86;
long long int var_16 = -6563913714707941145LL;
_Bool var_17 = (_Bool)1;
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
