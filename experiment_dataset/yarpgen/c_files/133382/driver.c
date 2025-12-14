#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 605348772U;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)113;
signed char var_3 = (signed char)-63;
signed char var_5 = (signed char)(-127 - 1);
short var_6 = (short)14500;
signed char var_7 = (signed char)100;
signed char var_9 = (signed char)-50;
unsigned long long int var_10 = 8979783123819316079ULL;
unsigned int var_12 = 1067846568U;
int zero = 0;
signed char var_14 = (signed char)115;
unsigned short var_15 = (unsigned short)4513;
unsigned int var_16 = 2240290019U;
unsigned long long int var_17 = 16746557779485725978ULL;
unsigned long long int var_18 = 10757732162494044909ULL;
unsigned long long int var_19 = 5846379121676719499ULL;
signed char var_20 = (signed char)55;
int var_21 = -1755696920;
unsigned short var_22 = (unsigned short)19381;
long long int var_23 = -7161538094503245862LL;
long long int var_24 = -526503508338923859LL;
int var_25 = 521468150;
unsigned char var_26 = (unsigned char)222;
signed char arr_0 [12] [12] ;
unsigned long long int arr_1 [12] ;
unsigned char arr_3 [23] ;
unsigned int arr_5 [23] ;
signed char arr_8 [23] [23] [23] ;
unsigned long long int arr_9 [23] ;
signed char arr_18 [17] ;
_Bool arr_2 [12] ;
unsigned char arr_6 [23] ;
short arr_11 [23] ;
long long int arr_12 [23] [23] ;
signed char arr_16 [13] ;
unsigned int arr_20 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 17157064589861609463ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)75 : (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 2233371746U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-117 : (signed char)-7;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 15642556854694753857ULL : 16185213976218943161ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)133 : (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)21565 : (short)-19148;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? -5972343021305357293LL : -5665461502869507953LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_20 [i_0] [i_1] = 4126545371U;
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
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
