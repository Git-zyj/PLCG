#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_4 = (signed char)-113;
int var_6 = -1646367735;
unsigned int var_7 = 214790956U;
signed char var_8 = (signed char)-63;
unsigned char var_9 = (unsigned char)245;
unsigned int var_10 = 2601507725U;
signed char var_11 = (signed char)-8;
long long int var_12 = 631087636103072570LL;
unsigned int var_13 = 965856576U;
unsigned char var_14 = (unsigned char)177;
unsigned int var_15 = 2842384813U;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)172;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-3031;
signed char var_20 = (signed char)119;
unsigned int var_21 = 1220748295U;
short var_22 = (short)-6432;
unsigned int var_23 = 2476110236U;
int var_24 = 396979977;
unsigned short arr_2 [13] ;
long long int arr_3 [13] ;
signed char arr_4 [13] [13] [13] ;
short arr_7 [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)57337;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 6640492765557057659LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)57 : (signed char)-71;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)-23176 : (short)4752;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
