#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1094901601;
long long int var_1 = -1261078007611973982LL;
unsigned int var_2 = 174490004U;
unsigned long long int var_3 = 11449762041367727148ULL;
int var_4 = 1790844496;
unsigned short var_5 = (unsigned short)61859;
signed char var_6 = (signed char)67;
unsigned int var_7 = 4038846223U;
_Bool var_8 = (_Bool)0;
int var_9 = 1640147045;
long long int var_10 = 506780451116239164LL;
unsigned short var_11 = (unsigned short)6292;
signed char var_12 = (signed char)-62;
unsigned long long int var_13 = 8456491798910136964ULL;
long long int var_14 = 4479089375855870820LL;
unsigned long long int var_15 = 15506100588452364193ULL;
int var_16 = 573036267;
unsigned int var_17 = 2216801219U;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)142;
long long int var_20 = -699954498514609597LL;
signed char var_21 = (signed char)-126;
long long int var_22 = 199854447494271515LL;
long long int var_23 = -8122891741662340456LL;
long long int var_24 = 5014327190683607053LL;
unsigned char var_25 = (unsigned char)70;
signed char var_26 = (signed char)125;
short var_27 = (short)-27034;
unsigned int var_28 = 1115164230U;
unsigned short var_29 = (unsigned short)57790;
long long int var_30 = 6569838016910756652LL;
_Bool var_31 = (_Bool)1;
unsigned long long int var_32 = 5105084330479184362ULL;
long long int var_33 = 4057429538033803393LL;
long long int var_34 = 6821225605188673050LL;
unsigned char var_35 = (unsigned char)96;
short var_36 = (short)22359;
unsigned int var_37 = 1918441302U;
int var_38 = 1452622887;
unsigned int var_39 = 3648766688U;
unsigned short var_40 = (unsigned short)9263;
short var_41 = (short)18128;
int var_42 = 1195825926;
short var_43 = (short)-6400;
short var_44 = (short)-8828;
unsigned short var_45 = (unsigned short)41287;
unsigned long long int var_46 = 15624750823372508967ULL;
signed char var_47 = (signed char)62;
unsigned int var_48 = 3526558072U;
unsigned int arr_0 [12] [12] ;
long long int arr_1 [12] ;
long long int arr_5 [12] [12] ;
_Bool arr_6 [12] [12] [12] ;
long long int arr_13 [19] [19] ;
short arr_14 [19] [19] ;
unsigned long long int arr_16 [19] [19] ;
signed char arr_18 [19] [19] ;
_Bool arr_19 [19] ;
short arr_24 [19] ;
long long int arr_28 [19] [19] [19] ;
unsigned int arr_31 [19] [19] [19] [19] ;
_Bool arr_32 [19] [19] [19] [19] ;
int arr_33 [19] ;
unsigned char arr_3 [12] ;
_Bool arr_4 [12] ;
unsigned char arr_7 [12] ;
_Bool arr_8 [12] ;
long long int arr_17 [19] [19] ;
_Bool arr_21 [19] [19] ;
signed char arr_22 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 1855387523U : 3554255653U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -1747727820018938146LL : 457658526654500645LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -3964206234676485815LL : 9073853197032965545LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = 1585821089751144888LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (short)26065;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? 4988464610687795969ULL : 14866965238432012276ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-95 : (signed char)-28;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (short)-9497 : (short)28070;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 177437043546898201LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2768835109U : 2665973409U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_33 [i_0] = 1719777875;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)134 : (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)179 : (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? -4499469632367430597LL : -5528405959812699367LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (signed char)26 : (signed char)11;
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
