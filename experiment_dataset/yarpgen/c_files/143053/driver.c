#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1530044813;
unsigned int var_2 = 670253799U;
unsigned long long int var_3 = 16837947188758755378ULL;
unsigned int var_4 = 67114102U;
unsigned short var_8 = (unsigned short)3540;
int var_10 = 49019376;
unsigned short var_12 = (unsigned short)16551;
_Bool var_13 = (_Bool)0;
unsigned long long int var_15 = 7994364132164590641ULL;
unsigned long long int var_16 = 7447171766925869643ULL;
int zero = 0;
long long int var_17 = 4495496604892136683LL;
unsigned int var_18 = 1490821045U;
int var_19 = -1788862699;
long long int var_20 = -935436638553781423LL;
int arr_1 [15] ;
short arr_8 [20] ;
unsigned char arr_5 [15] ;
unsigned char arr_6 [15] [15] ;
long long int arr_7 [15] ;
unsigned short arr_13 [20] ;
int arr_14 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1611711520;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)-3885 : (short)7804;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 3373634973554268134LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)24197 : (unsigned short)63832;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 1373844127 : 1950259221;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
