#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -6331961508535697646LL;
long long int var_12 = -8783074005635563680LL;
signed char var_15 = (signed char)126;
int zero = 0;
short var_20 = (short)19459;
signed char var_21 = (signed char)-67;
unsigned int var_22 = 3538811506U;
unsigned int var_23 = 2356035633U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
