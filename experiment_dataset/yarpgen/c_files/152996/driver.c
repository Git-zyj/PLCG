#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3415201706U;
unsigned int var_5 = 3657150166U;
unsigned int var_10 = 3582133557U;
int zero = 0;
signed char var_18 = (signed char)48;
signed char var_19 = (signed char)19;
signed char var_20 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
