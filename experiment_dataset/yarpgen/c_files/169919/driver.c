#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -1830802046;
long long int var_2 = 6923318158859008855LL;
unsigned long long int var_3 = 14826520491724065374ULL;
signed char var_4 = (signed char)-21;
long long int var_5 = 6853566937620211614LL;
unsigned short var_6 = (unsigned short)45821;
int var_7 = -1646830142;
short var_9 = (short)-32333;
unsigned short var_10 = (unsigned short)63972;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)647;
unsigned short var_14 = (unsigned short)30116;
int var_15 = -2051293341;
int var_16 = 1740154561;
int zero = 0;
unsigned char var_17 = (unsigned char)30;
unsigned short var_18 = (unsigned short)28931;
unsigned short var_19 = (unsigned short)18514;
short var_20 = (short)27219;
unsigned int var_21 = 3772492301U;
short var_22 = (short)15834;
unsigned char arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)2;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
