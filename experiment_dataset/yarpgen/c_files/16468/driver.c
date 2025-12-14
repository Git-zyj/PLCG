#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 147469194;
signed char var_3 = (signed char)-118;
short var_6 = (short)-9384;
unsigned long long int var_7 = 7953232325278842959ULL;
unsigned long long int var_9 = 13158163114969428325ULL;
int zero = 0;
signed char var_10 = (signed char)107;
unsigned int var_11 = 1514024142U;
short var_12 = (short)3030;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
