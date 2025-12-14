#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)16;
unsigned int var_1 = 1312048647U;
unsigned char var_2 = (unsigned char)236;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)51439;
unsigned char var_6 = (unsigned char)169;
unsigned int var_9 = 1824141577U;
signed char var_10 = (signed char)68;
int zero = 0;
unsigned char var_11 = (unsigned char)34;
int var_12 = -497037970;
unsigned short var_13 = (unsigned short)61820;
unsigned short var_14 = (unsigned short)44330;
unsigned char var_15 = (unsigned char)167;
int var_16 = 1126528194;
long long int var_17 = -6797772135582193888LL;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 4040634206U;
_Bool arr_0 [21] [21] ;
unsigned long long int arr_1 [21] ;
_Bool arr_2 [21] [21] ;
int arr_4 [14] ;
int arr_5 [14] ;
signed char arr_6 [14] [14] ;
short arr_3 [21] ;
unsigned char arr_8 [14] ;
unsigned short arr_11 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 17651846496661623391ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -41587960;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -1901695959;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)-7361;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)20319;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
