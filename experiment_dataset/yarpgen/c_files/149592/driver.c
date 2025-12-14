#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29015;
short var_2 = (short)-5650;
signed char var_3 = (signed char)15;
signed char var_5 = (signed char)-31;
int zero = 0;
unsigned int var_10 = 1125622617U;
unsigned int var_11 = 1765300002U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
