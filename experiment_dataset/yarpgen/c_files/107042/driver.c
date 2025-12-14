#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1566244145U;
unsigned int var_2 = 2540910897U;
unsigned int var_8 = 727589151U;
int var_9 = -914004224;
int zero = 0;
short var_10 = (short)4531;
int var_11 = 633041124;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
