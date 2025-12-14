#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
signed char var_1 = (signed char)37;
signed char var_5 = (signed char)-100;
signed char var_7 = (signed char)-81;
signed char var_8 = (signed char)43;
signed char var_9 = (signed char)42;
int zero = 0;
signed char var_13 = (signed char)2;
signed char var_14 = (signed char)-126;
signed char var_15 = (signed char)111;
signed char var_16 = (signed char)6;
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
