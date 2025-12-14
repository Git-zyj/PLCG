#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-38;
int var_3 = -2042444997;
unsigned int var_4 = 4015898588U;
unsigned short var_6 = (unsigned short)32491;
int var_8 = -1418106151;
signed char var_9 = (signed char)123;
unsigned long long int var_12 = 7596025200338538347ULL;
int zero = 0;
unsigned long long int var_13 = 14309879564102123039ULL;
long long int var_14 = 1056400565227114803LL;
short var_15 = (short)23629;
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
