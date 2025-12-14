#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4390;
unsigned char var_1 = (unsigned char)196;
int var_3 = -1873891877;
short var_5 = (short)18913;
signed char var_7 = (signed char)-78;
unsigned int var_9 = 2164957137U;
int zero = 0;
int var_11 = 1459635223;
short var_12 = (short)11485;
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
