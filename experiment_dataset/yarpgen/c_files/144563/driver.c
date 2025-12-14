#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10986;
signed char var_1 = (signed char)71;
unsigned short var_2 = (unsigned short)13920;
unsigned short var_3 = (unsigned short)51493;
unsigned long long int var_4 = 11199018720976058188ULL;
unsigned long long int var_6 = 16711600083571498188ULL;
unsigned long long int var_7 = 16368747750015196724ULL;
unsigned int var_9 = 3341157380U;
_Bool var_10 = (_Bool)0;
long long int var_16 = 7952370263855148990LL;
short var_17 = (short)-15568;
int zero = 0;
signed char var_18 = (signed char)38;
unsigned long long int var_19 = 7689886059787802258ULL;
_Bool var_20 = (_Bool)1;
int var_21 = 14015284;
long long int var_22 = -1142740662491913537LL;
int var_23 = -1619250783;
unsigned short var_24 = (unsigned short)22473;
short var_25 = (short)-15145;
unsigned long long int arr_0 [22] ;
int arr_1 [22] [22] ;
signed char arr_9 [19] [19] ;
unsigned char arr_2 [22] ;
unsigned char arr_6 [12] ;
short arr_7 [12] ;
int arr_12 [19] ;
unsigned long long int arr_13 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 13747048333531867660ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 1018090482;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-42 : (signed char)-81;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (short)16951;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 137459836 : -590528133;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 3712420890698256413ULL : 5661840894656656697ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
