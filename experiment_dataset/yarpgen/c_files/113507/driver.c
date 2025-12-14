#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 12635169401407922549ULL;
long long int var_10 = 4311615291297670136LL;
unsigned long long int var_12 = 14722334471395595393ULL;
short var_15 = (short)-2779;
int zero = 0;
short var_20 = (short)12396;
short var_21 = (short)20306;
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
