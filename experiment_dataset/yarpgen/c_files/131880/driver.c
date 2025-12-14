#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1089235600;
unsigned char var_2 = (unsigned char)30;
unsigned short var_18 = (unsigned short)12805;
int zero = 0;
unsigned long long int var_20 = 4502183269148911691ULL;
short var_21 = (short)25874;
unsigned short var_22 = (unsigned short)33212;
short var_23 = (short)-13169;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
