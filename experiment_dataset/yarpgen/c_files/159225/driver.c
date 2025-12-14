#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6410274795913992275ULL;
signed char var_3 = (signed char)53;
unsigned char var_5 = (unsigned char)79;
signed char var_9 = (signed char)-122;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_11 = 861026652;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-17226;
void init() {
}

void checksum() {
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
