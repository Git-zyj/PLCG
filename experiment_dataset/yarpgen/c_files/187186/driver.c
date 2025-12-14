#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26919;
_Bool var_1 = (_Bool)1;
unsigned char var_11 = (unsigned char)38;
int zero = 0;
short var_14 = (short)2891;
short var_15 = (short)19957;
short var_16 = (short)-16875;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
