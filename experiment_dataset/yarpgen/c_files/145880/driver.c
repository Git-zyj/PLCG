#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1852037236;
signed char var_4 = (signed char)118;
short var_6 = (short)-14430;
long long int var_10 = -6574174438410941427LL;
int zero = 0;
signed char var_16 = (signed char)-71;
unsigned int var_17 = 55280115U;
unsigned short var_18 = (unsigned short)46154;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
