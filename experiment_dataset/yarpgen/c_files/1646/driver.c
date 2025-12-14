#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)206;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)111;
unsigned int var_7 = 3696178097U;
short var_8 = (short)12772;
unsigned int var_10 = 1830191786U;
unsigned int var_11 = 1424421762U;
int zero = 0;
long long int var_12 = -7177818625789294846LL;
int var_13 = -158600874;
void init() {
}

void checksum() {
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
