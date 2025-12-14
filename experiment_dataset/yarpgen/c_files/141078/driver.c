#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13315;
signed char var_3 = (signed char)87;
unsigned long long int var_7 = 10072885757835869755ULL;
short var_15 = (short)18871;
int zero = 0;
signed char var_16 = (signed char)102;
unsigned long long int var_17 = 10797124974306117651ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
