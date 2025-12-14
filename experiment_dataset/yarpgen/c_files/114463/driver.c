#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 294639135U;
signed char var_5 = (signed char)27;
signed char var_6 = (signed char)61;
unsigned long long int var_8 = 17482536511689095638ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)23690;
unsigned int var_11 = 1260167580U;
unsigned int var_12 = 3105964016U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
