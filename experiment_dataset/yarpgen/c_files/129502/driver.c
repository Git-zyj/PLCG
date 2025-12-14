#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)147;
signed char var_2 = (signed char)113;
unsigned int var_3 = 575702022U;
short var_5 = (short)28757;
signed char var_6 = (signed char)-50;
unsigned short var_7 = (unsigned short)53271;
unsigned long long int var_8 = 8981047371383146706ULL;
int var_9 = 1598265852;
unsigned long long int var_10 = 4955389960681152204ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)-24962;
unsigned long long int var_14 = 10013725527624946816ULL;
short var_15 = (short)-3096;
signed char var_16 = (signed char)69;
int var_17 = 772062490;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 8479648205631930354ULL;
unsigned int var_20 = 3342913548U;
int var_21 = -1898862815;
short var_22 = (short)2877;
int var_23 = -868045757;
int var_24 = 1885178953;
unsigned long long int var_25 = 15499986001885958802ULL;
unsigned long long int var_26 = 5496943817130808309ULL;
unsigned short var_27 = (unsigned short)28515;
unsigned char var_28 = (unsigned char)30;
_Bool var_29 = (_Bool)0;
unsigned short var_30 = (unsigned short)19337;
unsigned long long int var_31 = 5169739844800248932ULL;
short var_32 = (short)-30754;
int var_33 = 791222027;
long long int var_34 = 8150082405788695904LL;
unsigned long long int var_35 = 7694405823927676678ULL;
int arr_3 [13] [13] [13] ;
unsigned short arr_4 [13] [13] [13] ;
unsigned short arr_7 [22] ;
long long int arr_8 [22] [22] ;
unsigned long long int arr_9 [22] ;
short arr_11 [24] ;
int arr_15 [24] [24] [24] ;
int arr_17 [24] [24] [24] ;
unsigned short arr_18 [24] [24] [24] ;
unsigned long long int arr_20 [24] [24] [24] [24] ;
int arr_21 [24] ;
short arr_23 [24] ;
unsigned char arr_25 [24] ;
_Bool arr_28 [21] ;
signed char arr_5 [13] ;
signed char arr_6 [13] [13] ;
long long int arr_10 [22] ;
_Bool arr_26 [24] ;
unsigned short arr_37 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -903573117;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)6604;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned short)47611;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 840419946738820604LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 3751338226878045647ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (short)21380;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -1262405222;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 806933771;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)20625;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 14071523773281616269ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = 636725578;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (short)22520;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_25 [i_0] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 2750664197459270363LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)56465 : (unsigned short)8524;
}

void checksum() {
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_37 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
