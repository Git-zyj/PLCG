#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-38;
signed char var_2 = (signed char)24;
signed char var_4 = (signed char)-19;
signed char var_5 = (signed char)-119;
signed char var_7 = (signed char)117;
int zero = 0;
signed char var_12 = (signed char)-11;
signed char var_13 = (signed char)35;
signed char var_14 = (signed char)61;
signed char var_15 = (signed char)48;
signed char var_16 = (signed char)52;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
