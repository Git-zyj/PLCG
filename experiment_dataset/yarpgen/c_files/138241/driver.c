#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8758280432720623426LL;
unsigned char var_6 = (unsigned char)219;
signed char var_7 = (signed char)-81;
int zero = 0;
unsigned int var_11 = 2704000093U;
unsigned long long int var_12 = 16838499043185460186ULL;
void init() {
}

void checksum() {
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
