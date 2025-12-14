#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32344;
unsigned long long int var_3 = 10251789817532269314ULL;
unsigned int var_4 = 82743186U;
unsigned char var_5 = (unsigned char)95;
short var_6 = (short)15256;
short var_7 = (short)6015;
short var_8 = (short)23484;
unsigned long long int var_9 = 12244180010378489072ULL;
short var_11 = (short)25474;
unsigned long long int var_12 = 6279843302002151647ULL;
unsigned long long int var_14 = 17711712989761337901ULL;
int zero = 0;
short var_15 = (short)-8051;
short var_16 = (short)-5276;
unsigned long long int var_17 = 7474460400049878084ULL;
unsigned long long int var_18 = 11064638799379223166ULL;
unsigned long long int var_19 = 1511773543898455325ULL;
signed char var_20 = (signed char)-54;
unsigned int var_21 = 4154778397U;
long long int var_22 = -2739365324017879596LL;
unsigned char var_23 = (unsigned char)95;
unsigned long long int var_24 = 1935394660985604662ULL;
short var_25 = (short)30668;
long long int var_26 = 4549710553559730302LL;
unsigned long long int var_27 = 13490317754080720894ULL;
short var_28 = (short)29760;
unsigned long long int arr_0 [24] ;
short arr_1 [24] [24] ;
unsigned long long int arr_2 [24] [24] [24] ;
unsigned char arr_3 [24] [24] [24] ;
unsigned long long int arr_7 [24] ;
short arr_4 [24] ;
int arr_9 [24] ;
signed char arr_16 [12] [12] ;
unsigned long long int arr_17 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 122425268357939332ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-9939;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 2412638165026431604ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 1107950313582713305ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)11174;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = -453759892;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = 7221336183441069956ULL;
}

void checksum() {
    hash(&seed, var_15);
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
