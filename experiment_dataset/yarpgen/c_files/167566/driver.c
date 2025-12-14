#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)1932;
signed char var_15 = (signed char)-64;
long long int var_17 = -8247206612436041544LL;
int zero = 0;
unsigned long long int var_19 = 11456027355474413012ULL;
int var_20 = 481125069;
unsigned long long int var_21 = 9107890650954289942ULL;
signed char var_22 = (signed char)-24;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
