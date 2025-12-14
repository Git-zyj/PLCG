#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2481815728U;
int var_8 = 742396157;
unsigned int var_10 = 3385104303U;
unsigned long long int var_15 = 7609290933414979163ULL;
int zero = 0;
unsigned int var_18 = 3964663953U;
unsigned int var_19 = 2131050492U;
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
