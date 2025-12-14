#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-77;
signed char var_2 = (signed char)-107;
int var_3 = 941892356;
unsigned short var_4 = (unsigned short)29363;
unsigned int var_5 = 992055886U;
signed char var_6 = (signed char)-33;
unsigned char var_7 = (unsigned char)41;
unsigned long long int var_8 = 17633386202682536577ULL;
unsigned char var_9 = (unsigned char)68;
unsigned short var_10 = (unsigned short)55576;
long long int var_11 = -6764952356729926124LL;
unsigned short var_12 = (unsigned short)4533;
long long int var_13 = 7591947616125314181LL;
long long int var_14 = 4254216321252975831LL;
int zero = 0;
signed char var_15 = (signed char)28;
signed char var_16 = (signed char)-72;
long long int var_17 = -6203890818021775748LL;
int var_18 = 1305731938;
signed char var_19 = (signed char)9;
unsigned int var_20 = 1896519226U;
signed char var_21 = (signed char)-89;
unsigned short var_22 = (unsigned short)48649;
unsigned short var_23 = (unsigned short)29676;
unsigned long long int var_24 = 4051405927598877810ULL;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)73;
long long int var_27 = 4536087937197031607LL;
long long int var_28 = 1296577643694598875LL;
unsigned long long int var_29 = 14382622994941976172ULL;
signed char var_30 = (signed char)101;
unsigned char var_31 = (unsigned char)178;
int var_32 = -1622800736;
long long int var_33 = -3688091419693066052LL;
_Bool var_34 = (_Bool)1;
unsigned char var_35 = (unsigned char)40;
int var_36 = 2136230864;
long long int var_37 = -6790643909291736286LL;
signed char var_38 = (signed char)-118;
unsigned long long int var_39 = 13491234505022871913ULL;
long long int var_40 = -8825282273256025229LL;
_Bool var_41 = (_Bool)1;
int arr_0 [20] [20] ;
short arr_1 [20] ;
long long int arr_2 [20] ;
long long int arr_3 [20] ;
unsigned int arr_4 [20] ;
unsigned short arr_5 [20] [20] ;
signed char arr_6 [20] ;
unsigned short arr_7 [20] [20] ;
unsigned short arr_8 [20] [20] [20] ;
signed char arr_9 [20] ;
int arr_11 [20] [20] [20] ;
short arr_14 [20] ;
int arr_18 [20] ;
unsigned char arr_19 [20] [20] [20] [20] ;
signed char arr_22 [21] ;
int arr_23 [21] ;
signed char arr_30 [20] [20] ;
int arr_12 [20] ;
unsigned short arr_20 [20] ;
unsigned short arr_21 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = -285403616;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)-27556;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -7440490070681368672LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -1284918879077412848LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 1131219598U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)10965;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)38678;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)12544;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -64458166;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (short)-10262;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = -1828554220;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = 587756315;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_30 [i_0] [i_1] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = 1787811785;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = (unsigned short)13515;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = (unsigned short)4074;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
