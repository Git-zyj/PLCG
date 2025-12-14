#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3583;
unsigned char var_1 = (unsigned char)75;
int var_2 = -1892626003;
unsigned int var_3 = 1069397828U;
unsigned int var_4 = 958877844U;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1934857487U;
int var_7 = -1714880476;
unsigned char var_8 = (unsigned char)115;
int var_9 = 2060557789;
unsigned int var_10 = 2106282762U;
long long int var_11 = 2730231297284051830LL;
unsigned short var_12 = (unsigned short)43651;
int zero = 0;
unsigned char var_14 = (unsigned char)100;
int var_15 = -586086890;
signed char var_16 = (signed char)-88;
int var_17 = -67332727;
signed char var_18 = (signed char)2;
unsigned char var_19 = (unsigned char)18;
unsigned short var_20 = (unsigned short)54589;
unsigned int var_21 = 795757807U;
unsigned short var_22 = (unsigned short)65484;
unsigned char var_23 = (unsigned char)198;
unsigned short var_24 = (unsigned short)16132;
unsigned int var_25 = 4143042846U;
long long int var_26 = 1815289988370562530LL;
short var_27 = (short)-16116;
signed char var_28 = (signed char)121;
unsigned char var_29 = (unsigned char)63;
unsigned short var_30 = (unsigned short)6276;
unsigned char var_31 = (unsigned char)194;
long long int var_32 = 6366709679773977502LL;
unsigned short var_33 = (unsigned short)62254;
unsigned short var_34 = (unsigned short)13349;
unsigned int var_35 = 2828387325U;
unsigned int var_36 = 2661231219U;
unsigned int var_37 = 3320338390U;
long long int var_38 = 7944366183892277037LL;
unsigned short var_39 = (unsigned short)57501;
unsigned int var_40 = 2876309249U;
unsigned int var_41 = 428650370U;
unsigned int var_42 = 549968976U;
unsigned char var_43 = (unsigned char)182;
signed char var_44 = (signed char)-7;
int var_45 = -485514790;
unsigned short var_46 = (unsigned short)7624;
unsigned short var_47 = (unsigned short)32458;
_Bool var_48 = (_Bool)0;
unsigned int var_49 = 2575483302U;
_Bool var_50 = (_Bool)0;
unsigned short var_51 = (unsigned short)2989;
unsigned int var_52 = 3208070441U;
signed char var_53 = (signed char)-56;
unsigned char var_54 = (unsigned char)251;
unsigned char var_55 = (unsigned char)202;
signed char var_56 = (signed char)-19;
unsigned int var_57 = 2819252203U;
long long int var_58 = -3065204234796259825LL;
signed char var_59 = (signed char)-46;
unsigned char var_60 = (unsigned char)18;
signed char var_61 = (signed char)-75;
unsigned short var_62 = (unsigned short)31195;
long long int var_63 = -3933148287733809111LL;
_Bool var_64 = (_Bool)1;
unsigned int var_65 = 2428209817U;
unsigned char var_66 = (unsigned char)165;
unsigned short var_67 = (unsigned short)53333;
_Bool var_68 = (_Bool)0;
signed char var_69 = (signed char)37;
short var_70 = (short)-19834;
unsigned int var_71 = 4228851390U;
int var_72 = 704340128;
unsigned int var_73 = 2571170655U;
unsigned char var_74 = (unsigned char)77;
int arr_6 [21] [21] [21] [21] ;
unsigned char arr_8 [22] [22] ;
unsigned int arr_9 [22] ;
unsigned char arr_10 [22] [22] [22] ;
unsigned short arr_11 [22] [22] [22] ;
unsigned short arr_12 [22] [22] [22] ;
unsigned int arr_13 [22] [22] ;
unsigned char arr_14 [22] [22] ;
unsigned short arr_15 [22] ;
_Bool arr_16 [22] [22] ;
long long int arr_17 [22] [22] [22] ;
unsigned char arr_19 [22] ;
unsigned int arr_20 [22] [22] [22] [22] [22] ;
signed char arr_21 [22] [22] ;
unsigned char arr_24 [22] [22] [22] [22] [22] [22] ;
_Bool arr_26 [22] ;
unsigned char arr_28 [22] [22] [22] [22] ;
unsigned int arr_29 [22] [22] [22] ;
short arr_32 [23] [23] ;
signed char arr_34 [23] ;
unsigned int arr_43 [19] [19] [19] [19] ;
unsigned char arr_45 [19] [19] [19] [19] ;
unsigned int arr_46 [19] [19] [19] ;
signed char arr_47 [19] [19] [19] [19] [19] ;
unsigned char arr_49 [19] [19] [19] [19] [19] ;
unsigned short arr_51 [19] [19] [19] [19] [19] ;
unsigned char arr_52 [19] [19] [19] [19] [19] [19] [19] ;
_Bool arr_56 [19] [19] [19] [19] ;
unsigned short arr_59 [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 370151885;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 526489320U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)2387;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)13956;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = 443659092U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (unsigned short)62615;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = -5038933779777096769LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 2040245522U : 4093349168U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-88 : (signed char)-17;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_26 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2335990687U : 3989689604U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_32 [i_0] [i_1] = (short)-11401;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_34 [i_0] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = 1002046518U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = 4240964726U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)6 : (signed char)-62;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)23384;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_56 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)23308;
}

void checksum() {
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
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
