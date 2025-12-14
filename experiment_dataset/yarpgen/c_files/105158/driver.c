#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)51;
unsigned int var_3 = 4205381705U;
unsigned long long int var_5 = 18245762719554306652ULL;
unsigned long long int var_6 = 4609210883835855903ULL;
short var_11 = (short)-7045;
unsigned int var_15 = 483289803U;
short var_17 = (short)4975;
short var_18 = (short)-7475;
unsigned int var_19 = 3378527946U;
int zero = 0;
unsigned char var_20 = (unsigned char)114;
unsigned long long int var_21 = 1636380233078143461ULL;
unsigned long long int var_22 = 14763252838271463651ULL;
unsigned long long int var_23 = 17030162025688260008ULL;
short var_24 = (short)-16500;
unsigned short var_25 = (unsigned short)30379;
long long int var_26 = 2621356931788348474LL;
short var_27 = (short)4981;
short var_28 = (short)-15315;
unsigned int var_29 = 2992857330U;
int var_30 = -1484878316;
unsigned short arr_1 [13] [13] ;
unsigned char arr_5 [13] ;
unsigned short arr_8 [13] [13] [13] [13] ;
short arr_9 [13] [13] [13] ;
unsigned short arr_14 [13] [13] ;
short arr_6 [13] [13] ;
unsigned long long int arr_15 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)29567;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)41323;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)27317;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)20713 : (unsigned short)59036;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-14432;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = 6067030303461011342ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
