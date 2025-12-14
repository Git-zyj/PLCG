#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)88;
long long int var_4 = -2385228678299631586LL;
unsigned int var_7 = 656663445U;
unsigned char var_10 = (unsigned char)66;
unsigned int var_11 = 537432478U;
int zero = 0;
long long int var_12 = 3886222178224888656LL;
unsigned int var_13 = 1332595035U;
unsigned int var_14 = 2773229756U;
unsigned char var_15 = (unsigned char)94;
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
