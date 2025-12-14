#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21469;
signed char var_5 = (signed char)60;
int var_10 = -1402457067;
signed char var_11 = (signed char)58;
int zero = 0;
int var_15 = 1189846065;
unsigned long long int var_16 = 16599527417491605498ULL;
void init() {
}

void checksum() {
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
