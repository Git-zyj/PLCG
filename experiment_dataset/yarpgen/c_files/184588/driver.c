#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 325227889U;
int var_6 = 1464094148;
unsigned int var_7 = 628457612U;
unsigned int var_10 = 1554517472U;
int zero = 0;
unsigned long long int var_12 = 3097105638953563984ULL;
short var_13 = (short)14447;
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
