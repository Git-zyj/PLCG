#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
_Bool var_3 = (_Bool)1;
int var_4 = 2063891057;
unsigned long long int var_7 = 9196975384992419172ULL;
unsigned long long int var_9 = 3602310571998422484ULL;
long long int var_13 = 1171367244357735837LL;
int zero = 0;
short var_16 = (short)14560;
unsigned char var_17 = (unsigned char)85;
long long int var_18 = -7453967789194496496LL;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-21807;
int var_21 = -1161859188;
signed char var_22 = (signed char)-41;
unsigned short arr_0 [22] ;
unsigned int arr_1 [22] [22] ;
signed char arr_2 [22] [22] ;
unsigned short arr_5 [22] [22] ;
unsigned long long int arr_8 [22] [22] [22] ;
signed char arr_13 [22] [22] ;
unsigned char arr_3 [22] ;
unsigned char arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)44038;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 497972128U : 865134322U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)5668;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 14262558818188273000ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)91 : (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)5 : (unsigned char)4;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
