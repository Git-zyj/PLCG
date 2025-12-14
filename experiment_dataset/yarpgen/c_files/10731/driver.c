#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20120;
unsigned short var_3 = (unsigned short)55067;
int var_14 = 2032713405;
int zero = 0;
unsigned long long int var_17 = 18078441969957194865ULL;
signed char var_18 = (signed char)-42;
unsigned int var_19 = 3712007510U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
