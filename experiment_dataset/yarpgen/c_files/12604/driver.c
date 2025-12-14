#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 335499846;
signed char var_8 = (signed char)122;
unsigned char var_11 = (unsigned char)242;
int var_13 = 1748128544;
unsigned int var_14 = 3122456880U;
int zero = 0;
signed char var_16 = (signed char)-39;
signed char var_17 = (signed char)-26;
unsigned int var_18 = 319215701U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
