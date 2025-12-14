#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 6520123495867579088LL;
signed char var_11 = (signed char)12;
int zero = 0;
unsigned short var_12 = (unsigned short)34500;
unsigned short var_13 = (unsigned short)40789;
unsigned int var_14 = 2821065080U;
unsigned int var_15 = 3397387322U;
unsigned int var_16 = 3324050669U;
unsigned short var_17 = (unsigned short)40939;
unsigned char var_18 = (unsigned char)146;
unsigned char var_19 = (unsigned char)2;
unsigned int var_20 = 1238335703U;
int var_21 = -1521210860;
unsigned long long int var_22 = 11682674698326175810ULL;
_Bool arr_0 [21] ;
long long int arr_1 [21] [21] ;
unsigned int arr_2 [21] ;
long long int arr_3 [21] ;
unsigned char arr_4 [21] ;
unsigned long long int arr_5 [21] [21] ;
long long int arr_6 [21] [21] ;
unsigned short arr_7 [21] [21] [21] ;
unsigned short arr_9 [22] ;
short arr_10 [22] [22] ;
short arr_11 [22] [22] ;
_Bool arr_14 [22] [22] ;
short arr_15 [22] [22] [22] ;
unsigned int arr_17 [14] ;
unsigned long long int arr_8 [21] ;
unsigned int arr_12 [22] ;
unsigned short arr_18 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 1563230303853068176LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1545598815U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -2972690439490134122LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 3640007112138555174ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 3994949480452538257LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)27706;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (unsigned short)55440;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (short)6528;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (short)5001;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)-30531;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 2632125495U : 1118371943U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 5142810465254582126ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 436885569U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned short)65106 : (unsigned short)28531;
}

void checksum() {
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
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
