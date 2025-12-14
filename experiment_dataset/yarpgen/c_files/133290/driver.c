#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)30415;
unsigned short var_8 = (unsigned short)7639;
unsigned long long int var_9 = 15970994161276811837ULL;
signed char var_13 = (signed char)102;
int zero = 0;
unsigned short var_20 = (unsigned short)46734;
int var_21 = 2110641690;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
