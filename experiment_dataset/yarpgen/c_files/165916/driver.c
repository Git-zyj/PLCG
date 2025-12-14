#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10566696669630207463ULL;
unsigned char var_2 = (unsigned char)9;
unsigned char var_3 = (unsigned char)96;
long long int var_4 = -696217398546935625LL;
long long int var_5 = -6987152095368138090LL;
unsigned char var_8 = (unsigned char)24;
unsigned short var_9 = (unsigned short)50502;
int zero = 0;
unsigned int var_13 = 3545052121U;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-24;
unsigned int var_17 = 1230233447U;
_Bool var_18 = (_Bool)1;
int var_19 = -967993285;
unsigned short var_20 = (unsigned short)30272;
unsigned short var_21 = (unsigned short)32235;
long long int var_22 = 2387907868753617207LL;
unsigned short arr_0 [18] ;
long long int arr_1 [18] ;
unsigned short arr_2 [18] [18] ;
unsigned long long int arr_3 [18] ;
signed char arr_5 [18] [18] ;
short arr_9 [18] ;
unsigned short arr_10 [18] [18] [18] [18] ;
unsigned short arr_11 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)59852;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -4299010178480364669LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)18172;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 7873743731119413271ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)37;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)-17297 : (short)-3943;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)63780;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)57293 : (unsigned short)38359;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
