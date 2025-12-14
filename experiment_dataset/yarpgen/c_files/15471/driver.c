#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-22;
long long int var_1 = 6028209335273544987LL;
unsigned short var_2 = (unsigned short)9085;
unsigned int var_3 = 493382873U;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)6028;
unsigned short var_9 = (unsigned short)35039;
unsigned short var_10 = (unsigned short)64444;
unsigned char var_11 = (unsigned char)33;
int var_12 = 1694966946;
short var_13 = (short)22149;
int zero = 0;
unsigned int var_14 = 3958444616U;
signed char var_15 = (signed char)-58;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)196;
signed char var_19 = (signed char)20;
unsigned long long int var_20 = 7582036238281999220ULL;
unsigned long long int var_21 = 9832993373265103739ULL;
unsigned int var_22 = 1547080876U;
long long int var_23 = 2791893228273034624LL;
int var_24 = -1476168685;
int var_25 = 1597812820;
unsigned long long int arr_1 [18] [18] ;
signed char arr_4 [18] [18] [18] ;
unsigned short arr_5 [18] [18] ;
long long int arr_14 [18] ;
short arr_6 [18] [18] [18] ;
_Bool arr_15 [18] [18] [18] ;
signed char arr_19 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 12307493389317881748ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)25530;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = -6158886026841031289LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)8630 : (short)-17725;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (signed char)-16 : (signed char)-8;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
