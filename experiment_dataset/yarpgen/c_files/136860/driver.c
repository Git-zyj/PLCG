#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)42;
int var_1 = -2128859850;
long long int var_2 = -8133798755436120747LL;
int var_5 = 2021227415;
signed char var_7 = (signed char)69;
unsigned long long int var_9 = 4465049881424099663ULL;
int var_10 = 1307310305;
int zero = 0;
long long int var_11 = -2365860515253485764LL;
signed char var_12 = (signed char)0;
unsigned int var_13 = 515034150U;
int var_14 = -117136263;
unsigned char var_15 = (unsigned char)220;
signed char var_16 = (signed char)75;
int arr_0 [10] ;
short arr_1 [10] ;
long long int arr_2 [10] ;
int arr_3 [10] ;
_Bool arr_7 [22] ;
signed char arr_9 [22] ;
signed char arr_11 [22] ;
long long int arr_12 [22] [22] ;
unsigned short arr_14 [22] [22] [22] [22] ;
int arr_28 [23] [23] ;
unsigned char arr_29 [23] ;
signed char arr_4 [10] ;
int arr_5 [10] [10] ;
unsigned short arr_6 [10] ;
long long int arr_15 [22] ;
short arr_16 [22] [22] [22] ;
long long int arr_24 [22] ;
unsigned short arr_25 [22] [22] ;
signed char arr_26 [22] [22] [22] ;
unsigned char arr_27 [22] ;
unsigned long long int arr_30 [23] ;
int arr_31 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -1177940779;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-32058;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -4892841716248096475LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -1121425273;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = -6096093890012456060LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned short)41727;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_28 [i_0] [i_1] = -1370391489;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_29 [i_0] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 507353710;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)7237;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = 7309918301331183920LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (short)28660;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 8299412268732647559LL : -1271193180531486858LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)3080 : (unsigned short)25928;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-103 : (signed char)62;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = 3401115941262898193ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_31 [i_0] = 354411454;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
