#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1198990169U;
long long int var_6 = 7324380162803343757LL;
long long int var_10 = 6843443855867923656LL;
int zero = 0;
unsigned int var_11 = 1430027417U;
signed char var_12 = (signed char)20;
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
