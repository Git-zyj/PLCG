#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16575962721948999838ULL;
unsigned long long int var_1 = 16368096648016405391ULL;
short var_2 = (short)-9222;
long long int var_4 = 3840965581538150386LL;
unsigned short var_5 = (unsigned short)5605;
unsigned int var_6 = 3121563559U;
signed char var_7 = (signed char)47;
_Bool var_8 = (_Bool)0;
int var_9 = -1405525470;
unsigned char var_10 = (unsigned char)216;
signed char var_12 = (signed char)25;
unsigned char var_13 = (unsigned char)191;
unsigned short var_15 = (unsigned short)20680;
int zero = 0;
unsigned short var_17 = (unsigned short)36153;
unsigned long long int var_18 = 13865860805435299229ULL;
long long int var_19 = -8720574302697399888LL;
unsigned int var_20 = 4201692806U;
unsigned long long int var_21 = 5549464138856699158ULL;
unsigned long long int var_22 = 14878559646939021190ULL;
short var_23 = (short)-3340;
int var_24 = 1863228280;
unsigned int var_25 = 4007167708U;
_Bool var_26 = (_Bool)1;
short var_27 = (short)-8489;
long long int arr_0 [19] ;
unsigned long long int arr_3 [19] ;
unsigned long long int arr_4 [19] [19] [19] ;
unsigned int arr_5 [19] [19] [19] ;
unsigned char arr_9 [19] [19] ;
unsigned short arr_11 [19] [19] [19] ;
int arr_14 [19] [19] [19] [19] ;
unsigned char arr_7 [19] ;
unsigned int arr_8 [19] [19] ;
unsigned int arr_17 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 8965221536974892608LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 6510115926062983916ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 8191411690878336469ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2645944557U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)36714;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 26869489 : 2133743221;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = 3335927937U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = 652901522U;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
