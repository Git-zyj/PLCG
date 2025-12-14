#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -825345974;
int var_2 = -1599112137;
_Bool var_3 = (_Bool)0;
long long int var_4 = -6808235078372546883LL;
unsigned char var_5 = (unsigned char)211;
int var_6 = 670173464;
unsigned long long int var_7 = 5163122771108816673ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)66;
unsigned char var_10 = (unsigned char)144;
int zero = 0;
int var_11 = 1577359187;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 16456220696188402254ULL;
long long int var_14 = 7515365377779054658LL;
int var_15 = 217814704;
short var_16 = (short)-28039;
unsigned short var_17 = (unsigned short)2349;
signed char var_18 = (signed char)-93;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 3547868634258764657ULL;
unsigned int var_21 = 2194134725U;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)14512;
signed char var_24 = (signed char)53;
int var_25 = -1355935559;
short var_26 = (short)6338;
_Bool var_27 = (_Bool)0;
short var_28 = (short)-3449;
_Bool var_29 = (_Bool)1;
long long int var_30 = 6566246556263071064LL;
int var_31 = -1659750066;
signed char var_32 = (signed char)91;
_Bool var_33 = (_Bool)0;
int var_34 = 1244168085;
int var_35 = -769129824;
int var_36 = -516301117;
unsigned long long int var_37 = 18138028203557351800ULL;
short var_38 = (short)-21914;
_Bool var_39 = (_Bool)1;
_Bool var_40 = (_Bool)1;
_Bool var_41 = (_Bool)1;
unsigned int var_42 = 1741392330U;
int var_43 = 633482580;
long long int var_44 = -6762494471199561306LL;
int var_45 = -2038710221;
long long int var_46 = -2107557145873955384LL;
long long int var_47 = 8496355161669519392LL;
unsigned char var_48 = (unsigned char)230;
unsigned int var_49 = 86862747U;
unsigned int var_50 = 1706182155U;
int var_51 = -195968021;
unsigned char var_52 = (unsigned char)3;
int var_53 = -921573970;
short var_54 = (short)3606;
int var_55 = 460534264;
short var_56 = (short)-25639;
signed char var_57 = (signed char)35;
unsigned long long int var_58 = 3277578321420267276ULL;
signed char var_59 = (signed char)35;
int var_60 = 875845172;
unsigned char var_61 = (unsigned char)193;
unsigned char var_62 = (unsigned char)104;
unsigned char var_63 = (unsigned char)21;
short var_64 = (short)-13387;
short var_65 = (short)-16102;
_Bool var_66 = (_Bool)1;
signed char var_67 = (signed char)82;
signed char var_68 = (signed char)114;
short var_69 = (short)28714;
long long int var_70 = 2582949832080256816LL;
unsigned long long int var_71 = 14213639698308244451ULL;
int var_72 = -273342026;
int var_73 = 297303792;
int var_74 = -962222099;
int var_75 = -1682842029;
int var_76 = -22260715;
unsigned long long int var_77 = 9457179880389941500ULL;
unsigned short var_78 = (unsigned short)62689;
_Bool var_79 = (_Bool)1;
_Bool var_80 = (_Bool)1;
long long int var_81 = 7127132687943751773LL;
_Bool var_82 = (_Bool)0;
_Bool var_83 = (_Bool)0;
short var_84 = (short)11911;
unsigned char var_85 = (unsigned char)21;
unsigned int var_86 = 1179911290U;
unsigned char var_87 = (unsigned char)81;
short var_88 = (short)-10050;
_Bool var_89 = (_Bool)1;
unsigned long long int var_90 = 15387588841887860885ULL;
short var_91 = (short)-26624;
int var_92 = 1633460550;
short var_93 = (short)-23344;
unsigned int var_94 = 50725146U;
signed char var_95 = (signed char)-89;
_Bool var_96 = (_Bool)1;
unsigned char var_97 = (unsigned char)30;
unsigned int var_98 = 782769434U;
_Bool var_99 = (_Bool)0;
int var_100 = -12080010;
unsigned char var_101 = (unsigned char)107;
unsigned int var_102 = 1544749272U;
unsigned long long int arr_0 [21] ;
short arr_1 [21] [21] ;
short arr_2 [21] ;
long long int arr_4 [21] ;
int arr_5 [21] [21] [21] ;
_Bool arr_7 [21] [21] [21] ;
unsigned long long int arr_8 [21] [21] [21] [21] ;
unsigned int arr_9 [21] [21] [21] [21] [21] [21] ;
long long int arr_10 [21] [21] [21] [21] [21] [21] ;
signed char arr_11 [21] [21] [21] [21] ;
short arr_13 [21] [21] [21] [21] [21] ;
signed char arr_15 [21] ;
unsigned int arr_16 [18] ;
signed char arr_17 [18] [18] ;
int arr_19 [18] ;
unsigned int arr_20 [18] [18] [18] ;
unsigned long long int arr_21 [18] [18] ;
short arr_22 [18] [18] [18] ;
_Bool arr_24 [18] ;
unsigned char arr_25 [18] [18] [18] [18] [18] ;
short arr_26 [18] [18] [18] [18] [18] [18] ;
int arr_27 [18] [18] ;
signed char arr_28 [18] [18] [18] ;
short arr_31 [18] ;
unsigned int arr_38 [18] [18] [18] [18] [18] ;
short arr_40 [18] ;
unsigned char arr_41 [18] [18] [18] [18] [18] ;
_Bool arr_45 [18] ;
signed char arr_47 [18] [18] [18] ;
int arr_52 [18] [18] [18] [18] ;
int arr_55 [18] [18] [18] ;
unsigned long long int arr_57 [18] [18] [18] [18] [18] [18] ;
int arr_58 [18] [18] [18] [18] ;
signed char arr_59 [18] [18] [18] [18] [18] [18] [18] ;
signed char arr_62 [18] [18] ;
unsigned short arr_64 [18] [18] [18] [18] ;
signed char arr_65 [18] [18] [18] [18] [18] ;
int arr_73 [18] ;
int arr_74 [18] [18] [18] [18] [18] [18] ;
int arr_77 [18] [18] [18] ;
unsigned int arr_90 [18] [18] [18] [18] ;
int arr_104 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 13035514571042016527ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-14147;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)-25422;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -1193114895227208261LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1257736012;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 5101905896297030041ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 2288657366U : 1111405816U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4860299371171395610LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-56 : (signed char)-42;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)7273 : (short)20059;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = 208734886U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)59 : (signed char)-4;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? -858967022 : 1404021102;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3297541406U : 1096399993U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? 2227561145578386172ULL : 2752553110280162962ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (short)-1919;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_24 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)23 : (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)18105;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_27 [i_0] [i_1] = -1313244966;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)28 : (signed char)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_31 [i_0] = (short)-2991;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 1569973342U : 350360761U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_40 [i_0] = (short)-31329;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_45 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 2076228778 : -1511895346;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -952059598 : 1641781218;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 7901941998709162736ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_58 [i_0] [i_1] [i_2] [i_3] = 307346410;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_62 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)58 : (signed char)111;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_64 [i_0] [i_1] [i_2] [i_3] = (unsigned short)56983;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_65 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_73 [i_0] = 1875500474;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_74 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 271290644;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_77 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2000809936 : -1384989301;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_90 [i_0] [i_1] [i_2] [i_3] = 3387993806U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_104 [i_0] [i_1] = 1289036065;
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
    hash(&seed, var_75);
    hash(&seed, var_76);
    hash(&seed, var_77);
    hash(&seed, var_78);
    hash(&seed, var_79);
    hash(&seed, var_80);
    hash(&seed, var_81);
    hash(&seed, var_82);
    hash(&seed, var_83);
    hash(&seed, var_84);
    hash(&seed, var_85);
    hash(&seed, var_86);
    hash(&seed, var_87);
    hash(&seed, var_88);
    hash(&seed, var_89);
    hash(&seed, var_90);
    hash(&seed, var_91);
    hash(&seed, var_92);
    hash(&seed, var_93);
    hash(&seed, var_94);
    hash(&seed, var_95);
    hash(&seed, var_96);
    hash(&seed, var_97);
    hash(&seed, var_98);
    hash(&seed, var_99);
    hash(&seed, var_100);
    hash(&seed, var_101);
    hash(&seed, var_102);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
