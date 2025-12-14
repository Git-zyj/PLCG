#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)19959;
short var_4 = (short)15853;
long long int var_7 = 1400125614513942384LL;
unsigned short var_10 = (unsigned short)48806;
short var_14 = (short)15927;
int zero = 0;
int var_15 = -363255500;
unsigned int var_16 = 3545321513U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
