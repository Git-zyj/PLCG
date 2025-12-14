#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2535059309717412193ULL;
unsigned long long int var_7 = 3421782581387721516ULL;
int var_10 = 1557525763;
signed char var_11 = (signed char)-16;
short var_12 = (short)16888;
int zero = 0;
unsigned int var_14 = 1546854728U;
signed char var_15 = (signed char)60;
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
