#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)12324;
short var_2 = (short)19790;
short var_3 = (short)-9829;
unsigned int var_4 = 3143696691U;
_Bool var_5 = (_Bool)0;
int var_7 = -1559271220;
signed char var_8 = (signed char)-5;
unsigned int var_9 = 4288546015U;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -6717326294217695465LL;
long long int var_12 = -7231361832691755805LL;
unsigned int var_13 = 390423300U;
long long int var_14 = 1330722863363526307LL;
unsigned int var_15 = 2639942798U;
unsigned short var_16 = (unsigned short)49250;
int var_17 = 785595878;
int var_18 = 1991161506;
int arr_0 [14] ;
long long int arr_1 [14] ;
long long int arr_3 [14] ;
_Bool arr_5 [14] ;
short arr_6 [14] ;
long long int arr_8 [17] ;
unsigned long long int arr_2 [14] [14] ;
unsigned long long int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 680649703 : -173260315;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 8804566038504341391LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -5426649021433420075LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (short)20546;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 7532499205688841621LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 14261116703163419671ULL : 8679367798593017937ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 16412374411415417616ULL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
