#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 5704344812569240207ULL;
signed char var_10 = (signed char)-6;
int zero = 0;
short var_11 = (short)-15046;
int var_12 = -1727837894;
unsigned char var_13 = (unsigned char)152;
unsigned int var_14 = 2696703423U;
short var_15 = (short)7250;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
