#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-52;
short var_10 = (short)7618;
int var_11 = -545953412;
short var_13 = (short)7190;
unsigned long long int var_17 = 16173404727388387247ULL;
int zero = 0;
short var_18 = (short)3041;
int var_19 = 1008613435;
int var_20 = 528679966;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
