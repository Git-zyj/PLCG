#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)31;
unsigned char var_2 = (unsigned char)65;
unsigned short var_3 = (unsigned short)28104;
signed char var_4 = (signed char)125;
unsigned short var_5 = (unsigned short)303;
unsigned short var_6 = (unsigned short)20442;
unsigned int var_9 = 3741125600U;
unsigned char var_10 = (unsigned char)104;
short var_13 = (short)27311;
unsigned short var_15 = (unsigned short)2895;
int var_16 = 1638764587;
int zero = 0;
signed char var_17 = (signed char)-35;
unsigned long long int var_18 = 5070223183442023215ULL;
long long int var_19 = 1377029613738063864LL;
long long int var_20 = 7558625171736331378LL;
unsigned char var_21 = (unsigned char)123;
unsigned short var_22 = (unsigned short)21956;
short var_23 = (short)-24815;
signed char var_24 = (signed char)79;
int var_25 = 2042504400;
_Bool var_26 = (_Bool)0;
int var_27 = 711259247;
int var_28 = -14949985;
unsigned short var_29 = (unsigned short)25877;
int arr_0 [18] ;
long long int arr_6 [16] ;
unsigned short arr_7 [16] [16] ;
short arr_8 [16] ;
signed char arr_9 [16] [16] ;
_Bool arr_10 [16] ;
long long int arr_11 [16] [16] ;
_Bool arr_12 [16] ;
unsigned short arr_14 [16] [16] [16] ;
signed char arr_16 [16] ;
unsigned char arr_23 [16] [16] [16] ;
long long int arr_24 [16] [16] [16] ;
int arr_4 [18] ;
unsigned char arr_17 [16] [16] [16] ;
short arr_18 [16] [16] ;
int arr_21 [16] ;
long long int arr_29 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -1115318158;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 2927716960254646982LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)2500;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (short)-2773;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = -6428166092979153570LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)44177;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 5685198059723857250LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 1104591149;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_18 [i_0] [i_1] = (short)16882;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = -1275526228;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_29 [i_0] = 7832014561750555617LL;
}

void checksum() {
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
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
