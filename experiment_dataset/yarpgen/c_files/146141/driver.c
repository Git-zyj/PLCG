#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -225105702;
unsigned short var_6 = (unsigned short)38689;
signed char var_7 = (signed char)99;
int zero = 0;
unsigned long long int var_11 = 5101329866224067250ULL;
int var_12 = -801348721;
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
