#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3781736027919908361LL;
short var_2 = (short)-3528;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)12912;
_Bool var_5 = (_Bool)0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)29101;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-20356;
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
