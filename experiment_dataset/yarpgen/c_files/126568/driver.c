#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15466;
signed char var_3 = (signed char)-19;
signed char var_4 = (signed char)14;
short var_5 = (short)724;
unsigned int var_6 = 3853753724U;
short var_10 = (short)1532;
unsigned int var_11 = 578855825U;
int zero = 0;
unsigned int var_13 = 2153750290U;
signed char var_14 = (signed char)-19;
short var_15 = (short)-17945;
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
