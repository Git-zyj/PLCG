/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128976
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_17 *= ((short) (unsigned short)43937);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            arr_7 [i_0 - 1] [i_1] [i_1 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_5 [i_1] [i_0] [i_0]))) ? (70368744177536ULL) : (arr_3 [i_0 + 1])));
            var_18 = ((((/* implicit */int) (unsigned short)65521)) << (((((((/* implicit */int) (signed char)-125)) + (151))) - (15))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)124)) & (-1772259345)));
            /* LoopSeq 2 */
            for (long long int i_3 = 2; i_3 < 12; i_3 += 4) 
            {
                var_20 = ((/* implicit */unsigned char) ((long long int) (unsigned short)17844));
                arr_13 [(short)9] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-3937))));
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 10; i_4 += 3) 
                {
                    for (short i_5 = 4; i_5 < 10; i_5 += 4) 
                    {
                        {
                            arr_18 [i_0] [i_2 - 1] [(unsigned char)12] [i_4] [i_5 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1])) ? (-11LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248)))));
                            arr_19 [i_2 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11700136895295823010ULL)) ? (var_6) : (((/* implicit */int) var_4))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_2 + 2])) ? (arr_15 [i_5] [i_4 - 1] [i_3 - 1] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-1))))))));
                        }
                    } 
                } 
                arr_20 [i_0 + 1] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-21257)) ? (((/* implicit */int) (unsigned short)1480)) : (((/* implicit */int) (unsigned short)1215))));
            }
            for (short i_6 = 1; i_6 < 12; i_6 += 3) 
            {
                var_22 = ((/* implicit */long long int) (~(895883571)));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 3; i_7 < 12; i_7 += 1) 
                {
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((unsigned char) var_10))));
                    var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)1974)) ? (((((/* implicit */int) (unsigned short)16162)) / (((/* implicit */int) (unsigned short)64331)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
                    arr_25 [i_7] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_7 - 3] [(unsigned char)4] [i_7 - 3] [i_7 - 3] [i_7 - 2] [i_7] [9]))) : (arr_2 [i_0 + 1])));
                    /* LoopSeq 1 */
                    for (int i_8 = 3; i_8 < 11; i_8 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), ((+(13950153777495596367ULL)))));
                        var_26 = ((/* implicit */signed char) 11LL);
                        var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_8] [i_2] [i_6 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_11 [i_6 - 1] [i_6 - 1] [i_0]))));
                        arr_29 [i_0] [i_0] [i_0] [i_7] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)19065))))) ? (((((/* implicit */_Bool) 18446673704965374079ULL)) ? (70368744177536ULL) : (((/* implicit */unsigned long long int) -27LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-25734)) ? (((/* implicit */long long int) var_3)) : (var_5))))));
                        arr_30 [i_0 + 1] [i_7] [i_6 + 1] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_0] [i_7] [i_0] [i_0 + 1] [(short)12] [i_6 + 1])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_7] [i_6 - 1] [i_0 + 1] [i_8] [i_0 + 1])))));
                    }
                }
            }
            arr_31 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (-2147483635)));
        }
        var_28 = ((/* implicit */unsigned long long int) ((1447508882) | (((/* implicit */int) arr_0 [i_0 - 1]))));
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11960931437801178978ULL)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (short)-28556)))))));
        /* LoopSeq 1 */
        for (int i_9 = 2; i_9 < 12; i_9 += 2) 
        {
            var_30 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_9] [i_9] [i_9] [i_0] [i_9] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_9] [i_0 + 1] [i_0] [i_9] [i_0 - 1]))) : (var_5)));
            var_31 = ((/* implicit */signed char) (~(((/* implicit */int) (short)18969))));
        }
    }
    for (int i_10 = 1; i_10 < 20; i_10 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_11 = 1; i_11 < 20; i_11 += 3) 
        {
            for (signed char i_12 = 3; i_12 < 18; i_12 += 3) 
            {
                {
                    var_32 = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_42 [i_11] [i_12 + 1] [i_11])) : (var_13))), ((~(((/* implicit */int) arr_42 [(unsigned char)20] [i_12 + 1] [i_12]))))));
                    arr_44 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_40 [i_10 - 1] [i_11 - 1])), (((((/* implicit */_Bool) (unsigned char)0)) ? (5727912455647489759ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43939)) ? (13283420353621786510ULL) : (((/* implicit */unsigned long long int) -9072449683967247621LL))))))))) : (max((((/* implicit */unsigned long long int) ((unsigned short) var_16))), (var_15)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_13 = 2; i_13 < 19; i_13 += 1) /* same iter space */
                    {
                        arr_48 [i_10] [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_10] = ((/* implicit */unsigned long long int) ((-400349467) - (((/* implicit */int) (short)32767))));
                        var_33 ^= ((/* implicit */int) ((15099648723707753452ULL) <= (((/* implicit */unsigned long long int) var_0))));
                    }
                    for (unsigned long long int i_14 = 2; i_14 < 19; i_14 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_15 = 3; i_15 < 20; i_15 += 4) 
                        {
                            arr_55 [i_10] [i_10] [i_11 + 1] [i_12] [i_14] [i_15] = arr_47 [i_15] [i_14] [i_12] [i_11] [i_11] [(short)19];
                            arr_56 [(unsigned char)1] [i_11] [i_10] [(unsigned char)1] [(unsigned char)1] = arr_36 [i_10];
                            arr_57 [i_15] [i_14 - 2] [i_10] [i_10] [i_10] = ((/* implicit */signed char) (~(var_0)));
                            arr_58 [(short)12] [12] [i_10] [i_11] [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) (short)11768)))) + (((((/* implicit */int) (unsigned char)226)) | (((/* implicit */int) (unsigned char)182))))));
                        }
                        for (long long int i_16 = 2; i_16 < 18; i_16 += 2) 
                        {
                            var_34 = ((((/* implicit */_Bool) ((unsigned char) (unsigned short)43939))) ? (min((1479980487), (((/* implicit */int) (short)32767)))) : (((/* implicit */int) var_2)));
                            arr_61 [i_10] [i_11] [(unsigned char)11] [i_14] [i_11] = ((/* implicit */unsigned short) ((((var_5) + (var_5))) << (((((((/* implicit */int) arr_60 [i_10 + 1] [i_11] [i_12] [i_14 - 1])) | (((/* implicit */int) arr_60 [i_10] [i_11 - 1] [i_12] [(short)7])))) - (26)))));
                            arr_62 [i_10] [i_14 - 2] [i_12] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_11)) ? (9223372036854775800LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)181))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_52 [i_10 + 2] [i_11 + 2] [i_12 - 1]))))) : (((((/* implicit */_Bool) 654857104)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-65)) ? (1958955399) : (((/* implicit */int) (unsigned char)255))))) : (arr_53 [i_10 + 1] [i_12] [i_12 + 1] [i_10] [i_14 - 1])))));
                        }
                        arr_63 [i_10] [i_11] [i_11] [i_11] = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_8)), (arr_43 [i_10 - 1] [i_11 + 1] [i_12] [i_10 - 1])))) ? (((/* implicit */int) arr_43 [(short)3] [(short)7] [1ULL] [i_14 + 2])) : (((/* implicit */int) arr_43 [i_10 + 2] [i_11] [(unsigned char)17] [13])));
                        /* LoopSeq 2 */
                        for (unsigned short i_17 = 3; i_17 < 20; i_17 += 3) /* same iter space */
                        {
                            arr_67 [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10] = ((/* implicit */unsigned char) ((((2018033207) | (-1178368018))) | (((((/* implicit */_Bool) (unsigned short)19592)) ? (((/* implicit */int) arr_64 [i_10] [i_14 - 1] [i_12 - 1] [i_14 - 1] [i_10])) : (((/* implicit */int) (unsigned short)6918))))));
                            arr_68 [i_17 + 1] [i_10] [i_12 - 3] [i_10] [i_10] = ((/* implicit */short) ((int) (~(((/* implicit */int) var_1)))));
                        }
                        /* vectorizable */
                        for (unsigned short i_18 = 3; i_18 < 20; i_18 += 3) /* same iter space */
                        {
                            var_35 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)14)) : (((1178368018) & (var_13)))));
                            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)120)))))));
                            arr_72 [i_10] [i_11] [i_12] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) -1178368018)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_11] [i_11] [i_14] [i_14] [i_14] [i_14 - 2]))) : (var_9)));
                            arr_73 [i_10 - 1] [i_10] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-27736)) : (((/* implicit */int) arr_39 [i_18 + 2] [i_18 + 1] [i_18 + 1]))));
                        }
                    }
                }
            } 
        } 
        arr_74 [i_10] = ((/* implicit */unsigned short) max((min((max((var_13), (((/* implicit */int) (signed char)-87)))), (((/* implicit */int) (signed char)11)))), ((+((+(((/* implicit */int) (short)28360))))))));
        arr_75 [i_10] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 5262756774485969933LL)) ? (((/* implicit */int) arr_50 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1])) : (((/* implicit */int) (unsigned char)0)))));
    }
    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)22152)) == (((/* implicit */int) (short)-21061)))) ? (((int) 13797983481842124428ULL)) : (((((/* implicit */_Bool) (unsigned short)21024)) ? (((/* implicit */int) (short)32761)) : (((/* implicit */int) var_10))))))) ? (((((/* implicit */int) (unsigned short)19584)) + (((/* implicit */int) (signed char)77)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)45952)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_14)) ? (var_3) : (var_3))) : (((/* implicit */int) var_10))))));
    var_38 = ((/* implicit */short) ((((/* implicit */int) (short)-8969)) == (var_3)));
    var_39 = ((/* implicit */short) min((var_39), ((short)-4414)));
}
