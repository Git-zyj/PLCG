#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-62;
short var_1 = (short)-30280;
signed char var_2 = (signed char)126;
unsigned char var_3 = (unsigned char)78;
int var_4 = 1100754937;
unsigned int var_5 = 3764311234U;
int zero = 0;
unsigned int var_10 = 4032220419U;
unsigned char var_11 = (unsigned char)79;
unsigned char var_12 = (unsigned char)73;
unsigned long long int var_13 = 1152461311192055324ULL;
unsigned int var_14 = 3412964655U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
