#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2328237759099393730ULL;
unsigned long long int var_1 = 16477113822484202399ULL;
unsigned char var_2 = (unsigned char)22;
unsigned char var_3 = (unsigned char)248;
unsigned int var_4 = 3103907256U;
unsigned int var_6 = 3259172459U;
signed char var_7 = (signed char)-42;
unsigned int var_8 = 3833553626U;
short var_9 = (short)1798;
unsigned short var_10 = (unsigned short)52935;
signed char var_12 = (signed char)-32;
unsigned short var_13 = (unsigned short)50870;
int var_14 = 2049999196;
signed char var_15 = (signed char)68;
signed char var_17 = (signed char)31;
unsigned int var_18 = 753239418U;
int zero = 0;
unsigned char var_19 = (unsigned char)209;
unsigned char var_20 = (unsigned char)251;
int var_21 = -1212333164;
_Bool var_22 = (_Bool)0;
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
