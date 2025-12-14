#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)127;
short var_3 = (short)-31787;
short var_6 = (short)15940;
unsigned int var_11 = 783772725U;
int zero = 0;
short var_13 = (short)11377;
unsigned long long int var_14 = 6381179879076136316ULL;
int var_15 = 211847611;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
