#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)42;
signed char var_4 = (signed char)-127;
unsigned long long int var_5 = 6224434933770766788ULL;
int var_6 = 778855530;
unsigned long long int var_7 = 17354322845941131071ULL;
unsigned short var_8 = (unsigned short)59750;
unsigned short var_9 = (unsigned short)8421;
int zero = 0;
unsigned long long int var_12 = 4554970639849924197ULL;
unsigned char var_13 = (unsigned char)119;
signed char var_14 = (signed char)-52;
unsigned int var_15 = 3122083162U;
int var_16 = -74381270;
unsigned short var_17 = (unsigned short)28343;
unsigned long long int var_18 = 7576714201541252788ULL;
signed char var_19 = (signed char)-31;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-46;
unsigned long long int var_22 = 6059564951288347529ULL;
signed char var_23 = (signed char)95;
unsigned long long int var_24 = 13422980005644457590ULL;
signed char var_25 = (signed char)-1;
unsigned long long int var_26 = 1832732014527307279ULL;
unsigned short var_27 = (unsigned short)13347;
int var_28 = -1840685913;
unsigned short arr_0 [13] [13] ;
unsigned short arr_1 [13] ;
unsigned char arr_2 [13] [13] ;
unsigned short arr_3 [13] [13] ;
signed char arr_6 [13] ;
unsigned long long int arr_7 [13] ;
unsigned long long int arr_9 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)27475;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)63308;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)30993;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 17029513480669956626ULL : 17020948590997415999ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 9351626750400183387ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
