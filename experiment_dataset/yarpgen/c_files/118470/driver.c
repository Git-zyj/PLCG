#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)20329;
unsigned long long int var_5 = 17923693848153473445ULL;
int var_6 = 935730882;
int var_7 = 288178992;
unsigned short var_10 = (unsigned short)6423;
int zero = 0;
int var_12 = 1970933346;
unsigned long long int var_13 = 10301946797341814543ULL;
unsigned short var_14 = (unsigned short)15481;
unsigned int var_15 = 2350966426U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
