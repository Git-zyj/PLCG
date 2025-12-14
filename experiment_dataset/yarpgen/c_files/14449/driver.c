#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1941871962U;
unsigned long long int var_5 = 12843403199528733736ULL;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-12390;
unsigned short var_9 = (unsigned short)31392;
signed char var_11 = (signed char)61;
short var_13 = (short)-2325;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)113;
unsigned long long int var_16 = 490087137602311050ULL;
signed char var_17 = (signed char)17;
signed char var_18 = (signed char)81;
int zero = 0;
short var_19 = (short)-11360;
unsigned int var_20 = 3714157208U;
short var_21 = (short)-3129;
unsigned short var_22 = (unsigned short)19659;
signed char var_23 = (signed char)72;
unsigned short var_24 = (unsigned short)45727;
unsigned long long int var_25 = 12126711515631462503ULL;
short var_26 = (short)-31982;
short var_27 = (short)-15133;
unsigned int var_28 = 3208772620U;
long long int var_29 = -8438039704751441215LL;
unsigned long long int var_30 = 5956600143324239253ULL;
unsigned long long int var_31 = 14491036333400842582ULL;
_Bool var_32 = (_Bool)1;
signed char var_33 = (signed char)-120;
signed char var_34 = (signed char)-122;
unsigned long long int var_35 = 9869151410710153904ULL;
unsigned int arr_15 [24] ;
unsigned long long int arr_16 [24] ;
unsigned short arr_19 [24] [24] [24] ;
signed char arr_21 [24] ;
short arr_22 [24] [24] [24] [24] ;
unsigned short arr_25 [24] [24] [24] [24] [24] ;
short arr_28 [24] ;
long long int arr_31 [24] ;
signed char arr_43 [25] ;
unsigned short arr_17 [24] ;
_Bool arr_29 [24] [24] [24] ;
unsigned long long int arr_33 [24] [24] ;
short arr_34 [24] [24] ;
unsigned short arr_35 [24] ;
long long int arr_36 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = 4087485107U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = 14543092295756190554ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned short)13592;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = (signed char)82;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (short)-9989;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)63544;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_28 [i_0] = (short)-3315;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_31 [i_0] = 6593672371236054117LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_43 [i_0] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (unsigned short)6560;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_33 [i_0] [i_1] = 14629666358384735722ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_34 [i_0] [i_1] = (short)-32106;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_35 [i_0] = (unsigned short)44982;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_36 [i_0] = -9016595576784779995LL;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_36 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
