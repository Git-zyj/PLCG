#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28836;
unsigned int var_1 = 2127807807U;
long long int var_5 = -4884166001733034362LL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-2464;
int var_11 = -1333170154;
_Bool var_13 = (_Bool)1;
long long int var_14 = -762217642953188373LL;
int zero = 0;
long long int var_16 = -6765321306502188988LL;
int var_17 = -138275750;
long long int var_18 = -3382112121433649811LL;
void init() {
}

void checksum() {
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
