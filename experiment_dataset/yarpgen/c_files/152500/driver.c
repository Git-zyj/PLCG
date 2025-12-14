#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)31080;
_Bool var_8 = (_Bool)1;
short var_10 = (short)28018;
unsigned long long int var_12 = 14483141774141414054ULL;
int zero = 0;
short var_15 = (short)20696;
unsigned short var_16 = (unsigned short)49819;
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
