#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2080;
unsigned long long int var_3 = 10398221527535177343ULL;
unsigned int var_7 = 2969303516U;
unsigned long long int var_8 = 12486371920414426822ULL;
unsigned long long int var_12 = 10372201561120489837ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)46417;
unsigned long long int var_15 = 4605724292332877ULL;
unsigned short var_16 = (unsigned short)33488;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
