#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)18;
signed char var_12 = (signed char)58;
short var_13 = (short)11824;
signed char var_14 = (signed char)-72;
int zero = 0;
signed char var_16 = (signed char)32;
signed char var_17 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
