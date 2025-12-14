#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 210729621U;
unsigned short var_8 = (unsigned short)47022;
short var_10 = (short)-3571;
short var_11 = (short)25162;
int zero = 0;
unsigned short var_14 = (unsigned short)49874;
short var_15 = (short)-14364;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
