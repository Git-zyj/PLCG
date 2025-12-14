#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)86;
unsigned short var_1 = (unsigned short)50860;
unsigned long long int var_3 = 7142017158659582602ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 3731920759U;
int var_7 = 255116156;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 9352490483855667097ULL;
short var_11 = (short)30985;
short var_12 = (short)-29578;
unsigned long long int var_13 = 16887252051012872546ULL;
unsigned int var_14 = 2708945347U;
int zero = 0;
unsigned int var_15 = 3752694865U;
short var_16 = (short)23964;
unsigned short var_17 = (unsigned short)51505;
unsigned int var_18 = 544608320U;
signed char var_19 = (signed char)-38;
unsigned int var_20 = 2503926906U;
short var_21 = (short)-3230;
short var_22 = (short)-3546;
short var_23 = (short)20993;
unsigned int var_24 = 1155542083U;
signed char var_25 = (signed char)114;
unsigned int var_26 = 2795604050U;
short arr_1 [16] ;
signed char arr_2 [16] ;
signed char arr_13 [16] ;
unsigned int arr_15 [23] ;
short arr_16 [23] ;
short arr_17 [23] ;
unsigned short arr_19 [23] ;
unsigned int arr_22 [23] [23] [23] ;
int arr_24 [23] [23] ;
unsigned char arr_25 [23] ;
long long int arr_23 [23] [23] ;
signed char arr_30 [23] [23] [23] [23] ;
_Bool arr_31 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)9778 : (short)14380;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)-57 : (signed char)-18;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = 4005283844U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (short)9034 : (short)-23587;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (short)-17802;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = (unsigned short)414;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 1485421351U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? 71784 : -1289064813;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? 8099354394508102767LL : -5631073288046925911LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)80 : (signed char)85;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
