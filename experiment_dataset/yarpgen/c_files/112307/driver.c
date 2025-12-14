#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2578839890634497849LL;
signed char var_1 = (signed char)42;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 4743953407050636747ULL;
unsigned short var_4 = (unsigned short)14321;
long long int var_5 = -6703305896988307189LL;
signed char var_6 = (signed char)-99;
unsigned int var_7 = 3859174246U;
signed char var_8 = (signed char)-57;
signed char var_9 = (signed char)-63;
unsigned char var_10 = (unsigned char)149;
short var_11 = (short)-2919;
unsigned char var_12 = (unsigned char)31;
short var_13 = (short)-25464;
long long int var_14 = 5858115435049513773LL;
int zero = 0;
unsigned long long int var_15 = 18283372378409827710ULL;
unsigned long long int var_16 = 7265502432478538835ULL;
signed char var_17 = (signed char)-87;
long long int var_18 = -6778104540999245789LL;
unsigned short var_19 = (unsigned short)34867;
unsigned int var_20 = 4101486198U;
unsigned int var_21 = 3032164121U;
short var_22 = (short)23153;
unsigned long long int var_23 = 16427484899368099962ULL;
unsigned long long int var_24 = 10578520824869204738ULL;
unsigned char var_25 = (unsigned char)85;
_Bool var_26 = (_Bool)0;
int var_27 = -1660016531;
signed char var_28 = (signed char)-98;
signed char var_29 = (signed char)-67;
unsigned short var_30 = (unsigned short)30719;
signed char var_31 = (signed char)43;
int var_32 = -309208292;
_Bool var_33 = (_Bool)1;
_Bool var_34 = (_Bool)1;
_Bool var_35 = (_Bool)0;
unsigned short var_36 = (unsigned short)43100;
unsigned int var_37 = 4082336848U;
unsigned int var_38 = 3227058812U;
signed char var_39 = (signed char)-16;
unsigned int var_40 = 2238124942U;
unsigned int var_41 = 2332353003U;
long long int var_42 = -8939132098871461263LL;
unsigned int var_43 = 3542144385U;
signed char var_44 = (signed char)52;
unsigned short var_45 = (unsigned short)36363;
_Bool var_46 = (_Bool)0;
signed char var_47 = (signed char)6;
_Bool var_48 = (_Bool)0;
signed char var_49 = (signed char)-48;
_Bool var_50 = (_Bool)1;
unsigned short var_51 = (unsigned short)14794;
unsigned int var_52 = 1329197365U;
unsigned long long int var_53 = 10654594675111290505ULL;
unsigned char var_54 = (unsigned char)93;
unsigned char var_55 = (unsigned char)128;
unsigned long long int var_56 = 1117915821028549360ULL;
_Bool var_57 = (_Bool)1;
signed char var_58 = (signed char)-60;
_Bool var_59 = (_Bool)0;
unsigned int var_60 = 1177101203U;
unsigned char var_61 = (unsigned char)152;
int var_62 = 901450815;
unsigned short var_63 = (unsigned short)30647;
signed char var_64 = (signed char)29;
signed char var_65 = (signed char)-119;
_Bool var_66 = (_Bool)0;
unsigned char var_67 = (unsigned char)151;
int var_68 = -154755143;
unsigned long long int var_69 = 17132160271648922525ULL;
unsigned long long int var_70 = 1447601375241444179ULL;
signed char var_71 = (signed char)-7;
_Bool var_72 = (_Bool)1;
long long int var_73 = 3823316435937010320LL;
signed char var_74 = (signed char)8;
unsigned char var_75 = (unsigned char)116;
short var_76 = (short)-7691;
unsigned short var_77 = (unsigned short)17349;
signed char var_78 = (signed char)66;
unsigned char var_79 = (unsigned char)132;
signed char arr_0 [11] ;
signed char arr_1 [11] [11] ;
unsigned long long int arr_2 [11] [11] ;
unsigned int arr_3 [11] [11] ;
unsigned long long int arr_4 [11] ;
int arr_5 [11] [11] ;
signed char arr_6 [11] [11] [11] [11] ;
short arr_9 [11] [11] ;
unsigned char arr_11 [11] [11] [11] ;
unsigned long long int arr_12 [11] ;
unsigned long long int arr_14 [11] [11] [11] ;
signed char arr_15 [11] [11] [11] ;
unsigned int arr_19 [11] [11] [11] ;
_Bool arr_22 [11] [11] [11] ;
signed char arr_24 [11] [11] [11] [11] [11] [11] ;
unsigned char arr_26 [11] [11] [11] [11] [11] ;
_Bool arr_27 [11] [11] [11] ;
_Bool arr_28 [11] [11] [11] [11] ;
_Bool arr_30 [11] [11] [11] ;
short arr_32 [11] ;
unsigned char arr_35 [11] [11] [11] [11] ;
unsigned short arr_37 [11] [11] [11] [11] ;
_Bool arr_38 [11] [11] [11] ;
unsigned short arr_42 [11] [11] ;
_Bool arr_45 [18] [18] ;
unsigned long long int arr_46 [18] ;
unsigned int arr_48 [12] [12] ;
short arr_49 [12] ;
signed char arr_52 [12] [12] [12] ;
signed char arr_54 [12] [12] [12] [12] ;
unsigned int arr_56 [12] [12] [12] [12] ;
signed char arr_57 [12] ;
unsigned short arr_60 [18] [18] ;
_Bool arr_62 [18] [18] ;
signed char arr_63 [18] ;
signed char arr_66 [15] ;
unsigned char arr_67 [15] ;
long long int arr_69 [15] ;
int arr_74 [15] ;
long long int arr_75 [15] [15] [15] [15] [15] [15] ;
signed char arr_76 [15] [15] [15] [15] ;
unsigned char arr_79 [15] [15] ;
signed char arr_81 [15] [15] ;
_Bool arr_82 [15] [15] ;
unsigned int arr_85 [15] [15] ;
signed char arr_89 [15] [15] ;
signed char arr_91 [15] [15] ;
_Bool arr_95 [15] [15] ;
unsigned long long int arr_97 [15] [15] [15] [15] [15] ;
unsigned char arr_108 [15] [15] ;
signed char arr_7 [11] [11] [11] [11] ;
short arr_10 [11] [11] [11] [11] ;
_Bool arr_13 [11] [11] [11] ;
long long int arr_16 [11] [11] [11] ;
signed char arr_17 [11] ;
_Bool arr_29 [11] [11] ;
unsigned int arr_33 [11] [11] ;
_Bool arr_36 [11] [11] [11] [11] ;
int arr_43 [11] [11] [11] ;
_Bool arr_44 [11] [11] ;
unsigned short arr_47 [18] [18] ;
unsigned short arr_64 [18] ;
unsigned short arr_65 [18] ;
_Bool arr_71 [15] ;
unsigned int arr_72 [15] [15] [15] ;
short arr_77 [15] [15] [15] [15] ;
unsigned int arr_78 [15] [15] [15] ;
int arr_87 [15] ;
_Bool arr_101 [15] ;
_Bool arr_102 [15] [15] ;
_Bool arr_114 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-24 : (signed char)-121;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 7246310388623483579ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 4021577817U : 3422027635U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 6322640688439515336ULL : 4316654586016914007ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -1727196366 : -1943909566;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)60 : (signed char)106;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)28370 : (short)3177;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = 18397955419823610408ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 8774244981467824130ULL : 6040441441598248055ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-51 : (signed char)-105;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 3431987904U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)182 : (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_32 [i_0] = (short)-5928;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (unsigned short)57199;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_42 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)18277 : (unsigned short)31219;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_45 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_46 [i_0] = 675543365322332656ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_48 [i_0] [i_1] = 2151895763U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_49 [i_0] = (short)-13066;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_52 [i_0] [i_1] [i_2] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_56 [i_0] [i_1] [i_2] [i_3] = 4014438878U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_57 [i_0] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_60 [i_0] [i_1] = (unsigned short)18612;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_62 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_63 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_66 [i_0] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_67 [i_0] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_69 [i_0] = -3233401049895129664LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_74 [i_0] = 1608988832;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_75 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? -6739132865083226940LL : 168513261161851362LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_76 [i_0] [i_1] [i_2] [i_3] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_79 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)69 : (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_81 [i_0] [i_1] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_82 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_85 [i_0] [i_1] = 4140316665U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_89 [i_0] [i_1] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_91 [i_0] [i_1] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_95 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_97 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 11090140558153299681ULL : 15267075809982080217ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_108 [i_0] [i_1] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-103 : (signed char)-87;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-31094 : (short)18169;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1027783333366892444LL : 7105352503568170226LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (signed char)84 : (signed char)-97;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_33 [i_0] [i_1] = (i_1 % 2 == 0) ? 2437016632U : 2450819362U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1315705522 : -1792891401;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_44 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_47 [i_0] [i_1] = (unsigned short)54754;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_64 [i_0] = (unsigned short)16135;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_65 [i_0] = (unsigned short)56724;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_71 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_72 [i_0] [i_1] [i_2] = 2227840585U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_77 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)28763 : (short)1219;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_78 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3631602220U : 2872277179U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_87 [i_0] = -942881279;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_101 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_102 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_114 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_43 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_47 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_64 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_65 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_71 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_72 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_77 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_78 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_87 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_101 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_102 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_114 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
