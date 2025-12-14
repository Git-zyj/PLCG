#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 40056695U;
signed char var_2 = (signed char)122;
unsigned long long int var_4 = 10362383767281553628ULL;
long long int var_6 = -6656047065903393840LL;
unsigned char var_7 = (unsigned char)46;
unsigned char var_9 = (unsigned char)200;
unsigned int var_10 = 31345456U;
int zero = 0;
unsigned long long int var_11 = 11818559082791686986ULL;
int var_12 = 838853062;
void init() {
}

void checksum() {
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
