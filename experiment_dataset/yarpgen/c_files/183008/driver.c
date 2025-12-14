#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1598480073;
unsigned short var_3 = (unsigned short)30816;
unsigned int var_4 = 1304437641U;
int var_5 = 880397303;
_Bool var_7 = (_Bool)1;
int var_9 = -1961137618;
short var_10 = (short)-20958;
int var_11 = 1753787694;
int var_12 = -42585269;
unsigned int var_13 = 464887556U;
int zero = 0;
int var_14 = 1667856289;
short var_15 = (short)30342;
int var_16 = -1221812694;
signed char var_17 = (signed char)-97;
int var_18 = 1610125763;
int var_19 = 1485495204;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)59;
unsigned char var_22 = (unsigned char)135;
unsigned int arr_0 [18] ;
unsigned char arr_1 [18] ;
int arr_2 [18] ;
unsigned int arr_3 [13] ;
_Bool arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 916637747U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1655154814;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 2810368902U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
