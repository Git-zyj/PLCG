#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_6 = (unsigned short)8300;
_Bool var_11 = (_Bool)1;
long long int var_15 = 7596866890156165059LL;
short var_17 = (short)-31795;
int zero = 0;
signed char var_19 = (signed char)85;
unsigned short var_20 = (unsigned short)35177;
void init() {
}

void checksum() {
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
