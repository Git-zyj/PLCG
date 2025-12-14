#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-15203;
unsigned short var_3 = (unsigned short)62783;
short var_5 = (short)13804;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 1054695485196622136ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)22840;
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
