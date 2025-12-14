#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_3 = 7074474797994584502LL;
int var_5 = -981576759;
unsigned char var_6 = (unsigned char)99;
int var_7 = 2112615388;
unsigned char var_11 = (unsigned char)186;
short var_12 = (short)-24913;
int zero = 0;
unsigned long long int var_13 = 7817182333030104911ULL;
long long int var_14 = -2649084897818956933LL;
long long int var_15 = 3201098280746562695LL;
_Bool var_16 = (_Bool)1;
short var_17 = (short)29103;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
