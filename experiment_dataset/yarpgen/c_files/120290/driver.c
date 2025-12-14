#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_4 = -5048128159952600367LL;
unsigned int var_6 = 1890838510U;
unsigned int var_8 = 983472693U;
int zero = 0;
unsigned short var_12 = (unsigned short)49484;
unsigned short var_13 = (unsigned short)59529;
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
