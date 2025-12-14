#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)100;
signed char var_4 = (signed char)101;
unsigned char var_8 = (unsigned char)36;
int zero = 0;
int var_13 = -42001329;
int var_14 = -110701724;
unsigned long long int var_15 = 10208532153494158774ULL;
signed char var_16 = (signed char)-70;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
