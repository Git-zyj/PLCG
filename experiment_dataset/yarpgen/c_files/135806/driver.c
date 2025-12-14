#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 593424626U;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
short var_4 = (short)30584;
short var_8 = (short)22803;
unsigned long long int var_9 = 1392751598562250453ULL;
int zero = 0;
long long int var_10 = 8204467495142008782LL;
int var_11 = 1645795297;
unsigned long long int var_12 = 7715889393661128621ULL;
int var_13 = -2100804362;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
