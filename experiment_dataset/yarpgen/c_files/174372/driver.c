#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6426151147630573858ULL;
signed char var_1 = (signed char)-82;
short var_2 = (short)-8284;
unsigned int var_3 = 1508751516U;
int var_4 = -1868981809;
unsigned long long int var_7 = 12549252635386929304ULL;
signed char var_8 = (signed char)116;
unsigned short var_9 = (unsigned short)55843;
unsigned short var_10 = (unsigned short)49192;
short var_12 = (short)-20513;
int zero = 0;
signed char var_14 = (signed char)40;
unsigned long long int var_15 = 15197614046332032080ULL;
unsigned short var_16 = (unsigned short)44876;
long long int var_17 = 1185343192578394358LL;
unsigned char var_18 = (unsigned char)201;
unsigned int arr_0 [24] [24] ;
signed char arr_1 [24] ;
int arr_2 [24] ;
short arr_3 [24] ;
unsigned short arr_4 [24] ;
int arr_8 [17] ;
short arr_5 [24] ;
signed char arr_6 [24] ;
short arr_9 [17] ;
unsigned int arr_10 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 313781254U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 1426410027;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)6050;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)36042;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -20571285;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (short)-16791;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)-23255 : (short)19585;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 93989355U : 552580675U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
