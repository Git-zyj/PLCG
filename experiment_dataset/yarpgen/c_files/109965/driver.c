#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4722206687940582647LL;
unsigned long long int var_1 = 8605564458856871294ULL;
short var_2 = (short)-2867;
int var_4 = 1173314570;
short var_5 = (short)12150;
unsigned short var_6 = (unsigned short)57618;
unsigned short var_7 = (unsigned short)52832;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2453395619U;
unsigned int var_10 = 3694508393U;
int zero = 0;
long long int var_11 = 8466572606596543524LL;
int var_12 = -1071515576;
unsigned short var_13 = (unsigned short)44698;
unsigned int var_14 = 3724664656U;
long long int var_15 = -3345906634291428862LL;
unsigned int var_16 = 4063600037U;
signed char var_17 = (signed char)-83;
unsigned int var_18 = 1922716796U;
unsigned int var_19 = 2832804438U;
unsigned short var_20 = (unsigned short)24202;
unsigned int var_21 = 554018476U;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)60623;
unsigned long long int var_25 = 8454158961529711632ULL;
unsigned short var_26 = (unsigned short)21444;
short var_27 = (short)9441;
unsigned int var_28 = 2106886274U;
unsigned int var_29 = 2619295651U;
signed char var_30 = (signed char)104;
signed char arr_0 [20] ;
short arr_1 [20] ;
_Bool arr_4 [20] [20] ;
unsigned short arr_6 [20] [20] ;
unsigned int arr_12 [20] ;
int arr_15 [24] ;
unsigned int arr_18 [24] ;
_Bool arr_20 [24] [24] ;
unsigned char arr_21 [24] ;
unsigned short arr_22 [24] [24] [24] [24] ;
unsigned int arr_23 [24] [24] ;
unsigned int arr_24 [24] [24] [24] [24] ;
long long int arr_30 [24] [24] [24] [24] ;
unsigned long long int arr_31 [24] [24] [24] [24] ;
short arr_33 [24] [24] ;
unsigned short arr_2 [20] ;
unsigned long long int arr_3 [20] ;
unsigned short arr_7 [20] ;
int arr_8 [20] ;
unsigned int arr_13 [20] ;
unsigned long long int arr_14 [20] ;
long long int arr_28 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)-12180;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)38686;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = 2555254510U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = -859438218;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = 1377813945U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (unsigned short)58771;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_23 [i_0] [i_1] = 1250128502U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = 1062778052U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = 6584376862519362582LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = 3519948916740881665ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_33 [i_0] [i_1] = (short)12130;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)18976;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 757154273532029282ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned short)6152;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 1453984622;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 145236912U : 451418522U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 11739551778037228397ULL : 14420036021704833387ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = -6518449611408009835LL;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
