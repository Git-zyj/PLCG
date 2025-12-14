#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2799173743798099940LL;
_Bool var_4 = (_Bool)1;
long long int var_6 = -6111525833748434923LL;
unsigned short var_7 = (unsigned short)24622;
short var_9 = (short)-19029;
int zero = 0;
unsigned int var_15 = 590802031U;
unsigned short var_16 = (unsigned short)42542;
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
