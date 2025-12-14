#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)15697;
short var_5 = (short)16134;
short var_7 = (short)-16020;
unsigned int var_8 = 2814973470U;
int zero = 0;
short var_10 = (short)-13814;
signed char var_11 = (signed char)-43;
unsigned short var_12 = (unsigned short)61266;
unsigned long long int var_13 = 8760844347953273335ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
