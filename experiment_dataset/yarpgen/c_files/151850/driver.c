#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-15603;
unsigned int var_4 = 1321215186U;
unsigned int var_11 = 1939096350U;
int zero = 0;
signed char var_12 = (signed char)-120;
long long int var_13 = -4989273472718978127LL;
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
