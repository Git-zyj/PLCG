#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2523732601U;
int var_3 = -217212782;
unsigned short var_4 = (unsigned short)54133;
_Bool var_5 = (_Bool)1;
int var_10 = 752202619;
unsigned int var_11 = 2577300662U;
unsigned int var_14 = 1273582905U;
short var_15 = (short)23538;
int var_18 = 1956704900;
int zero = 0;
unsigned long long int var_20 = 13357361729675362668ULL;
unsigned int var_21 = 1397344617U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
