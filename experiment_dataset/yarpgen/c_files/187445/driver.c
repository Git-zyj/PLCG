#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1300275632U;
signed char var_3 = (signed char)57;
int var_5 = -2098802315;
short var_6 = (short)19131;
signed char var_8 = (signed char)6;
int zero = 0;
unsigned int var_10 = 3677141774U;
unsigned int var_11 = 1674083063U;
unsigned char var_12 = (unsigned char)89;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
