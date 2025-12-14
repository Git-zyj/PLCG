#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-84;
short var_2 = (short)6703;
signed char var_5 = (signed char)-89;
unsigned int var_6 = 4265017592U;
int zero = 0;
short var_10 = (short)-6459;
signed char var_11 = (signed char)-53;
unsigned long long int var_12 = 1024395259926900099ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
