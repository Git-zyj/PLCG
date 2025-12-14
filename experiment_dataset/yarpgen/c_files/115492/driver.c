#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5342;
unsigned short var_3 = (unsigned short)34383;
signed char var_5 = (signed char)59;
signed char var_8 = (signed char)94;
int zero = 0;
short var_12 = (short)-29829;
unsigned short var_13 = (unsigned short)1592;
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
