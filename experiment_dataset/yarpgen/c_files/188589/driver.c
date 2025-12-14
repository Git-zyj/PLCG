#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-91;
int var_7 = -1092420841;
int var_8 = -1581583071;
unsigned int var_9 = 4093945330U;
int var_11 = -1021453871;
signed char var_12 = (signed char)90;
int zero = 0;
signed char var_14 = (signed char)6;
unsigned int var_15 = 1944152242U;
signed char var_16 = (signed char)93;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
