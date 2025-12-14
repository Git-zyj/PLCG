#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8156203726025008520ULL;
long long int var_2 = -3351640327971057815LL;
short var_4 = (short)-13745;
long long int var_5 = -4212671601561614054LL;
_Bool var_6 = (_Bool)1;
long long int var_7 = 7393211810692530900LL;
unsigned int var_11 = 2606164259U;
int var_14 = -935756207;
int zero = 0;
short var_15 = (short)8035;
short var_16 = (short)-30695;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
