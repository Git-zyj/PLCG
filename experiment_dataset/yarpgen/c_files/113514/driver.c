#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15216;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)6;
signed char var_9 = (signed char)-17;
signed char var_10 = (signed char)-79;
short var_12 = (short)-494;
signed char var_13 = (signed char)83;
short var_14 = (short)-29147;
unsigned long long int var_15 = 16903594223798004462ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -939786613;
signed char var_18 = (signed char)28;
unsigned long long int var_19 = 11672836613840446852ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
