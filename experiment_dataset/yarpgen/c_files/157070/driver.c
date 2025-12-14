#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60775;
int var_3 = 2002019638;
short var_5 = (short)-25733;
short var_6 = (short)-6731;
int var_7 = 2054562021;
unsigned long long int var_10 = 6590326731911024525ULL;
short var_11 = (short)28365;
short var_12 = (short)-18419;
int zero = 0;
short var_13 = (short)12854;
short var_14 = (short)32088;
signed char var_15 = (signed char)-53;
unsigned short var_16 = (unsigned short)20660;
signed char var_17 = (signed char)100;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
