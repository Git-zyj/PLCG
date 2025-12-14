#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1349445584558386684ULL;
short var_11 = (short)10459;
signed char var_12 = (signed char)123;
unsigned char var_13 = (unsigned char)50;
unsigned long long int var_14 = 310297358800634886ULL;
int zero = 0;
unsigned int var_16 = 2803473688U;
unsigned long long int var_17 = 11648802342947678591ULL;
void init() {
}

void checksum() {
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
