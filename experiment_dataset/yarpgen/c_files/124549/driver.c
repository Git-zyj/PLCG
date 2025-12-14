#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1580384453U;
signed char var_8 = (signed char)-86;
long long int var_10 = 1849236895930350038LL;
unsigned short var_11 = (unsigned short)7262;
int var_14 = -97082643;
int zero = 0;
signed char var_20 = (signed char)97;
unsigned int var_21 = 2082316821U;
unsigned long long int var_22 = 2890124479083663787ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
