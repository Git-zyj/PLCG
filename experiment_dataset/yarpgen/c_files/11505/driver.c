#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)21046;
unsigned long long int var_14 = 2102534215002661295ULL;
long long int var_15 = -887144146051556022LL;
int var_16 = -416287139;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_20 = (short)-11478;
signed char var_21 = (signed char)103;
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
