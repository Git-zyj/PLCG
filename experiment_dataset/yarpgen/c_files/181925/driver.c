#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -173829428;
short var_3 = (short)-18141;
long long int var_6 = -4194730074085748709LL;
int var_13 = -1490183592;
_Bool var_14 = (_Bool)0;
int var_16 = 737798190;
short var_17 = (short)-31820;
int zero = 0;
int var_20 = -1362475014;
short var_21 = (short)16621;
int var_22 = 1508482233;
int var_23 = 316860086;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
