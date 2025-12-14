#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4369594037909714488LL;
unsigned short var_5 = (unsigned short)19634;
signed char var_12 = (signed char)65;
int var_14 = 575492940;
long long int var_16 = -6026602689483361532LL;
unsigned int var_17 = 2958846582U;
int zero = 0;
unsigned short var_18 = (unsigned short)40433;
long long int var_19 = -3328950570837408653LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
