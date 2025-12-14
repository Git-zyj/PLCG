#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59191;
short var_2 = (short)-16948;
unsigned long long int var_5 = 4390513059663390272ULL;
int var_6 = -476864691;
short var_7 = (short)32172;
int var_9 = 590421523;
unsigned int var_10 = 4120410598U;
short var_11 = (short)-28281;
signed char var_12 = (signed char)-62;
long long int var_13 = 1746333200699690369LL;
int zero = 0;
int var_15 = -2127450068;
signed char var_16 = (signed char)48;
unsigned long long int var_17 = 11846661747021925060ULL;
unsigned short var_18 = (unsigned short)51472;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
