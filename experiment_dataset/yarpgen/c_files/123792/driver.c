#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3127925229U;
signed char var_4 = (signed char)-97;
short var_5 = (short)-23020;
unsigned int var_6 = 2420659160U;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 1870130449944949221ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)11362;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 8212569165554254492ULL;
void init() {
}

void checksum() {
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
