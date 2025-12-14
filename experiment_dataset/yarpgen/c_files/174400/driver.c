#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)58;
signed char var_2 = (signed char)20;
signed char var_5 = (signed char)-51;
signed char var_8 = (signed char)120;
signed char var_10 = (signed char)86;
int zero = 0;
signed char var_12 = (signed char)-91;
signed char var_13 = (signed char)-86;
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
