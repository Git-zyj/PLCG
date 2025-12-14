#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22377;
int var_5 = 1593402619;
unsigned long long int var_13 = 6035616493994271044ULL;
int zero = 0;
long long int var_14 = -6304515834532005936LL;
unsigned short var_15 = (unsigned short)45647;
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
