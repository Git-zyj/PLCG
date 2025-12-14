#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1685156189;
int var_1 = -2042606393;
unsigned int var_5 = 2697736088U;
short var_10 = (short)12824;
int zero = 0;
int var_11 = -1161662746;
unsigned short var_12 = (unsigned short)18079;
unsigned short var_13 = (unsigned short)35794;
long long int var_14 = 8503164036851279770LL;
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
