#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5885;
unsigned char var_1 = (unsigned char)76;
short var_2 = (short)15868;
signed char var_6 = (signed char)-91;
unsigned char var_7 = (unsigned char)49;
unsigned short var_8 = (unsigned short)2745;
unsigned short var_10 = (unsigned short)51854;
int zero = 0;
signed char var_11 = (signed char)-73;
unsigned long long int var_12 = 11258045703721400351ULL;
unsigned long long int var_13 = 14550867372098927223ULL;
unsigned char var_14 = (unsigned char)169;
short var_15 = (short)-27236;
unsigned long long int var_16 = 4463648900505554158ULL;
short var_17 = (short)-30011;
short var_18 = (short)31967;
short var_19 = (short)28206;
unsigned char var_20 = (unsigned char)67;
unsigned long long int var_21 = 16815688366266866281ULL;
unsigned int arr_0 [15] [15] ;
short arr_1 [15] ;
unsigned short arr_2 [23] ;
unsigned int arr_3 [23] ;
short arr_4 [23] [23] ;
short arr_5 [23] [23] ;
unsigned char arr_15 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 4099956453U : 1401721051U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-15481;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)25506;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1403222024U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-28144;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (short)16341;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)249;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
