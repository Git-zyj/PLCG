#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41041;
unsigned int var_2 = 274259359U;
_Bool var_4 = (_Bool)0;
int var_5 = 1346004043;
short var_6 = (short)18737;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)66;
int var_10 = 533494152;
unsigned long long int var_11 = 13822745802874393498ULL;
int zero = 0;
unsigned long long int var_12 = 14979680762052419855ULL;
unsigned int var_13 = 2992151581U;
short var_14 = (short)25298;
unsigned int var_15 = 661587604U;
void init() {
}

void checksum() {
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
