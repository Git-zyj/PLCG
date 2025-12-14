#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-23074;
unsigned short var_9 = (unsigned short)51594;
unsigned long long int var_11 = 4175219195685356968ULL;
long long int var_19 = -4276049783799894271LL;
int zero = 0;
unsigned int var_20 = 4250085820U;
signed char var_21 = (signed char)-17;
signed char var_22 = (signed char)-9;
int var_23 = 771497496;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
