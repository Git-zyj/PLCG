#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
short var_6 = (short)-3891;
unsigned int var_7 = 3991697718U;
unsigned long long int var_10 = 12988281132198790621ULL;
short var_11 = (short)-1994;
signed char var_12 = (signed char)-53;
int zero = 0;
unsigned char var_14 = (unsigned char)172;
short var_15 = (short)-16502;
int var_16 = -784685166;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
