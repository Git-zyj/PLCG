#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3412588131U;
int var_6 = 1778734657;
short var_8 = (short)-9012;
short var_10 = (short)22469;
unsigned long long int var_12 = 9947324197977000664ULL;
unsigned short var_13 = (unsigned short)50274;
_Bool var_14 = (_Bool)1;
unsigned int var_16 = 1451041088U;
long long int var_17 = 1991302181620014337LL;
int zero = 0;
long long int var_18 = 2125111491457244445LL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
