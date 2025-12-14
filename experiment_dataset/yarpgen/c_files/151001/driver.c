#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 754383512;
unsigned short var_6 = (unsigned short)55456;
int var_11 = -797890062;
int zero = 0;
short var_12 = (short)17740;
long long int var_13 = 4228939889547510046LL;
unsigned int var_14 = 3906732635U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
