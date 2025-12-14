#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)24555;
short var_4 = (short)22427;
short var_5 = (short)-15477;
signed char var_6 = (signed char)126;
signed char var_7 = (signed char)88;
signed char var_8 = (signed char)28;
short var_9 = (short)29244;
int zero = 0;
short var_12 = (short)32377;
short var_13 = (short)3910;
short var_14 = (short)-1594;
signed char var_15 = (signed char)-19;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
