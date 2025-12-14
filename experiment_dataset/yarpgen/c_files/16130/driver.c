#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)207;
int var_6 = -2112919258;
short var_9 = (short)-23316;
short var_11 = (short)-27622;
unsigned int var_12 = 3596482901U;
int zero = 0;
signed char var_13 = (signed char)14;
unsigned int var_14 = 3128233820U;
short var_15 = (short)3431;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
