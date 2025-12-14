#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 191167454;
short var_3 = (short)12976;
long long int var_4 = 1679082150617993076LL;
short var_6 = (short)843;
_Bool var_9 = (_Bool)0;
short var_13 = (short)30663;
signed char var_15 = (signed char)-55;
short var_16 = (short)-26257;
short var_17 = (short)-23930;
_Bool var_19 = (_Bool)1;
int zero = 0;
short var_20 = (short)21824;
int var_21 = -1070420105;
unsigned int var_22 = 2252954026U;
void init() {
}

void checksum() {
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
