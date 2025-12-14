#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51296;
signed char var_1 = (signed char)84;
signed char var_5 = (signed char)104;
unsigned short var_8 = (unsigned short)19611;
int zero = 0;
signed char var_13 = (signed char)31;
unsigned short var_14 = (unsigned short)51152;
short var_15 = (short)28613;
unsigned short var_16 = (unsigned short)16266;
int var_17 = -526295980;
unsigned char arr_0 [25] ;
int arr_1 [25] ;
short arr_2 [25] [25] [25] ;
short arr_5 [12] ;
unsigned long long int arr_10 [13] ;
int arr_14 [13] [13] [13] ;
int arr_4 [25] [25] ;
_Bool arr_7 [12] ;
signed char arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 166887179;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)25822;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (short)-10545;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = 16437756720015472742ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -422172908;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 415396397;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (signed char)19;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
