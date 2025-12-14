#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20502;
signed char var_2 = (signed char)83;
long long int var_5 = -7108501864554316156LL;
unsigned long long int var_6 = 11746564789885018050ULL;
long long int var_7 = -6334347776202463882LL;
_Bool var_8 = (_Bool)0;
long long int var_10 = 2601806307357700145LL;
int var_11 = 776980628;
unsigned long long int var_13 = 10844198844349697009ULL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1266729844U;
signed char var_18 = (signed char)-70;
int zero = 0;
long long int var_19 = 2382916362180927518LL;
_Bool var_20 = (_Bool)1;
long long int var_21 = -33969882182609476LL;
long long int var_22 = -6318617494006945601LL;
long long int var_23 = 2268802914348014572LL;
unsigned long long int var_24 = 4391572083408955176ULL;
unsigned char var_25 = (unsigned char)202;
long long int var_26 = -7302695212812703141LL;
short arr_0 [16] [16] ;
short arr_1 [16] ;
short arr_2 [16] ;
int arr_3 [16] ;
unsigned char arr_7 [18] ;
unsigned int arr_9 [25] ;
short arr_10 [25] ;
int arr_13 [19] [19] ;
long long int arr_4 [16] ;
unsigned int arr_5 [16] ;
long long int arr_8 [18] ;
_Bool arr_11 [25] ;
unsigned long long int arr_12 [25] ;
unsigned char arr_16 [19] ;
long long int arr_21 [15] ;
unsigned char arr_22 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-6459;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)-20455;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-30040;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 420467472;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 3716131080U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (short)-29469;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = -205086878;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -6013916026425858414LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 80381545U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = -4931325261589772669LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = 9968658178310371369ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = -7012207901581581220LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = (unsigned char)144;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
