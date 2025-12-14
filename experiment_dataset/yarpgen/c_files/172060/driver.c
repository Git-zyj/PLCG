#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4144876114U;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-2608;
unsigned long long int var_4 = 4596578747323523904ULL;
_Bool var_5 = (_Bool)0;
int var_7 = 1791580600;
int zero = 0;
int var_11 = 1082146331;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
