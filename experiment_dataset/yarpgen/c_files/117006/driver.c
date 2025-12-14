#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1645839999;
short var_6 = (short)27800;
short var_8 = (short)-6513;
unsigned int var_15 = 4195523927U;
int zero = 0;
long long int var_20 = -5108499071275433149LL;
int var_21 = -1265130298;
signed char var_22 = (signed char)-61;
unsigned long long int var_23 = 18064173508320354623ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
