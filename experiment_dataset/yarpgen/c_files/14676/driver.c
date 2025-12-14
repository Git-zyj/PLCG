#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)7401;
int var_14 = 1296500009;
long long int var_15 = 2843607312901978871LL;
signed char var_17 = (signed char)-7;
int zero = 0;
int var_20 = 536966183;
signed char var_21 = (signed char)-23;
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
