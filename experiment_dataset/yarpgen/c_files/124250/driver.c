#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)(-127 - 1);
unsigned long long int var_8 = 6389696229209443148ULL;
short var_10 = (short)21527;
signed char var_11 = (signed char)-91;
int zero = 0;
signed char var_13 = (signed char)-101;
unsigned long long int var_14 = 12087211431182719215ULL;
signed char var_15 = (signed char)-45;
int var_16 = -534291930;
short var_17 = (short)29351;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
