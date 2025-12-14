#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3213593351639232633LL;
short var_1 = (short)24551;
unsigned long long int var_2 = 5005162700511129797ULL;
signed char var_3 = (signed char)20;
unsigned long long int var_4 = 1840847571394342334ULL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-100;
long long int var_7 = 7412038383896820866LL;
long long int var_8 = 4664420885198935251LL;
unsigned long long int var_9 = 18068379944818719595ULL;
unsigned char var_10 = (unsigned char)31;
unsigned char var_11 = (unsigned char)136;
long long int var_12 = -4970841406353822701LL;
unsigned short var_13 = (unsigned short)23016;
long long int var_14 = 1188922343840049559LL;
unsigned long long int var_15 = 14255381929664873394ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)109;
short var_17 = (short)-23651;
long long int var_18 = 2658246788479659271LL;
unsigned char var_19 = (unsigned char)119;
long long int var_20 = -4271051202016667033LL;
unsigned long long int var_21 = 8455071699062630506ULL;
unsigned int var_22 = 3312899183U;
unsigned char var_23 = (unsigned char)47;
unsigned int var_24 = 2680014133U;
long long int var_25 = 5477600670732239261LL;
signed char var_26 = (signed char)-33;
unsigned int var_27 = 789114445U;
unsigned long long int var_28 = 8889490126176673464ULL;
_Bool var_29 = (_Bool)1;
int var_30 = -1648460750;
long long int var_31 = 3345721575125633245LL;
unsigned char var_32 = (unsigned char)19;
unsigned char var_33 = (unsigned char)137;
unsigned char var_34 = (unsigned char)141;
unsigned int var_35 = 3355110307U;
long long int var_36 = 3196338006316510302LL;
signed char var_37 = (signed char)21;
short var_38 = (short)28194;
unsigned int var_39 = 2173183240U;
short var_40 = (short)-18799;
short var_41 = (short)7441;
_Bool var_42 = (_Bool)1;
unsigned char var_43 = (unsigned char)96;
unsigned int var_44 = 3112913829U;
unsigned int var_45 = 14141704U;
long long int var_46 = 536511340904788984LL;
unsigned long long int var_47 = 10862866963675799660ULL;
unsigned long long int var_48 = 7701646249679665034ULL;
long long int var_49 = 8983250325484586443LL;
unsigned char var_50 = (unsigned char)178;
unsigned char var_51 = (unsigned char)162;
unsigned int var_52 = 4266868107U;
long long int var_53 = 883212848353287492LL;
unsigned char var_54 = (unsigned char)210;
unsigned int var_55 = 467675199U;
unsigned short var_56 = (unsigned short)30663;
unsigned int var_57 = 344236092U;
unsigned long long int var_58 = 5193377353603340990ULL;
signed char var_59 = (signed char)-112;
signed char var_60 = (signed char)77;
long long int var_61 = 5697276119344696509LL;
long long int var_62 = 8772895697298784568LL;
short var_63 = (short)-6775;
int var_64 = -588749420;
unsigned int var_65 = 3185676909U;
_Bool var_66 = (_Bool)0;
unsigned char var_67 = (unsigned char)193;
unsigned int var_68 = 748679193U;
unsigned int var_69 = 1720301997U;
unsigned long long int var_70 = 5525743141192720617ULL;
short var_71 = (short)2925;
unsigned int var_72 = 1877489055U;
_Bool var_73 = (_Bool)0;
unsigned int var_74 = 2498099023U;
unsigned char var_75 = (unsigned char)71;
unsigned int var_76 = 3841917715U;
unsigned short var_77 = (unsigned short)6378;
unsigned char var_78 = (unsigned char)113;
unsigned int var_79 = 2195502590U;
signed char var_80 = (signed char)-38;
_Bool arr_0 [20] [20] ;
signed char arr_1 [20] [20] ;
unsigned int arr_2 [20] ;
unsigned long long int arr_3 [20] [20] [20] ;
_Bool arr_4 [20] [20] ;
unsigned int arr_5 [20] ;
short arr_6 [20] ;
signed char arr_7 [20] ;
unsigned char arr_9 [20] [20] [20] [20] ;
unsigned long long int arr_11 [20] ;
unsigned int arr_12 [20] [20] [20] [20] [20] ;
_Bool arr_13 [20] [20] [20] ;
int arr_14 [20] [20] [20] [20] [20] [20] ;
short arr_18 [20] [20] [20] ;
unsigned char arr_19 [20] [20] ;
long long int arr_20 [24] ;
unsigned char arr_21 [24] [24] ;
signed char arr_22 [24] ;
_Bool arr_24 [24] ;
unsigned long long int arr_26 [24] [24] [24] [24] ;
long long int arr_27 [24] [24] [24] [24] ;
long long int arr_28 [24] [24] [24] [24] ;
unsigned char arr_29 [24] [24] [24] [24] [24] ;
signed char arr_30 [24] [24] ;
unsigned long long int arr_31 [19] ;
unsigned int arr_33 [19] ;
_Bool arr_34 [19] [19] ;
signed char arr_35 [19] ;
signed char arr_36 [19] [19] ;
unsigned int arr_38 [19] ;
signed char arr_39 [19] [19] [19] ;
int arr_40 [19] ;
long long int arr_41 [19] [19] [19] ;
unsigned long long int arr_43 [19] ;
long long int arr_44 [19] [19] [19] [19] [19] [19] ;
long long int arr_45 [19] [19] [19] [19] [19] [19] [19] ;
unsigned int arr_46 [19] [19] [19] [19] [19] ;
int arr_47 [19] [19] [19] [19] [19] [19] ;
unsigned char arr_48 [19] [19] [19] [19] [19] [19] [19] ;
long long int arr_54 [19] [19] ;
long long int arr_56 [19] [19] ;
short arr_57 [19] [19] [19] ;
unsigned long long int arr_59 [19] [19] [19] [19] [19] ;
unsigned long long int arr_61 [19] ;
int arr_65 [19] [19] [19] [19] [19] ;
unsigned long long int arr_66 [19] [19] [19] [19] [19] [19] [19] ;
unsigned long long int arr_67 [19] [19] [19] [19] [19] ;
unsigned long long int arr_69 [19] [19] [19] [19] ;
_Bool arr_72 [19] [19] [19] [19] [19] [19] ;
unsigned long long int arr_77 [19] [19] [19] [19] [19] [19] [19] ;
unsigned long long int arr_81 [19] [19] [19] [19] [19] [19] ;
unsigned long long int arr_85 [19] [19] ;
short arr_86 [19] [19] [19] ;
unsigned int arr_87 [19] ;
unsigned char arr_88 [19] [19] [19] ;
unsigned int arr_90 [19] [19] [19] [19] [19] ;
unsigned int arr_91 [19] [19] [19] [19] ;
unsigned int arr_96 [19] [19] [19] ;
unsigned long long int arr_100 [19] [19] [19] ;
short arr_101 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 556788941U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 9755025181936785525ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 2783199687U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (short)29064;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = 11017986402794653238ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 1757990930U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -202745674;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (short)2712;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = 7061175012702106281LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_24 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = 6899991845543948205ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = 4132006152204189787LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = 2399527910431134329LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_30 [i_0] [i_1] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_31 [i_0] = 1951989673855945918ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_33 [i_0] = 604278302U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_34 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_35 [i_0] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_36 [i_0] [i_1] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_38 [i_0] = 275205018U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_40 [i_0] = 416099493;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = 2821670228108763671LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_43 [i_0] = 15867867898641956110ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 8140050445141967751LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -6003610884514545465LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] = 2036411151U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -489758528;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_54 [i_0] [i_1] = 3985551072639815883LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_56 [i_0] [i_1] = -3058098933399650313LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = (short)-18632;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] = 13947402377577931716ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_61 [i_0] = 5222985619379690871ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_65 [i_0] [i_1] [i_2] [i_3] [i_4] = -148783428;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_66 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 7061443318829277027ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_67 [i_0] [i_1] [i_2] [i_3] [i_4] = 8285635710658847998ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_69 [i_0] [i_1] [i_2] [i_3] = 9113088925148896804ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_72 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_77 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 13836930844348969478ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_81 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4904953133610103729ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_85 [i_0] [i_1] = 482003201913789493ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_86 [i_0] [i_1] [i_2] = (short)-26907;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_87 [i_0] = 892454848U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_88 [i_0] [i_1] [i_2] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_90 [i_0] [i_1] [i_2] [i_3] [i_4] = 3308914788U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_91 [i_0] [i_1] [i_2] [i_3] = 1805282228U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_96 [i_0] [i_1] [i_2] = 2168446906U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_100 [i_0] [i_1] [i_2] = 2083780476071978801ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_101 [i_0] = (short)47;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
