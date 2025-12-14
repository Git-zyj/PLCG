#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43345;
short var_1 = (short)-31292;
unsigned short var_2 = (unsigned short)60107;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)38785;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3911134851U;
signed char var_8 = (signed char)52;
unsigned long long int var_9 = 14751285714748928216ULL;
unsigned short var_10 = (unsigned short)45065;
long long int var_11 = 6874646693432801409LL;
signed char var_12 = (signed char)-79;
signed char var_13 = (signed char)-95;
int zero = 0;
short var_14 = (short)-18208;
unsigned short var_15 = (unsigned short)25016;
_Bool var_16 = (_Bool)1;
int var_17 = -1732363084;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
