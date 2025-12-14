#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1945180633U;
long long int var_1 = 3658784831175099818LL;
_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)75;
long long int var_8 = 2068667355046706547LL;
signed char var_9 = (signed char)35;
int zero = 0;
unsigned short var_13 = (unsigned short)676;
unsigned long long int var_14 = 6439385096498512866ULL;
unsigned short var_15 = (unsigned short)13463;
unsigned long long int var_16 = 12599708475422946015ULL;
unsigned short var_17 = (unsigned short)40651;
int arr_2 [18] ;
unsigned short arr_3 [18] ;
unsigned long long int arr_5 [18] [18] [18] ;
unsigned char arr_11 [18] [18] [18] [18] ;
long long int arr_15 [21] ;
int arr_16 [21] ;
unsigned int arr_17 [21] [21] ;
unsigned long long int arr_18 [21] [21] ;
unsigned int arr_19 [21] ;
unsigned char arr_4 [18] ;
_Bool arr_20 [21] [21] [21] ;
long long int arr_21 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1934894756;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)52017;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 16435660033877204757ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)89 : (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = 8729133247600806826LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = -1660237721;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = 3625937979U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_18 [i_0] [i_1] = 6077415524324131119ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = 2054953992U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = -8859605638142550274LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
