#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 672852481U;
unsigned int var_6 = 4000727894U;
long long int var_11 = -5142141115915195054LL;
unsigned int var_13 = 2068703966U;
unsigned long long int var_14 = 6646700929084622614ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)33312;
int var_16 = -646137077;
unsigned int var_17 = 3414395782U;
unsigned char var_18 = (unsigned char)178;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
