#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1272168247;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
short var_11 = (short)19161;
unsigned long long int var_15 = 7318274040850595223ULL;
unsigned short var_18 = (unsigned short)14798;
int zero = 0;
int var_20 = 961061425;
unsigned long long int var_21 = 8675601359930997881ULL;
unsigned int var_22 = 1495522794U;
short var_23 = (short)-18142;
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
