#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-20;
short var_2 = (short)5072;
int var_4 = 312569499;
short var_5 = (short)25763;
unsigned int var_10 = 4112850834U;
unsigned short var_11 = (unsigned short)4071;
unsigned short var_12 = (unsigned short)38537;
signed char var_15 = (signed char)10;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)73;
unsigned long long int var_21 = 11498433092184076758ULL;
unsigned short var_22 = (unsigned short)25921;
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
