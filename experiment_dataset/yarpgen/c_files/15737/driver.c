#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25875;
short var_8 = (short)-22516;
short var_11 = (short)-16891;
long long int var_12 = -2693391445345772097LL;
int zero = 0;
signed char var_19 = (signed char)-79;
signed char var_20 = (signed char)-21;
short var_21 = (short)-21583;
signed char var_22 = (signed char)-120;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
