#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)92;
unsigned long long int var_8 = 11558908224271635918ULL;
unsigned char var_17 = (unsigned char)179;
int zero = 0;
unsigned char var_18 = (unsigned char)56;
unsigned char var_19 = (unsigned char)113;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
