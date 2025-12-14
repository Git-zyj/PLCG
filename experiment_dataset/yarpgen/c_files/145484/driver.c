#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-28524;
unsigned long long int var_3 = 1440636168358001948ULL;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-17200;
_Bool var_7 = (_Bool)1;
short var_8 = (short)19505;
unsigned long long int var_10 = 4362943763610846556ULL;
unsigned char var_11 = (unsigned char)222;
short var_12 = (short)31882;
unsigned long long int var_13 = 7552809169103637743ULL;
unsigned short var_14 = (unsigned short)55864;
unsigned long long int var_15 = 4879823675632174578ULL;
unsigned short var_16 = (unsigned short)51785;
int zero = 0;
unsigned short var_18 = (unsigned short)64384;
unsigned long long int var_19 = 1253121645191588754ULL;
unsigned short var_20 = (unsigned short)12739;
unsigned long long int var_21 = 7925712605507027913ULL;
unsigned long long int var_22 = 3393780780201707857ULL;
short var_23 = (short)-3415;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 12905210419058704443ULL;
unsigned char var_26 = (unsigned char)105;
_Bool var_27 = (_Bool)1;
short var_28 = (short)1135;
unsigned char var_29 = (unsigned char)141;
unsigned char var_30 = (unsigned char)87;
short var_31 = (short)-11774;
short var_32 = (short)-14926;
short var_33 = (short)-27828;
short var_34 = (short)-14195;
unsigned long long int var_35 = 6276778512937320409ULL;
short var_36 = (short)14056;
unsigned long long int var_37 = 7209933365645708766ULL;
unsigned short var_38 = (unsigned short)804;
unsigned long long int var_39 = 1207324773132895599ULL;
unsigned short var_40 = (unsigned short)63750;
unsigned long long int var_41 = 16486380659244107406ULL;
unsigned char var_42 = (unsigned char)12;
unsigned char var_43 = (unsigned char)70;
unsigned char arr_0 [22] [22] ;
_Bool arr_1 [22] [22] ;
_Bool arr_3 [22] [22] ;
unsigned long long int arr_5 [22] [22] ;
unsigned long long int arr_6 [22] [22] [22] [22] ;
unsigned long long int arr_7 [22] ;
unsigned long long int arr_8 [22] [22] [22] ;
unsigned long long int arr_10 [22] [22] [22] ;
unsigned long long int arr_16 [22] [22] [22] [22] ;
_Bool arr_21 [22] [22] [22] [22] [22] ;
_Bool arr_24 [22] [22] [22] ;
short arr_18 [22] [22] [22] ;
unsigned long long int arr_26 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)181 : (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 10204521415968020759ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 17603542315227470272ULL : 1319016241822390702ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 14300051351979982616ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 10696296602380659704ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 11401577883344839687ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 10322053801509413363ULL : 18204548886204681596ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)21007 : (short)292;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 15817417362010234525ULL : 14858352087673405939ULL;
}

void checksum() {
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
    hash(&seed, var_42);
    hash(&seed, var_43);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
