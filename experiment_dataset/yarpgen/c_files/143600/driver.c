#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1533901105;
int var_2 = -375179227;
short var_3 = (short)29150;
int var_6 = 806108026;
int zero = 0;
int var_10 = -129390031;
unsigned int var_11 = 1089757986U;
int var_12 = -1921513781;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
