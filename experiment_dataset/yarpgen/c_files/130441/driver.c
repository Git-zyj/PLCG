#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 56278257U;
short var_4 = (short)18174;
short var_5 = (short)-27406;
int var_6 = 992379303;
int var_7 = 754995532;
unsigned int var_9 = 631707328U;
int zero = 0;
short var_12 = (short)6158;
unsigned int var_13 = 2262410357U;
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
