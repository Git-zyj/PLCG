/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171876
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
    var_18 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */_Bool) (-(18446744073709551615ULL)))) ? (min((0ULL), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)19655), ((unsigned short)65529)))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((signed char) var_15));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) var_5);
        arr_5 [i_0] = ((/* implicit */int) 536870912LL);
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((short) (unsigned short)19655))), (((unsigned short) arr_6 [i_1]))))) ? (((((/* implicit */_Bool) ((long long int) arr_8 [i_1]))) ? (max((((/* implicit */long long int) (unsigned short)65503)), (arr_8 [(unsigned char)6]))) : (((/* implicit */long long int) arr_7 [13LL] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */int) arr_6 [i_1])))) == (((/* implicit */int) (short)-15321))))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 3; i_2 < 12; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                for (signed char i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            arr_19 [i_5] [i_4] [i_3] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [(unsigned short)5] [(unsigned char)6] [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6))))) : (((((/* implicit */int) (unsigned short)46979)) | (((/* implicit */int) var_14))))));
                            arr_20 [(unsigned short)14] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2639148376666919246ULL)) ? (max((18446744073709551600ULL), (((/* implicit */unsigned long long int) (unsigned short)6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) -7518002336972189764LL))))))));
                            arr_21 [i_1] [i_1] [i_2] [i_2] [i_3] [(unsigned char)12] [i_5] = ((/* implicit */unsigned char) ((signed char) 18446744073709551598ULL));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4] [i_4 + 2] [i_4] [i_4])) ? (arr_12 [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) | (arr_11 [i_1] [i_1] [i_1] [i_6]))))));
                            arr_24 [i_1] [(unsigned char)9] [i_1] [i_4] [i_6] = ((/* implicit */unsigned short) var_9);
                        }
                        arr_25 [(short)5] = ((/* implicit */short) var_5);
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_14 [i_1] [(unsigned short)9] [i_1]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_7 = 3; i_7 < 13; i_7 += 3) 
        {
            arr_29 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))), (17097821946817383831ULL)))) ? (((((long long int) var_4)) - (((/* implicit */long long int) ((/* implicit */int) max((var_13), (var_16))))))) : (((/* implicit */long long int) arr_7 [i_7 + 1] [i_1]))));
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                for (long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    {
                        arr_35 [(signed char)14] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43561))) : (4294967295U)))) ? (((((/* implicit */_Bool) var_2)) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15242))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [12LL]))))))))));
                        arr_36 [i_7] [i_7] [i_9] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */int) arr_23 [i_9] [i_7] [i_7] [i_1])) : (((/* implicit */int) (unsigned char)29))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6)))) : ((~(18446744073709551605ULL))))), (min((((/* implicit */unsigned long long int) (unsigned char)10)), (arr_12 [i_1] [i_7] [i_8] [7ULL])))));
                        arr_37 [10LL] [i_7] [i_7] [i_7] [i_7] [10LL] = ((/* implicit */long long int) var_2);
                        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)21953))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2870204258U)) ? (((/* implicit */int) (unsigned short)45052)) : (((/* implicit */int) (signed char)-70))))) : (230853382516300356LL))) <= (min((((((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) - (-9223372036854775806LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)224)) == (((/* implicit */int) (signed char)92)))))))));
                        var_23 = ((/* implicit */unsigned char) arr_33 [i_9] [13LL] [i_8] [i_7 - 3]);
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) min((230853382516300348LL), (-5602323883352657449LL))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_10 = 3; i_10 < 14; i_10 += 2) 
            {
                var_25 = ((/* implicit */signed char) (unsigned char)8);
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    arr_43 [i_1] [i_7] [i_7] [i_11] = ((/* implicit */int) ((unsigned short) arr_18 [i_10 - 1] [i_7] [i_10] [11ULL] [i_10]));
                    var_26 = ((/* implicit */int) (short)-3031);
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)105))));
                        arr_48 [i_7] = arr_44 [i_1] [i_10] [i_12];
                        arr_49 [i_7] [i_12] [(unsigned short)5] [13LL] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_45 [i_7] [6U] [6U] [i_7 - 3] [i_7 - 3] [i_10 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_45 [i_7] [i_7] [i_10] [i_7 + 1] [12ULL] [i_7])));
                        var_28 = ((/* implicit */unsigned short) (-2147483647 - 1));
                    }
                }
                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [3] [i_7 - 2] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_1] [i_7 + 2] [i_7]))) : (9223372036854775807LL)));
            }
            /* vectorizable */
            for (signed char i_13 = 0; i_13 < 15; i_13 += 3) 
            {
                var_30 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_44 [i_7 - 1] [i_7 - 2] [i_7 + 1])) | (var_0)));
                var_31 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_47 [i_7 - 1] [i_7 - 2] [i_7 - 3] [i_7 + 2] [i_7]))));
            }
            arr_54 [i_7] = ((/* implicit */int) arr_10 [(unsigned char)1] [i_1] [i_1]);
        }
        /* vectorizable */
        for (signed char i_14 = 0; i_14 < 15; i_14 += 4) 
        {
            arr_57 [i_14] [(unsigned char)1] = 536346624U;
            arr_58 [(unsigned short)6] [i_14] [6LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8855759232061811432LL)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) arr_51 [i_14] [i_14] [(unsigned short)0] [i_14]))));
            arr_59 [(unsigned short)1] [i_14] = ((/* implicit */unsigned char) (+(8362747960283135823ULL)));
            var_32 = ((/* implicit */long long int) arr_26 [i_14] [(signed char)2]);
        }
        /* vectorizable */
        for (signed char i_15 = 0; i_15 < 15; i_15 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_16 = 0; i_16 < 15; i_16 += 4) 
            {
                arr_65 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_1] [i_15] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [(unsigned char)12]))) : (-1274769541289577450LL)));
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 15; i_17 += 4) 
                {
                    for (signed char i_18 = 0; i_18 < 15; i_18 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned short) arr_70 [i_1] [i_1] [i_1] [i_1] [i_1]);
                            arr_72 [i_1] [i_1] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned short)17530))))));
                            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (~(arr_70 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */long long int) ((unsigned char) -9223372036854775797LL));
                var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) var_8))));
            }
            for (short i_19 = 0; i_19 < 15; i_19 += 3) 
            {
                var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) (~(((/* implicit */int) var_2)))))));
                var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) (~(((((/* implicit */int) arr_9 [i_19])) + (((/* implicit */int) (unsigned char)255)))))))));
                var_39 = ((/* implicit */unsigned short) ((unsigned long long int) arr_17 [14U] [i_15] [i_15] [i_19] [14U] [i_19]));
            }
            for (unsigned short i_20 = 0; i_20 < 15; i_20 += 1) 
            {
                var_40 = ((/* implicit */int) max((var_40), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_30 [i_1] [i_15] [i_1])) : (arr_52 [i_1])))));
                arr_78 [i_1] [(unsigned short)4] [4ULL] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_1] [i_1] [i_20])) ? (((/* implicit */int) var_16)) : (-1367574620)));
            }
            for (long long int i_21 = 3; i_21 < 11; i_21 += 2) 
            {
                var_41 = ((/* implicit */unsigned long long int) ((unsigned char) var_11));
                var_42 *= ((/* implicit */short) (~(-1281497211)));
                /* LoopSeq 3 */
                for (unsigned char i_22 = 0; i_22 < 15; i_22 += 3) 
                {
                    var_43 = ((/* implicit */unsigned char) min((var_43), (((unsigned char) -21LL))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_23 = 0; i_23 < 15; i_23 += 4) 
                    {
                        arr_86 [i_1] [i_1] [i_1] [i_1] [i_21] [i_1] [i_1] = ((/* implicit */signed char) arr_53 [i_1] [i_21 + 2] [i_21]);
                        arr_87 [i_21] [(signed char)2] [i_1] [i_15] [12] [i_1] [i_21] = ((/* implicit */short) (unsigned short)33542);
                    }
                    for (long long int i_24 = 0; i_24 < 15; i_24 += 4) 
                    {
                        arr_92 [(signed char)7] [i_15] [i_21] [i_22] [i_1] = (+(var_10));
                        var_44 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_30 [i_21 + 3] [i_21 + 3] [i_24]))));
                        arr_93 [(unsigned short)14] [i_22] [i_1] [i_22] [i_22] [i_22] &= ((/* implicit */long long int) (+(((((/* implicit */int) (unsigned char)169)) - (((/* implicit */int) (unsigned char)189))))));
                        arr_94 [i_1] [i_21] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_88 [13ULL] [i_21] [i_15] [i_15] [i_21] [i_21] [13ULL])) ? (994303806) : (1040187392)))));
                        var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) ((arr_28 [i_21 - 3]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_79 [i_1]))))))));
                    }
                    for (short i_25 = 0; i_25 < 15; i_25 += 4) 
                    {
                        var_46 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)33932)) | (((/* implicit */int) (signed char)107))));
                        var_47 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_89 [i_1] [i_15] [i_21] [i_22] [i_21])) + (2147483647))) << (((((((/* implicit */int) (unsigned char)50)) | (((/* implicit */int) var_13)))) - (59)))));
                    }
                    for (unsigned char i_26 = 0; i_26 < 15; i_26 += 2) 
                    {
                        var_48 = ((/* implicit */unsigned short) (-(arr_82 [i_1] [i_15] [i_21] [i_21 + 2])));
                        var_49 = var_9;
                    }
                }
                for (short i_27 = 0; i_27 < 15; i_27 += 4) 
                {
                    arr_102 [i_1] [i_1] [i_21] [i_21] = ((/* implicit */unsigned char) arr_85 [i_1] [i_15] [i_21] [i_27] [(short)5] [i_1] [i_21]);
                    var_50 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((1437442801) - (502468032)))) ? (-9223372036854775788LL) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)59525)))))));
                }
                for (int i_28 = 0; i_28 < 15; i_28 += 4) 
                {
                    var_51 = ((/* implicit */_Bool) (-(((int) (signed char)121))));
                    var_52 = ((((/* implicit */long long int) ((/* implicit */int) var_8))) | (((((/* implicit */_Bool) arr_26 [i_21] [i_21])) ? (-6341315027349421036LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1] [7LL] [i_21 - 2] [(signed char)5]))))));
                    arr_107 [i_21] [i_21] [i_21] [i_28] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)18091)) || (((/* implicit */_Bool) (unsigned char)0)))))));
                }
                var_53 = ((/* implicit */signed char) (+(arr_99 [i_21] [i_21] [i_21])));
            }
            var_54 = ((/* implicit */unsigned short) ((unsigned char) arr_13 [i_1] [i_1] [i_1] [i_1]));
        }
    }
    for (unsigned int i_29 = 0; i_29 < 19; i_29 += 4) 
    {
        arr_111 [(short)1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) 4450950596093744330LL)) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) (unsigned short)55768)))));
        arr_112 [i_29] [i_29] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_108 [i_29] [i_29])))) * (((/* implicit */int) arr_108 [i_29] [i_29]))));
        var_55 = (((!(((/* implicit */_Bool) arr_109 [i_29] [i_29])))) ? (arr_110 [i_29]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 8331652337423762208LL)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (arr_109 [(signed char)3] [(signed char)3])))))));
    }
}
