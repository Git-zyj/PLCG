#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-25230;
unsigned long long int var_3 = 7258483825353484ULL;
short var_8 = (short)15456;
short var_13 = (short)9078;
int zero = 0;
int var_15 = 889970144;
unsigned short var_16 = (unsigned short)7843;
void init() {
}

void checksum() {
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
