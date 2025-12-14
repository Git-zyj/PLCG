#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)234;
int var_14 = 938840033;
signed char var_16 = (signed char)-17;
short var_19 = (short)31580;
int zero = 0;
long long int var_20 = -194659308345101952LL;
unsigned long long int var_21 = 1167240280877704278ULL;
unsigned int var_22 = 1784567739U;
long long int var_23 = -8039328040595647789LL;
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
