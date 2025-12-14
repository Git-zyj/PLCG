#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
long long int var_1 = -541082496663252214LL;
short var_3 = (short)-5782;
long long int var_7 = -7246388713698796924LL;
short var_8 = (short)-20873;
int var_9 = 223425580;
short var_10 = (short)-15261;
long long int var_11 = 8396405449109109373LL;
unsigned short var_12 = (unsigned short)64791;
short var_13 = (short)-2483;
unsigned long long int var_14 = 12821366212339446374ULL;
unsigned short var_15 = (unsigned short)59524;
int zero = 0;
unsigned short var_16 = (unsigned short)10042;
short var_17 = (short)2698;
short var_18 = (short)-4134;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)52588;
unsigned short var_21 = (unsigned short)11426;
unsigned int var_22 = 3456423056U;
int var_23 = 665421540;
unsigned long long int var_24 = 6445991655590237958ULL;
signed char var_25 = (signed char)104;
unsigned int var_26 = 1037012511U;
unsigned int var_27 = 3452573408U;
int var_28 = 1203866795;
unsigned long long int var_29 = 13561157760527397776ULL;
short arr_0 [23] ;
unsigned long long int arr_1 [23] [23] ;
short arr_3 [23] ;
unsigned int arr_4 [23] [23] ;
unsigned short arr_5 [23] ;
short arr_7 [20] ;
unsigned int arr_8 [20] ;
long long int arr_9 [20] ;
short arr_10 [20] ;
unsigned int arr_11 [16] ;
short arr_2 [23] [23] ;
int arr_6 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-9126;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 10981209135013215359ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)25016 : (short)-25975;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 1311593417U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)28796;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (short)10598;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 2964218442U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = 6024981002647869288LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (short)15490;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = 2113251993U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-7345;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 172922264 : 1132198732;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
