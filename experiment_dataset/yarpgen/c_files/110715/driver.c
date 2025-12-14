#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3723788193025397509ULL;
unsigned int var_2 = 636468371U;
signed char var_4 = (signed char)-68;
unsigned int var_6 = 859860318U;
int var_11 = 1990100584;
int zero = 0;
long long int var_12 = 551631725322229338LL;
signed char var_13 = (signed char)-94;
void init() {
}

void checksum() {
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
