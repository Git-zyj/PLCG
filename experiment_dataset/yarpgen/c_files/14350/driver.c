#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 152017952806707916ULL;
unsigned long long int var_1 = 7407614206093477867ULL;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)30899;
unsigned short var_4 = (unsigned short)33516;
unsigned int var_7 = 2856035646U;
signed char var_8 = (signed char)27;
unsigned char var_9 = (unsigned char)193;
signed char var_10 = (signed char)95;
short var_11 = (short)-23113;
unsigned short var_13 = (unsigned short)2221;
unsigned short var_14 = (unsigned short)15459;
short var_15 = (short)7218;
unsigned char var_17 = (unsigned char)47;
unsigned long long int var_19 = 14242199963197325966ULL;
int zero = 0;
signed char var_20 = (signed char)-68;
unsigned short var_21 = (unsigned short)47353;
signed char var_22 = (signed char)-71;
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
