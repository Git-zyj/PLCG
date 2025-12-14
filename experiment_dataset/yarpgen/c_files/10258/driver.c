#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15609792829606073529ULL;
int var_2 = -1585684294;
signed char var_5 = (signed char)-24;
unsigned char var_6 = (unsigned char)48;
int var_11 = 1944777087;
int zero = 0;
signed char var_14 = (signed char)3;
unsigned char var_15 = (unsigned char)19;
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
