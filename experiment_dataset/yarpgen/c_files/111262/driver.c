#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)105;
unsigned long long int var_1 = 1777330035259064518ULL;
short var_2 = (short)-27705;
unsigned char var_3 = (unsigned char)105;
long long int var_4 = -3232526531999064371LL;
short var_5 = (short)-18441;
short var_6 = (short)-16638;
unsigned char var_7 = (unsigned char)195;
long long int var_8 = 2640759357174214371LL;
unsigned short var_10 = (unsigned short)8257;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)214;
int var_13 = 1625628921;
long long int var_14 = 3802106171166355390LL;
unsigned char var_15 = (unsigned char)147;
short var_16 = (short)-5403;
int zero = 0;
unsigned long long int var_17 = 2933169060697699680ULL;
int var_18 = -140697217;
unsigned short var_19 = (unsigned short)12353;
unsigned long long int var_20 = 4423230813666480338ULL;
long long int var_21 = -8255334270647528028LL;
long long int var_22 = -933909079969219287LL;
long long int var_23 = -9001466768250244566LL;
long long int var_24 = 5061370074107155833LL;
long long int var_25 = 5273714406225701196LL;
short var_26 = (short)-20801;
signed char var_27 = (signed char)-45;
long long int var_28 = -1000588300617377802LL;
short var_29 = (short)28970;
_Bool var_30 = (_Bool)1;
short var_31 = (short)-25370;
int var_32 = 1861262823;
short var_33 = (short)-2158;
_Bool var_34 = (_Bool)1;
long long int var_35 = -4500850543619824405LL;
signed char var_36 = (signed char)79;
short var_37 = (short)-27841;
unsigned char var_38 = (unsigned char)82;
short var_39 = (short)-9874;
unsigned long long int var_40 = 8519714598919799555ULL;
unsigned long long int var_41 = 4493717803392643647ULL;
long long int var_42 = 7970779554245585189LL;
unsigned short var_43 = (unsigned short)52285;
unsigned char var_44 = (unsigned char)55;
long long int var_45 = -3089526306022204986LL;
unsigned short var_46 = (unsigned short)26914;
unsigned long long int var_47 = 11189079998620876290ULL;
long long int var_48 = 4189424999644901985LL;
long long int var_49 = 4671431249534825311LL;
long long int var_50 = 753850434228378516LL;
long long int var_51 = 1075767462737300136LL;
long long int var_52 = -765987023210410317LL;
int var_53 = -220961518;
_Bool var_54 = (_Bool)1;
_Bool var_55 = (_Bool)1;
short var_56 = (short)5201;
long long int var_57 = -7535372903251486580LL;
long long int var_58 = 8004399213165517257LL;
long long int var_59 = 1106182675631996400LL;
_Bool var_60 = (_Bool)1;
unsigned long long int var_61 = 14761447337545054531ULL;
short var_62 = (short)18077;
unsigned char var_63 = (unsigned char)95;
long long int var_64 = 3239101631300442897LL;
_Bool var_65 = (_Bool)0;
long long int var_66 = 8137344157823540959LL;
short var_67 = (short)-11057;
long long int var_68 = -2511886064247070794LL;
unsigned char var_69 = (unsigned char)190;
short var_70 = (short)-15948;
long long int var_71 = 8335733490577163135LL;
unsigned long long int var_72 = 15436645261037294206ULL;
_Bool var_73 = (_Bool)0;
int var_74 = 829904167;
unsigned long long int var_75 = 11742099759936989767ULL;
_Bool arr_0 [17] ;
unsigned short arr_1 [17] [17] ;
unsigned char arr_2 [17] [17] ;
short arr_3 [17] [17] [17] ;
unsigned char arr_4 [17] [17] [17] [17] ;
unsigned char arr_5 [17] [17] ;
unsigned long long int arr_6 [17] ;
unsigned char arr_7 [17] [17] [17] [17] ;
short arr_8 [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_10 [17] [17] [17] ;
short arr_11 [17] [17] [17] ;
unsigned char arr_12 [17] [17] ;
short arr_13 [17] [17] [17] ;
unsigned short arr_14 [17] ;
short arr_16 [14] ;
signed char arr_17 [14] ;
short arr_20 [14] [14] ;
short arr_23 [14] ;
unsigned char arr_24 [14] [14] ;
long long int arr_25 [14] ;
unsigned short arr_26 [14] [14] ;
unsigned char arr_27 [14] [14] [14] ;
signed char arr_28 [14] ;
short arr_29 [14] [14] [14] [14] ;
_Bool arr_32 [14] [14] [14] ;
short arr_33 [14] [14] [14] [14] [14] ;
unsigned char arr_34 [14] ;
unsigned char arr_35 [14] [14] [14] [14] [14] ;
int arr_38 [14] [14] [14] [14] [14] ;
short arr_39 [14] [14] [14] [14] [14] ;
unsigned char arr_40 [14] [14] [14] [14] [14] ;
short arr_43 [14] [14] [14] [14] ;
signed char arr_45 [14] ;
unsigned long long int arr_47 [14] [14] [14] [14] ;
short arr_50 [14] [14] [14] ;
short arr_57 [15] ;
short arr_58 [15] ;
short arr_59 [15] ;
unsigned short arr_60 [15] [15] [15] ;
_Bool arr_61 [15] ;
long long int arr_67 [15] [15] [15] [15] ;
_Bool arr_71 [15] ;
_Bool arr_77 [16] ;
unsigned char arr_91 [13] [13] [13] [13] ;
long long int arr_9 [17] [17] [17] [17] [17] ;
short arr_15 [17] ;
long long int arr_21 [14] [14] [14] ;
unsigned char arr_36 [14] [14] ;
unsigned short arr_41 [14] [14] [14] ;
_Bool arr_48 [14] [14] ;
unsigned char arr_54 [14] [14] [14] [14] [14] [14] ;
short arr_55 [14] ;
short arr_56 [14] ;
unsigned char arr_75 [15] ;
long long int arr_80 [13] [13] ;
short arr_94 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)23361;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)159 : (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)26278;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 17809214561992537438ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)12544;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 4279659414257730668ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)-16256;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)-5317;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (unsigned short)61264;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (short)-22330;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_20 [i_0] [i_1] = (short)-8304;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_23 [i_0] = (short)2088;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = -3882994547267641039LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned short)585;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_28 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (short)22175;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)27685;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_34 [i_0] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = 1444388278;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)7702;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (short)-29166;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_45 [i_0] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = 15592254218769565813ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = (short)-10313;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_57 [i_0] = (short)-22667;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_58 [i_0] = (short)-10450;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_59 [i_0] = (short)7085;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_60 [i_0] [i_1] [i_2] = (unsigned short)16609;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_61 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_67 [i_0] [i_1] [i_2] [i_3] = 5006217105220853362LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_71 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_77 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_91 [i_0] [i_1] [i_2] [i_3] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 166549440827523655LL : 7564126232903544152LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (short)-24020;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -6715836770572825423LL : 7668840696710607689LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_36 [i_0] [i_1] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)36791 : (unsigned short)32850;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_48 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_55 [i_0] = (short)-23218;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_56 [i_0] = (short)-15825;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_75 [i_0] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_80 [i_0] [i_1] = 1913541919449091184LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_94 [i_0] = (short)12546;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_41 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_48 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_55 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_56 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_75 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_80 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_94 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
