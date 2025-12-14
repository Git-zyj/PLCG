#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)123;
unsigned int var_2 = 3698032U;
unsigned int var_3 = 2001948736U;
short var_4 = (short)28048;
signed char var_5 = (signed char)-99;
unsigned int var_6 = 42021050U;
short var_7 = (short)551;
short var_9 = (short)28996;
unsigned int var_10 = 1971971820U;
short var_11 = (short)-16523;
short var_13 = (short)51;
signed char var_14 = (signed char)-24;
unsigned int var_16 = 147186669U;
signed char var_18 = (signed char)-27;
unsigned char var_19 = (unsigned char)200;
int zero = 0;
unsigned char var_20 = (unsigned char)151;
signed char var_21 = (signed char)95;
short var_22 = (short)-8970;
unsigned char var_23 = (unsigned char)87;
unsigned int var_24 = 1317867294U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
