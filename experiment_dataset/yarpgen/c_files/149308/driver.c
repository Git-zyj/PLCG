#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4063;
unsigned int var_4 = 1707967692U;
signed char var_8 = (signed char)-41;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)6941;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = 2638792942489254462LL;
void init() {
}

void checksum() {
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
