#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-25;
signed char var_2 = (signed char)61;
unsigned long long int var_8 = 4728485163686257494ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)64;
unsigned short var_15 = (unsigned short)48428;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
