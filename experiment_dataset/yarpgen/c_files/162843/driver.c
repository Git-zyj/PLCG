#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-16;
unsigned int var_13 = 298946108U;
int zero = 0;
signed char var_15 = (signed char)124;
unsigned char var_16 = (unsigned char)49;
unsigned long long int var_17 = 15670904300101845834ULL;
unsigned int var_18 = 2851708803U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
