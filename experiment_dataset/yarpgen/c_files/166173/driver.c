#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)73;
unsigned short var_2 = (unsigned short)40272;
unsigned long long int var_3 = 9109303734650060132ULL;
unsigned long long int var_4 = 10375269342183870996ULL;
unsigned short var_5 = (unsigned short)23390;
unsigned long long int var_6 = 13915535244701017754ULL;
unsigned short var_7 = (unsigned short)41124;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)18961;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 964819580608413033ULL;
unsigned short var_13 = (unsigned short)6917;
unsigned short var_14 = (unsigned short)63675;
unsigned short var_15 = (unsigned short)60979;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 18339017070453920237ULL;
long long int var_20 = -5389288559415959227LL;
unsigned char var_21 = (unsigned char)181;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)45958;
unsigned char var_24 = (unsigned char)107;
long long int var_25 = 6603543299145113954LL;
unsigned char var_26 = (unsigned char)182;
unsigned short var_27 = (unsigned short)23676;
_Bool var_28 = (_Bool)1;
unsigned short var_29 = (unsigned short)26318;
unsigned char var_30 = (unsigned char)229;
unsigned short var_31 = (unsigned short)866;
_Bool var_32 = (_Bool)1;
_Bool var_33 = (_Bool)1;
unsigned long long int var_34 = 8121589014752887385ULL;
_Bool var_35 = (_Bool)1;
unsigned long long int var_36 = 13176950930619885094ULL;
_Bool var_37 = (_Bool)0;
unsigned char var_38 = (unsigned char)108;
unsigned long long int var_39 = 9221221159074955429ULL;
unsigned short var_40 = (unsigned short)2969;
unsigned short var_41 = (unsigned short)24413;
long long int var_42 = -1421546425494924940LL;
long long int var_43 = 766172673087354603LL;
_Bool var_44 = (_Bool)1;
unsigned short var_45 = (unsigned short)64319;
unsigned char var_46 = (unsigned char)12;
unsigned short var_47 = (unsigned short)56373;
unsigned long long int var_48 = 12012081294308554678ULL;
unsigned short var_49 = (unsigned short)30477;
_Bool var_50 = (_Bool)0;
unsigned long long int var_51 = 14404209319212491644ULL;
unsigned long long int var_52 = 12347076588851282475ULL;
long long int var_53 = -7327513634785007740LL;
unsigned long long int var_54 = 6631927048504912181ULL;
unsigned char var_55 = (unsigned char)89;
unsigned char var_56 = (unsigned char)103;
unsigned short var_57 = (unsigned short)58643;
unsigned char var_58 = (unsigned char)2;
_Bool var_59 = (_Bool)1;
_Bool var_60 = (_Bool)1;
unsigned short var_61 = (unsigned short)43521;
_Bool var_62 = (_Bool)1;
unsigned short var_63 = (unsigned short)15572;
unsigned short var_64 = (unsigned short)34384;
_Bool var_65 = (_Bool)1;
_Bool var_66 = (_Bool)0;
unsigned long long int var_67 = 14071993447176003835ULL;
unsigned char var_68 = (unsigned char)183;
unsigned char var_69 = (unsigned char)148;
_Bool var_70 = (_Bool)1;
unsigned char var_71 = (unsigned char)16;
unsigned short var_72 = (unsigned short)28728;
long long int var_73 = -6445621192888441112LL;
unsigned long long int var_74 = 11973594362809705683ULL;
unsigned long long int var_75 = 292774053139797394ULL;
unsigned char var_76 = (unsigned char)223;
_Bool var_77 = (_Bool)1;
unsigned char var_78 = (unsigned char)123;
_Bool var_79 = (_Bool)1;
_Bool var_80 = (_Bool)0;
unsigned short var_81 = (unsigned short)55804;
unsigned long long int arr_1 [17] [17] ;
unsigned short arr_2 [17] ;
unsigned char arr_3 [17] [17] ;
long long int arr_4 [17] [17] ;
_Bool arr_5 [17] [17] ;
unsigned short arr_6 [17] [17] [17] ;
_Bool arr_8 [17] [17] ;
_Bool arr_10 [17] ;
unsigned char arr_11 [17] [17] [17] [17] [17] ;
unsigned char arr_13 [17] [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_16 [17] ;
unsigned char arr_18 [17] [17] [17] [17] ;
_Bool arr_33 [17] [17] [17] [17] [17] ;
_Bool arr_35 [17] [17] [17] ;
unsigned long long int arr_41 [22] ;
unsigned char arr_42 [22] ;
unsigned short arr_43 [18] ;
_Bool arr_44 [18] ;
_Bool arr_45 [18] [18] [18] ;
unsigned short arr_46 [18] [18] [18] ;
unsigned short arr_47 [18] ;
unsigned char arr_49 [18] [18] [18] ;
_Bool arr_50 [18] [18] ;
long long int arr_51 [18] [18] ;
unsigned long long int arr_52 [18] [18] [18] [18] ;
unsigned long long int arr_53 [18] [18] [18] [18] [18] [18] [18] ;
unsigned char arr_54 [18] [18] [18] [18] [18] ;
_Bool arr_55 [18] [18] [18] ;
unsigned char arr_56 [18] [18] [18] [18] [18] ;
_Bool arr_57 [18] [18] [18] [18] [18] ;
unsigned long long int arr_58 [18] [18] [18] [18] [18] [18] [18] ;
unsigned short arr_59 [18] [18] [18] [18] [18] [18] ;
_Bool arr_61 [18] [18] ;
long long int arr_62 [18] [18] [18] [18] [18] [18] ;
_Bool arr_64 [18] [18] [18] [18] [18] [18] [18] ;
unsigned long long int arr_65 [18] [18] [18] [18] [18] ;
unsigned long long int arr_66 [18] [18] [18] [18] [18] ;
unsigned short arr_68 [18] [18] [18] [18] ;
unsigned short arr_69 [18] [18] [18] [18] [18] ;
_Bool arr_71 [18] [18] [18] [18] [18] ;
unsigned short arr_74 [18] [18] [18] [18] [18] ;
unsigned short arr_78 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 10245197294947744542ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)35382;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)3 : (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 1537925203334015036LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)13513;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned char)122 : (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = 4822096272736988771ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_41 [i_0] = 8031818527856540820ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_42 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_43 [i_0] = (unsigned short)19446;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_44 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (unsigned short)19264;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_47 [i_0] = (i_0 % 2 == 0) ? (unsigned short)24000 : (unsigned short)62917;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)144 : (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_50 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_51 [i_0] [i_1] = -378410474019626901LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = 11836661613758361731ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 7488541545795032012ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned char)210 : (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)46 : (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_58 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 10780209169687720469ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)37131;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_61 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_62 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 8491989184556221727LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_64 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_65 [i_0] [i_1] [i_2] [i_3] [i_4] = 1302187565948780392ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_66 [i_0] [i_1] [i_2] [i_3] [i_4] = 9901033750483194052ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_68 [i_0] [i_1] [i_2] [i_3] = (unsigned short)44153;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_69 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned short)61922 : (unsigned short)50966;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_71 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_74 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)46124 : (unsigned short)29558;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_78 [i_0] [i_1] = (unsigned short)14157;
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
    hash(&seed, var_76);
    hash(&seed, var_77);
    hash(&seed, var_78);
    hash(&seed, var_79);
    hash(&seed, var_80);
    hash(&seed, var_81);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
