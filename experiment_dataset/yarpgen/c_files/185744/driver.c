#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)62;
signed char var_4 = (signed char)-73;
unsigned int var_6 = 3464653307U;
signed char var_7 = (signed char)-50;
signed char var_11 = (signed char)91;
int var_12 = 2128745826;
int zero = 0;
unsigned long long int var_13 = 840625233353402913ULL;
int var_14 = 308058783;
unsigned int var_15 = 1644627653U;
unsigned int var_16 = 2629614512U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
