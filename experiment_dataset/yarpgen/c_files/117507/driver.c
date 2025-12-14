#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -5716602311982756116LL;
long long int var_8 = -6087608870180651552LL;
long long int var_9 = 4525198178105238028LL;
int var_19 = 950271329;
int zero = 0;
signed char var_20 = (signed char)100;
long long int var_21 = -8341046951498982109LL;
unsigned char var_22 = (unsigned char)51;
void init() {
}

void checksum() {
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
