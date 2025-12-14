#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2513;
unsigned long long int var_2 = 4564924310794534380ULL;
_Bool var_3 = (_Bool)1;
long long int var_6 = 3135625591585171999LL;
long long int var_7 = 3221259881950986249LL;
unsigned int var_8 = 2469115450U;
int zero = 0;
unsigned short var_11 = (unsigned short)33821;
short var_12 = (short)-2021;
long long int var_13 = 2161724259496691347LL;
unsigned short var_14 = (unsigned short)42315;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
