#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 745269808;
unsigned long long int var_2 = 2300075785638870570ULL;
unsigned char var_7 = (unsigned char)88;
unsigned int var_11 = 2568547989U;
short var_14 = (short)32253;
int zero = 0;
unsigned int var_19 = 3758298566U;
signed char var_20 = (signed char)-58;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
