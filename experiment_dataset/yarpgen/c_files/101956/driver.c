#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1859;
long long int var_4 = 944904718690322409LL;
unsigned short var_6 = (unsigned short)52863;
signed char var_10 = (signed char)-46;
unsigned char var_12 = (unsigned char)95;
short var_13 = (short)22959;
unsigned short var_14 = (unsigned short)50211;
short var_16 = (short)-15126;
int zero = 0;
unsigned int var_17 = 2873265373U;
unsigned int var_18 = 1806503298U;
unsigned int var_19 = 500910619U;
signed char var_20 = (signed char)113;
unsigned char var_21 = (unsigned char)103;
unsigned short var_22 = (unsigned short)64564;
short arr_1 [21] ;
unsigned short arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)3962;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)52209;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
