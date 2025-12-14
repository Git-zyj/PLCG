#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-111;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-14610;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)15547;
short var_5 = (short)29856;
_Bool var_6 = (_Bool)1;
long long int var_9 = -490918863543251953LL;
unsigned char var_10 = (unsigned char)226;
signed char var_11 = (signed char)98;
unsigned char var_12 = (unsigned char)8;
unsigned short var_13 = (unsigned short)12827;
signed char var_14 = (signed char)15;
unsigned short var_15 = (unsigned short)14597;
unsigned int var_16 = 3104947369U;
long long int var_17 = -3804663847849618832LL;
long long int var_18 = -1812500388477070877LL;
int var_19 = 652092288;
int zero = 0;
unsigned int var_20 = 1349622761U;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)57;
short var_24 = (short)31378;
long long int var_25 = -3755456039251878051LL;
_Bool var_26 = (_Bool)0;
unsigned long long int var_27 = 7185654695970076924ULL;
short var_28 = (short)1258;
short var_29 = (short)-24429;
_Bool var_30 = (_Bool)1;
unsigned int var_31 = 4068409089U;
unsigned long long int arr_0 [13] ;
_Bool arr_1 [13] [13] ;
long long int arr_2 [13] ;
short arr_3 [13] [13] ;
long long int arr_4 [13] ;
_Bool arr_8 [10] ;
_Bool arr_12 [10] ;
unsigned short arr_5 [13] ;
unsigned char arr_6 [13] [13] ;
unsigned char arr_9 [10] ;
_Bool arr_13 [10] ;
signed char arr_14 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 15843016065509130727ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 6385286610415776493LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-6443 : (short)-15623;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -2466679543183390038LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)25350 : (unsigned short)14622;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)64 : (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)163 : (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)69 : (signed char)15;
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
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
