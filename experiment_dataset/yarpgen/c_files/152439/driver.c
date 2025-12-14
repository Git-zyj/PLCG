#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)5;
signed char var_2 = (signed char)45;
int var_3 = 771334906;
int var_6 = -1424613665;
unsigned int var_8 = 3557643843U;
unsigned short var_9 = (unsigned short)48735;
int zero = 0;
unsigned long long int var_10 = 7242371331715405587ULL;
int var_11 = 510002428;
unsigned long long int var_12 = 18362299635652259282ULL;
signed char var_13 = (signed char)-60;
unsigned short var_14 = (unsigned short)59446;
unsigned long long int var_15 = 5566848917263436180ULL;
int var_16 = -967575808;
int var_17 = 1474543848;
int var_18 = 1232531785;
unsigned long long int var_19 = 14170889670927875838ULL;
signed char var_20 = (signed char)109;
_Bool var_21 = (_Bool)0;
unsigned short arr_0 [23] [23] ;
unsigned int arr_1 [23] ;
int arr_4 [23] [23] ;
int arr_5 [23] [23] [23] ;
_Bool arr_6 [23] [23] [23] ;
int arr_9 [22] ;
unsigned long long int arr_10 [22] ;
unsigned short arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)42525;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1788719494U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 17653345;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 539124953;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1285908066 : 1530489375;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 3126736542267856118ULL : 16583340469544778541ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)15369;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
