#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 871286844;
unsigned char var_10 = (unsigned char)29;
long long int var_12 = 6610267433836927564LL;
unsigned short var_17 = (unsigned short)44641;
int zero = 0;
signed char var_19 = (signed char)-110;
unsigned long long int var_20 = 7069330183190603575ULL;
long long int var_21 = 8583810336014090779LL;
unsigned int var_22 = 2765204452U;
int var_23 = 583062946;
long long int var_24 = -3681390690631385459LL;
unsigned char var_25 = (unsigned char)54;
long long int var_26 = -122062124558096705LL;
unsigned char var_27 = (unsigned char)78;
short var_28 = (short)-270;
short var_29 = (short)10242;
signed char var_30 = (signed char)5;
unsigned char var_31 = (unsigned char)80;
long long int var_32 = 1092979707284822380LL;
int var_33 = 1183750753;
long long int var_34 = -7395269064066134083LL;
short var_35 = (short)-8391;
int var_36 = -309178224;
short var_37 = (short)18154;
unsigned char var_38 = (unsigned char)139;
unsigned char var_39 = (unsigned char)191;
unsigned char var_40 = (unsigned char)138;
signed char var_41 = (signed char)115;
short var_42 = (short)-18081;
unsigned char var_43 = (unsigned char)42;
short var_44 = (short)-12400;
long long int var_45 = -9042666908700852063LL;
long long int var_46 = -2209912369301138107LL;
unsigned char var_47 = (unsigned char)197;
signed char var_48 = (signed char)-127;
long long int var_49 = 5982104745924848940LL;
unsigned short var_50 = (unsigned short)3200;
unsigned char var_51 = (unsigned char)52;
unsigned long long int var_52 = 1950689706001213ULL;
int var_53 = -1849896589;
long long int var_54 = -1840314050094723171LL;
long long int var_55 = -6816815603973037062LL;
long long int var_56 = -2595629858283463450LL;
unsigned char var_57 = (unsigned char)180;
unsigned short var_58 = (unsigned short)33573;
signed char var_59 = (signed char)42;
signed char var_60 = (signed char)98;
unsigned char var_61 = (unsigned char)218;
int var_62 = 1661878164;
unsigned short var_63 = (unsigned short)58436;
signed char arr_0 [18] ;
int arr_1 [18] ;
long long int arr_3 [22] ;
signed char arr_4 [22] ;
short arr_6 [20] ;
long long int arr_7 [20] ;
short arr_8 [20] ;
short arr_9 [20] [20] ;
unsigned long long int arr_10 [20] [20] ;
short arr_11 [20] [20] [20] ;
short arr_12 [20] [20] [20] ;
long long int arr_13 [20] [20] ;
long long int arr_14 [20] [20] ;
unsigned char arr_16 [20] ;
signed char arr_17 [20] [20] [20] [20] ;
long long int arr_19 [20] ;
_Bool arr_20 [20] [20] [20] ;
unsigned long long int arr_21 [20] ;
short arr_22 [20] [20] [20] [20] ;
signed char arr_24 [10] ;
unsigned long long int arr_25 [10] ;
long long int arr_26 [10] ;
unsigned char arr_27 [10] ;
unsigned int arr_28 [10] [10] [10] ;
short arr_29 [10] [10] [10] ;
int arr_31 [10] [10] [10] [10] ;
unsigned int arr_32 [10] [10] [10] [10] ;
short arr_34 [10] ;
signed char arr_36 [10] ;
unsigned int arr_37 [10] [10] [10] [10] ;
unsigned int arr_38 [10] [10] [10] [10] [10] [10] [10] ;
short arr_39 [10] [10] [10] ;
short arr_40 [10] [10] [10] [10] [10] ;
signed char arr_43 [10] [10] [10] [10] [10] ;
short arr_45 [10] [10] [10] [10] [10] ;
long long int arr_49 [10] [10] [10] [10] [10] ;
unsigned short arr_50 [10] ;
short arr_51 [10] [10] [10] [10] [10] ;
long long int arr_55 [10] ;
unsigned char arr_58 [10] [10] [10] ;
unsigned long long int arr_60 [10] [10] [10] ;
_Bool arr_63 [10] [10] [10] [10] [10] [10] ;
_Bool arr_66 [10] [10] [10] [10] [10] ;
long long int arr_67 [10] ;
int arr_73 [10] ;
short arr_74 [10] [10] [10] [10] ;
long long int arr_75 [10] [10] [10] ;
unsigned char arr_77 [10] [10] [10] [10] ;
short arr_78 [10] [10] [10] [10] ;
_Bool arr_79 [10] [10] [10] [10] ;
signed char arr_81 [10] [10] [10] [10] ;
int arr_82 [10] [10] [10] [10] [10] ;
unsigned int arr_83 [10] [10] [10] [10] [10] [10] [10] ;
signed char arr_86 [10] [10] [10] [10] [10] [10] ;
unsigned char arr_92 [10] [10] [10] [10] ;
unsigned int arr_93 [10] [10] [10] [10] ;
unsigned short arr_96 [10] [10] [10] [10] ;
long long int arr_98 [10] ;
_Bool arr_101 [10] [10] [10] [10] ;
short arr_2 [18] [18] ;
unsigned short arr_5 [22] [22] ;
long long int arr_15 [20] ;
unsigned char arr_18 [20] [20] [20] [20] ;
short arr_23 [20] ;
signed char arr_30 [10] ;
unsigned int arr_35 [10] [10] [10] [10] ;
short arr_41 [10] [10] [10] ;
short arr_42 [10] [10] ;
_Bool arr_46 [10] [10] [10] [10] [10] ;
unsigned short arr_47 [10] [10] [10] [10] ;
long long int arr_52 [10] [10] [10] [10] [10] [10] ;
signed char arr_61 [10] [10] [10] [10] ;
long long int arr_64 [10] [10] [10] [10] [10] [10] [10] ;
signed char arr_68 [10] [10] [10] [10] [10] [10] ;
long long int arr_71 [10] [10] [10] [10] ;
unsigned int arr_72 [10] [10] ;
long long int arr_84 [10] [10] [10] [10] [10] ;
short arr_91 [10] [10] [10] [10] [10] [10] [10] ;
_Bool arr_97 [10] [10] [10] ;
short arr_100 [10] [10] [10] [10] ;
short arr_103 [10] [10] [10] [10] [10] ;
signed char arr_108 [10] [10] ;
short arr_109 [10] ;
signed char arr_110 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1975845312;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 1496524554512257788LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (short)29901;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 3725649805525918190LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (short)-15639;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (short)4754;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = 4853570089890994159ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)29225;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)21634;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = 7161048291329391684LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = -8227980349931288619LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = 2101536679792618510LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = 11703072903984775020ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (short)14572;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_24 [i_0] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_25 [i_0] = 6795382554094752636ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_26 [i_0] = -981620246185195368LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_27 [i_0] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 2113120255U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (short)-28094;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = 1082125992;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 3603356276U : 2282271151U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_34 [i_0] = (short)24628;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? (signed char)111 : (signed char)72;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = 4018754123U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? 109171744U : 3778330747U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-5411 : (short)-2839;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-17559;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)-106 : (signed char)-16;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)19428;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] = 8296875669963921495LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_50 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13278 : (unsigned short)13817;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)32565 : (short)-17935;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_55 [i_0] = -8093804297982036402LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_58 [i_0] [i_1] [i_2] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_60 [i_0] [i_1] [i_2] = 5463822829366995086ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_66 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_67 [i_0] = -943689804064574836LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_73 [i_0] = 544192086;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_74 [i_0] [i_1] [i_2] [i_3] = (short)-7067;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_75 [i_0] [i_1] [i_2] = 8099435837922011437LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_77 [i_0] [i_1] [i_2] [i_3] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_78 [i_0] [i_1] [i_2] [i_3] = (short)28849;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_79 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_81 [i_0] [i_1] [i_2] [i_3] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_82 [i_0] [i_1] [i_2] [i_3] [i_4] = 258086238;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_83 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 210195857U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_86 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_92 [i_0] [i_1] [i_2] [i_3] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_93 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3331748979U : 253988855U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_96 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)18340 : (unsigned short)11444;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_98 [i_0] = -4392964306137426977LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_101 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (short)31409;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)33152;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = 9084241701115379374LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_23 [i_0] = (short)-11260;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_30 [i_0] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2476857664U : 2253409923U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-28843 : (short)-22546;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_42 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)24849 : (short)2663;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)29942 : (unsigned short)52837;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 5379084457431061113LL : -6856232999123051397LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_61 [i_0] [i_1] [i_2] [i_3] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_64 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -2570732196492582849LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_68 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_71 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 8339856237615006672LL : -3165042948440196996LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_72 [i_0] [i_1] = 3594793911U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_84 [i_0] [i_1] [i_2] [i_3] [i_4] = -6889255609589726084LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_91 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-21078;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_97 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_100 [i_0] [i_1] [i_2] [i_3] = (short)17284;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_103 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (short)-2588 : (short)5708;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_108 [i_0] [i_1] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_109 [i_0] = (short)-26964;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_110 [i_0] = (signed char)-59;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_41 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_42 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_47 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            hash(&seed, arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_61 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                hash(&seed, arr_64 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            hash(&seed, arr_68 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_71 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_72 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_84 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                hash(&seed, arr_91 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_97 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_100 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_103 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_108 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_109 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_110 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
