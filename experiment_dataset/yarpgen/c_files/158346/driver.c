#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -171711158;
short var_2 = (short)23606;
long long int var_5 = 2052807418236779371LL;
unsigned char var_7 = (unsigned char)56;
int var_11 = -1531725020;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = 1447191121;
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
