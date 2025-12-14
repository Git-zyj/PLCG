#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)486;
unsigned int var_1 = 4183355471U;
long long int var_2 = 2503284434288029764LL;
unsigned short var_3 = (unsigned short)26312;
unsigned short var_4 = (unsigned short)61624;
unsigned long long int var_5 = 7222609214589938754ULL;
unsigned char var_6 = (unsigned char)13;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)25209;
int var_9 = -1837477811;
short var_10 = (short)-22859;
int zero = 0;
unsigned long long int var_11 = 1885033855392290704ULL;
signed char var_12 = (signed char)124;
unsigned int var_13 = 3389950660U;
int var_14 = 1201631129;
unsigned long long int var_15 = 8873601450480567991ULL;
short var_16 = (short)-32276;
int var_17 = 1003186186;
int var_18 = -541655569;
unsigned short var_19 = (unsigned short)51776;
unsigned char var_20 = (unsigned char)255;
unsigned long long int var_21 = 10386755644480706317ULL;
short var_22 = (short)3911;
int var_23 = 271989531;
unsigned long long int var_24 = 8836688423566492929ULL;
unsigned long long int var_25 = 11322652261432910475ULL;
int var_26 = -1297276332;
unsigned int var_27 = 1147157936U;
unsigned int var_28 = 3629853644U;
unsigned int var_29 = 1446493767U;
unsigned int var_30 = 942380695U;
short var_31 = (short)2376;
signed char var_32 = (signed char)-99;
int var_33 = 1664694534;
int var_34 = -1790465269;
unsigned short var_35 = (unsigned short)37790;
unsigned int var_36 = 3548452910U;
unsigned char var_37 = (unsigned char)156;
unsigned short var_38 = (unsigned short)35886;
unsigned short var_39 = (unsigned short)53257;
unsigned int var_40 = 3234970750U;
unsigned char var_41 = (unsigned char)130;
unsigned char var_42 = (unsigned char)96;
unsigned int var_43 = 1811329174U;
int var_44 = -485096660;
unsigned char var_45 = (unsigned char)86;
int var_46 = 1680582452;
unsigned short var_47 = (unsigned short)6645;
unsigned long long int var_48 = 2734977767337525184ULL;
unsigned char var_49 = (unsigned char)62;
unsigned char var_50 = (unsigned char)107;
short var_51 = (short)15268;
unsigned short var_52 = (unsigned short)49897;
unsigned long long int var_53 = 12329327905067667797ULL;
int var_54 = -575459435;
long long int var_55 = 1887167614133371979LL;
long long int var_56 = 7858986849419452708LL;
unsigned char var_57 = (unsigned char)69;
unsigned int var_58 = 29253850U;
unsigned short var_59 = (unsigned short)52019;
unsigned long long int var_60 = 11281833593922315116ULL;
unsigned short var_61 = (unsigned short)46977;
long long int var_62 = 760229845530450356LL;
unsigned int var_63 = 3186503643U;
unsigned short var_64 = (unsigned short)33494;
int var_65 = -1338578639;
signed char var_66 = (signed char)57;
unsigned int var_67 = 197764335U;
_Bool var_68 = (_Bool)1;
long long int var_69 = -5027585157363966282LL;
long long int var_70 = -4739001293704284303LL;
short var_71 = (short)21995;
int var_72 = 604012470;
unsigned char var_73 = (unsigned char)56;
unsigned long long int var_74 = 16755066157200480472ULL;
signed char arr_1 [12] ;
unsigned short arr_5 [12] [12] [12] ;
unsigned short arr_8 [12] [12] [12] ;
unsigned int arr_9 [12] [12] [12] [12] [12] ;
int arr_20 [23] ;
unsigned int arr_21 [23] ;
unsigned char arr_24 [23] ;
long long int arr_26 [23] [23] ;
unsigned char arr_27 [23] [23] [23] ;
long long int arr_28 [23] [23] [23] ;
unsigned char arr_30 [23] [23] [23] ;
long long int arr_31 [23] [23] [23] ;
unsigned int arr_35 [23] [23] [23] [23] ;
unsigned int arr_37 [23] [23] [23] [23] [23] ;
unsigned int arr_44 [23] [23] [23] [23] [23] [23] ;
int arr_47 [23] [23] [23] ;
unsigned short arr_48 [23] [23] [23] [23] ;
unsigned int arr_65 [17] ;
_Bool arr_70 [17] ;
unsigned int arr_85 [17] [17] [17] [17] ;
unsigned long long int arr_89 [14] ;
int arr_19 [12] [12] [12] [12] [12] ;
unsigned short arr_34 [23] [23] [23] ;
unsigned char arr_45 [23] [23] [23] [23] ;
unsigned int arr_46 [23] [23] [23] ;
unsigned char arr_59 [10] ;
unsigned short arr_66 [17] ;
unsigned short arr_81 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)57711;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)27596;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 1192160432U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? -2000337965 : -532719870;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = 1765239207U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_24 [i_0] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_26 [i_0] [i_1] = 4199202183647503890LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)93 : (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = -6814745579498806842LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 8912297770698641959LL : -153460012190443944LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = 3163334379U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 3473695559U : 1669276349U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 510373273U : 2006377148U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = -1957112620;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = (unsigned short)12420;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_65 [i_0] = 688050086U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_70 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_85 [i_0] [i_1] [i_2] [i_3] = 2430800805U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_89 [i_0] = 14651022635289653561ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 1257408019 : 2096320136;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)30117 : (unsigned short)8203;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)158 : (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1036404235U : 2583881416U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_59 [i_0] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_66 [i_0] = (unsigned short)8190;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_81 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)12174 : (unsigned short)29920;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_45 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_46 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_59 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_66 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_81 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
