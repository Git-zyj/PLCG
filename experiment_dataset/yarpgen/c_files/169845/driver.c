#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 181903064470455036ULL;
unsigned long long int var_1 = 4479017754952174865ULL;
unsigned long long int var_2 = 12305495010514486636ULL;
unsigned char var_3 = (unsigned char)95;
unsigned long long int var_4 = 16542794201569972207ULL;
unsigned short var_5 = (unsigned short)12103;
unsigned short var_7 = (unsigned short)5372;
int var_8 = 1468961244;
unsigned long long int var_10 = 8414600422009004880ULL;
signed char var_11 = (signed char)112;
long long int var_12 = -8477190737700434533LL;
unsigned long long int var_14 = 3437436955969027294ULL;
unsigned long long int var_15 = 17168364614564728967ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)197;
signed char var_17 = (signed char)111;
unsigned long long int var_18 = 14406786944389274108ULL;
short var_19 = (short)-9774;
short var_20 = (short)-22371;
int var_21 = 606918956;
signed char var_22 = (signed char)-50;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-23907;
unsigned long long int var_25 = 7579825585717962679ULL;
unsigned int arr_0 [23] ;
unsigned short arr_1 [23] [23] ;
unsigned long long int arr_2 [23] ;
_Bool arr_3 [23] [23] [23] ;
_Bool arr_6 [23] [23] ;
_Bool arr_8 [23] [23] [23] ;
unsigned short arr_10 [23] ;
unsigned char arr_11 [23] ;
int arr_12 [25] ;
unsigned long long int arr_14 [25] ;
int arr_5 [23] [23] ;
signed char arr_9 [23] [23] [23] ;
signed char arr_15 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1977144721U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)40531;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 11758379920565460209ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (unsigned short)60716;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = -1852259124;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = 3170517384103625262ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = -1997538365;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (signed char)-55;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
