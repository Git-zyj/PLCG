#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43719;
short var_1 = (short)85;
short var_14 = (short)29232;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_16 = (short)-24132;
unsigned char var_17 = (unsigned char)8;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
