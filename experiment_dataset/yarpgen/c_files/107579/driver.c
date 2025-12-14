#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1872149024;
unsigned int var_2 = 2102613973U;
unsigned long long int var_4 = 13192629997827628967ULL;
long long int var_5 = -407905630004860483LL;
int var_6 = -448281959;
int var_7 = 1400988418;
unsigned int var_8 = 1408054075U;
int var_9 = 1108321644;
short var_10 = (short)-15775;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2262188940U;
unsigned int var_14 = 288763458U;
unsigned int var_15 = 4179074808U;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)20018;
short var_18 = (short)29413;
unsigned int var_19 = 2379341262U;
int var_20 = -329898897;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
