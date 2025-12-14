#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)63;
signed char var_1 = (signed char)23;
long long int var_2 = 5872916475156869723LL;
int var_3 = 1195294172;
int var_6 = 2047108868;
int var_7 = -2098052310;
int var_8 = -2116945331;
signed char var_11 = (signed char)(-127 - 1);
short var_12 = (short)-15321;
unsigned char var_13 = (unsigned char)206;
unsigned short var_14 = (unsigned short)2013;
unsigned char var_15 = (unsigned char)121;
int zero = 0;
int var_16 = -2072515670;
signed char var_17 = (signed char)-47;
int var_18 = -1322473305;
unsigned short var_19 = (unsigned short)5159;
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
