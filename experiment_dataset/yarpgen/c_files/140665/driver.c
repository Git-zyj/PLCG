#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5605;
short var_3 = (short)-22437;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 8048130247060402695ULL;
unsigned int var_8 = 4239566664U;
unsigned char var_10 = (unsigned char)122;
int zero = 0;
short var_11 = (short)-30462;
unsigned short var_12 = (unsigned short)51839;
signed char var_13 = (signed char)-127;
unsigned short var_14 = (unsigned short)43919;
unsigned short var_15 = (unsigned short)31985;
signed char var_16 = (signed char)39;
signed char var_17 = (signed char)-46;
unsigned char var_18 = (unsigned char)53;
short arr_0 [22] [22] ;
unsigned char arr_2 [22] [22] ;
unsigned int arr_16 [24] ;
int arr_13 [22] [22] ;
short arr_14 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)28000;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)61 : (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = 3164614401U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? -1128291348 : -445077460;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)12325 : (short)9218;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
