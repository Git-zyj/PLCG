#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_4 = 563302910U;
int var_5 = 1949559543;
short var_11 = (short)1724;
int zero = 0;
long long int var_12 = -2773034000907155336LL;
unsigned long long int var_13 = 10481420313396556971ULL;
unsigned int var_14 = 505879308U;
unsigned int var_15 = 177774861U;
long long int var_16 = 2205258203957172650LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
