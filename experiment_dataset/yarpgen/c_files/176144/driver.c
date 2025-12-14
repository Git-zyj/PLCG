#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3011364574U;
short var_7 = (short)-18841;
unsigned short var_10 = (unsigned short)17892;
int zero = 0;
signed char var_13 = (signed char)49;
unsigned short var_14 = (unsigned short)43863;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
