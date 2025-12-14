#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)220;
unsigned long long int var_2 = 2305144459531648807ULL;
short var_3 = (short)-27820;
int var_4 = 1555666330;
signed char var_6 = (signed char)-102;
short var_7 = (short)16487;
long long int var_8 = 8352061410237189193LL;
unsigned int var_9 = 2814417826U;
int zero = 0;
short var_13 = (short)4651;
unsigned short var_14 = (unsigned short)25704;
unsigned long long int var_15 = 5592275894987779500ULL;
long long int var_16 = -4841109268520664131LL;
short var_17 = (short)24850;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
