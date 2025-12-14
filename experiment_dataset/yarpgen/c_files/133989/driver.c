#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61606;
long long int var_1 = -1435930664804936706LL;
_Bool var_2 = (_Bool)0;
int var_3 = -1477271087;
unsigned short var_4 = (unsigned short)48005;
int var_6 = -1074461122;
unsigned short var_7 = (unsigned short)15491;
long long int var_8 = 2705316134968688557LL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 2890235328069494318ULL;
int var_11 = 928856055;
int var_12 = 2018224437;
int var_13 = -11455814;
unsigned char var_14 = (unsigned char)37;
unsigned char var_15 = (unsigned char)134;
unsigned short var_16 = (unsigned short)4244;
int zero = 0;
unsigned char var_17 = (unsigned char)55;
unsigned long long int var_18 = 4686523711830668599ULL;
unsigned char var_19 = (unsigned char)208;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)20323;
short var_22 = (short)-23490;
int var_23 = 574218605;
unsigned long long int var_24 = 2086544047784231329ULL;
long long int var_25 = -1559145363439415640LL;
long long int var_26 = 2557868457855807018LL;
short var_27 = (short)28831;
unsigned long long int var_28 = 2294391667287926186ULL;
long long int var_29 = 2606944816266642590LL;
_Bool var_30 = (_Bool)1;
_Bool var_31 = (_Bool)1;
int var_32 = -654765602;
int var_33 = 703938278;
long long int var_34 = -8826610697319406006LL;
unsigned short var_35 = (unsigned short)28395;
_Bool var_36 = (_Bool)0;
unsigned char var_37 = (unsigned char)139;
_Bool var_38 = (_Bool)1;
int arr_7 [22] [22] ;
int arr_8 [22] [22] [22] ;
long long int arr_17 [15] [15] [15] ;
unsigned char arr_31 [15] ;
int arr_32 [15] ;
long long int arr_37 [15] [15] ;
int arr_38 [15] ;
unsigned long long int arr_42 [15] [15] ;
unsigned char arr_47 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -1782387051 : -460567170;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 469123553 : 855333797;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -2229327684365356107LL : 6493266583356686955LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (unsigned char)120 : (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? -1816076301 : -274722196;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_37 [i_0] [i_1] = (i_1 % 2 == 0) ? -4800036210233650277LL : -7530968167606185209LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? -1477094954 : -215348070;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_42 [i_0] [i_1] = (i_1 % 2 == 0) ? 3121352479113405005ULL : 12061189220328957866ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_47 [i_0] = (i_0 % 2 == 0) ? (unsigned char)0 : (unsigned char)141;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_42 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_47 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
