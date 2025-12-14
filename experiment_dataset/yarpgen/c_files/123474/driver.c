#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)30942;
int var_7 = -712812883;
unsigned short var_8 = (unsigned short)30250;
signed char var_10 = (signed char)64;
int zero = 0;
signed char var_11 = (signed char)63;
unsigned long long int var_12 = 11443993347300580687ULL;
short var_13 = (short)28656;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
