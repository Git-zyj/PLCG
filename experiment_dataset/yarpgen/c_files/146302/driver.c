#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8452906780734478241LL;
unsigned int var_1 = 2221111275U;
long long int var_2 = -6386385992094895244LL;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)64568;
unsigned int var_5 = 3641840749U;
short var_6 = (short)-32095;
short var_7 = (short)-17925;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)49871;
short var_10 = (short)-4416;
short var_11 = (short)16062;
signed char var_12 = (signed char)55;
unsigned short var_13 = (unsigned short)27017;
signed char var_14 = (signed char)-83;
unsigned short var_15 = (unsigned short)41852;
int zero = 0;
signed char var_16 = (signed char)-124;
short var_17 = (short)26104;
void init() {
}

void checksum() {
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
