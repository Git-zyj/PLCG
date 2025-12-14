#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-72;
unsigned short var_1 = (unsigned short)48883;
unsigned short var_7 = (unsigned short)2023;
signed char var_11 = (signed char)58;
unsigned short var_12 = (unsigned short)21191;
int zero = 0;
signed char var_14 = (signed char)-70;
signed char var_15 = (signed char)-13;
signed char var_16 = (signed char)27;
void init() {
}

void checksum() {
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
