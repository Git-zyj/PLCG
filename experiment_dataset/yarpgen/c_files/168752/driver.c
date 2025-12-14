#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31682;
unsigned long long int var_10 = 12823289853502699023ULL;
unsigned long long int var_12 = 8652872189161700949ULL;
signed char var_16 = (signed char)-86;
short var_17 = (short)-22827;
int zero = 0;
signed char var_18 = (signed char)-100;
int var_19 = 944832802;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
