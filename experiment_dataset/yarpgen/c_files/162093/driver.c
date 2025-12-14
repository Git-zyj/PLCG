#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)28;
int var_2 = 1731950614;
signed char var_4 = (signed char)18;
short var_5 = (short)6047;
short var_6 = (short)7189;
int zero = 0;
unsigned long long int var_11 = 17443324206938485163ULL;
short var_12 = (short)-29899;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
