#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)33277;
int var_6 = 511132697;
int var_8 = 1116914735;
int var_10 = -1264128470;
int var_11 = 1664018920;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = -1381469294;
int var_14 = -1673583635;
short var_15 = (short)7913;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
