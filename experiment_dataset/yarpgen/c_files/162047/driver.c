#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1130249954;
int var_1 = -523103489;
signed char var_4 = (signed char)-120;
unsigned short var_6 = (unsigned short)25393;
unsigned int var_7 = 1038938315U;
int var_8 = -1921997059;
unsigned int var_9 = 1650098393U;
int var_10 = 394120365;
unsigned short var_11 = (unsigned short)6579;
int zero = 0;
short var_12 = (short)28885;
unsigned short var_13 = (unsigned short)24566;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
