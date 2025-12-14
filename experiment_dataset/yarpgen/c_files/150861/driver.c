#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6242548102452735211ULL;
short var_3 = (short)13119;
unsigned int var_6 = 2260651910U;
unsigned short var_7 = (unsigned short)8081;
int zero = 0;
int var_11 = 698802644;
unsigned int var_12 = 4183937618U;
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
