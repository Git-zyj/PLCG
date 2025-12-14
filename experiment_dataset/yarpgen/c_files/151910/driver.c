#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1312830156;
unsigned long long int var_1 = 12351587492186186362ULL;
unsigned short var_2 = (unsigned short)25368;
unsigned long long int var_11 = 13251403008409922483ULL;
signed char var_13 = (signed char)76;
int zero = 0;
short var_14 = (short)-19631;
unsigned int var_15 = 2850016722U;
void init() {
}

void checksum() {
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
