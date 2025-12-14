#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13734;
short var_4 = (short)17578;
unsigned char var_6 = (unsigned char)118;
unsigned long long int var_11 = 12307981364967217959ULL;
unsigned char var_13 = (unsigned char)136;
int zero = 0;
unsigned long long int var_16 = 4980643236379364594ULL;
short var_17 = (short)-22782;
long long int var_18 = 585782794939710151LL;
unsigned long long int var_19 = 4599564430512859019ULL;
signed char var_20 = (signed char)0;
short var_21 = (short)-6542;
signed char var_22 = (signed char)6;
long long int var_23 = 496049841476567504LL;
unsigned short var_24 = (unsigned short)350;
unsigned char arr_0 [18] [18] ;
long long int arr_1 [18] ;
signed char arr_4 [18] [18] ;
unsigned long long int arr_6 [18] [18] ;
int arr_13 [18] [18] ;
signed char arr_15 [18] ;
unsigned long long int arr_2 [18] ;
long long int arr_7 [18] [18] ;
unsigned char arr_22 [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1218159960102347509LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 1997920009599353773ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = -1042488767;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 13339659926916728559ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = -6889408372523434564LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)185;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
