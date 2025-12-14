#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10631553901162385195ULL;
int var_1 = 1165562139;
unsigned long long int var_2 = 9117491053143895982ULL;
long long int var_9 = 8735849604697976734LL;
signed char var_11 = (signed char)-30;
unsigned long long int var_12 = 12194295419666428760ULL;
unsigned long long int var_14 = 10729822911224743272ULL;
unsigned int var_15 = 3981560111U;
unsigned short var_17 = (unsigned short)31983;
unsigned long long int var_18 = 8742696494733820732ULL;
int zero = 0;
unsigned long long int var_20 = 6150253830977990163ULL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)113;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)69;
_Bool var_25 = (_Bool)0;
unsigned short var_26 = (unsigned short)58305;
unsigned short var_27 = (unsigned short)43152;
_Bool arr_0 [22] [22] ;
unsigned long long int arr_1 [22] [22] ;
_Bool arr_4 [21] ;
_Bool arr_5 [21] [21] ;
int arr_6 [21] ;
unsigned long long int arr_2 [22] [22] ;
int arr_3 [22] [22] ;
unsigned char arr_7 [21] ;
long long int arr_8 [21] ;
signed char arr_11 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 15571277722017441267ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1212875505 : -1795143738;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 219427451143355564ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 2052675012;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)188 : (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -8277361968732101650LL : 7833424619150411756LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (signed char)60;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
