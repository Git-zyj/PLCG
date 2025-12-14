#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12621581677639209102ULL;
short var_13 = (short)27350;
short var_16 = (short)26192;
signed char var_17 = (signed char)115;
int zero = 0;
unsigned short var_20 = (unsigned short)26277;
signed char var_21 = (signed char)4;
int var_22 = -786482143;
long long int var_23 = 5204106222885928632LL;
unsigned int var_24 = 2507801879U;
unsigned char arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)80 : (unsigned char)153;
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
