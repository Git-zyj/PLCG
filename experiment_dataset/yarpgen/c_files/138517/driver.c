#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2478477006901061128LL;
long long int var_2 = -6778655283558264758LL;
_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)47598;
signed char var_11 = (signed char)-72;
unsigned long long int var_13 = 6958024313514083743ULL;
int zero = 0;
short var_15 = (short)-17191;
signed char var_16 = (signed char)-52;
void init() {
}

void checksum() {
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
