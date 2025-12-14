#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_3 = (short)-18602;
long long int var_5 = -5974807135351050945LL;
short var_6 = (short)3031;
unsigned int var_7 = 3200005632U;
long long int var_9 = 3169164171894698842LL;
int zero = 0;
long long int var_12 = 5559401466845771514LL;
unsigned char var_13 = (unsigned char)138;
int var_14 = -1774976259;
unsigned int var_15 = 3044540499U;
signed char var_16 = (signed char)104;
unsigned char var_17 = (unsigned char)24;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)51;
unsigned short var_20 = (unsigned short)5482;
unsigned char var_21 = (unsigned char)114;
unsigned char var_22 = (unsigned char)89;
signed char arr_1 [13] [13] ;
unsigned short arr_2 [13] [13] [13] ;
signed char arr_3 [13] [13] ;
unsigned char arr_8 [13] ;
short arr_13 [16] ;
unsigned int arr_14 [16] [16] ;
long long int arr_15 [16] [16] ;
unsigned int arr_19 [16] ;
int arr_20 [16] ;
long long int arr_10 [13] [13] [13] ;
unsigned char arr_11 [13] ;
long long int arr_16 [16] ;
unsigned char arr_25 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)41720 : (unsigned short)39990;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (short)15473;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = 3579804881U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = 6259590203344783195LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = 509878021U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = 1703443158;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -8765374493855700545LL : -3262293738459824505LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)53 : (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = -4364506587770952396LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = (unsigned char)225;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
