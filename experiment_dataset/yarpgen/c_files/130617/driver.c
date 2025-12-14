#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1224801466;
signed char var_5 = (signed char)115;
unsigned long long int var_8 = 7246962823844637031ULL;
unsigned char var_10 = (unsigned char)159;
unsigned long long int var_11 = 3459661721360388689ULL;
int zero = 0;
short var_15 = (short)6937;
short var_16 = (short)8513;
unsigned int var_17 = 36008592U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
