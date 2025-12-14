#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
int var_2 = -819520760;
short var_3 = (short)-24561;
short var_5 = (short)8275;
unsigned int var_7 = 3834796369U;
short var_8 = (short)25653;
unsigned long long int var_10 = 16435054395547930007ULL;
unsigned char var_11 = (unsigned char)238;
int var_12 = -352302917;
int zero = 0;
unsigned int var_13 = 297174330U;
int var_14 = 1282701661;
long long int var_15 = -3201289696666333022LL;
void init() {
}

void checksum() {
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
