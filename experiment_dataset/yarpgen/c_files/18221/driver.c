#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23577;
_Bool var_3 = (_Bool)1;
long long int var_4 = 4775213013363800181LL;
unsigned long long int var_6 = 6982685404517792304ULL;
short var_8 = (short)30097;
unsigned long long int var_13 = 6146453417558793813ULL;
unsigned int var_15 = 820991154U;
long long int var_18 = -7968863989380868364LL;
int zero = 0;
unsigned char var_20 = (unsigned char)82;
short var_21 = (short)-26745;
unsigned long long int var_22 = 3604495328599596755ULL;
unsigned long long int var_23 = 3198823634747983447ULL;
short var_24 = (short)26711;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
