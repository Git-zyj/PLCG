/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101268
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_6 [i_0] [(short)18] [i_0] &= ((/* implicit */int) arr_2 [i_0]);
            /* LoopSeq 1 */
            for (short i_2 = 4; i_2 < 20; i_2 += 1) 
            {
                arr_10 [(short)0] [(short)0] &= ((/* implicit */unsigned short) (+(((unsigned long long int) var_4))));
                /* LoopSeq 3 */
                for (short i_3 = 4; i_3 < 19; i_3 += 1) 
                {
                    arr_15 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) arr_7 [i_0] [(unsigned short)10] [i_0] [i_3]))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_3 - 4] [i_3 - 4] [i_3 - 3] [(short)7] [i_2 - 1] [i_1])) ? (arr_7 [i_3 - 1] [i_1] [i_2 - 2] [i_2]) : (((((/* implicit */_Bool) arr_14 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_13 [(short)13] [i_1] [(short)13] [i_3 - 4]))))));
                }
                for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 3) 
                {
                    arr_19 [i_0] [i_0] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */short) (+(arr_7 [i_4] [i_2 - 2] [i_4 + 2] [i_2 - 2])));
                    arr_20 [i_1] [i_1] [i_2] [i_4 - 3] = ((/* implicit */short) var_12);
                    arr_21 [i_0] [i_0] [i_2] [20LL] [i_1] = ((/* implicit */short) ((unsigned short) (unsigned short)36388));
                }
                for (unsigned short i_5 = 4; i_5 < 20; i_5 += 1) 
                {
                    arr_24 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */long long int) arr_1 [i_1]);
                    arr_25 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) arr_18 [i_0] [i_1]);
                    arr_26 [i_1] [i_1] [i_2] [i_5 - 2] = ((/* implicit */short) var_1);
                    var_15 = ((/* implicit */long long int) (unsigned short)36379);
                    arr_27 [i_0] [(unsigned short)2] |= ((/* implicit */int) arr_9 [i_0] [i_1] [3ULL] [i_5 - 4]);
                }
                arr_28 [i_1] [(short)4] [i_2] = ((/* implicit */int) arr_23 [i_1] [i_2]);
                arr_29 [i_0] [i_1] [i_1] [i_0] = ((unsigned long long int) (unsigned short)23961);
            }
            var_16 = (+(((/* implicit */int) arr_0 [i_1])));
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            var_17 *= ((/* implicit */unsigned long long int) arr_23 [i_6] [i_6]);
            /* LoopSeq 1 */
            for (long long int i_7 = 2; i_7 < 19; i_7 += 1) 
            {
                arr_35 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_7 - 2] [i_7 - 1] [i_7 + 2] [i_7])) ? (arr_7 [i_7 + 1] [i_7 + 1] [17] [i_0]) : (arr_7 [i_7 + 2] [i_7 + 2] [i_0] [i_0])));
                arr_36 [i_0] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) var_7))))) < (arr_11 [i_0] [i_7 + 1] [i_0] [i_7 - 1])));
                var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (short)0)) > (arr_7 [i_0] [i_6] [i_7] [i_7]))))));
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_11))));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            /* LoopSeq 4 */
            for (short i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                arr_43 [i_8] [i_8] [(short)14] [(unsigned short)9] = ((/* implicit */long long int) ((-2057674992) - (((/* implicit */int) (unsigned short)29148))));
                arr_44 [i_8] = var_11;
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) -1455023796)) ? (arr_31 [i_0] [i_8]) : (var_2)));
            }
            for (int i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_40 [i_0] [i_8])))))));
                /* LoopSeq 3 */
                for (short i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    var_22 = ((/* implicit */unsigned long long int) ((1455023784) - (-384796515)));
                    arr_49 [i_8] [i_8] [i_10] [16] = (+(((/* implicit */int) var_12)));
                    arr_50 [i_0] [(unsigned short)18] [(unsigned short)18] [i_10] [i_8] = ((unsigned short) ((unsigned short) var_10));
                    var_23 += ((/* implicit */short) (((-(((/* implicit */int) (short)0)))) >= (((/* implicit */int) (unsigned short)18506))));
                }
                for (unsigned short i_12 = 2; i_12 < 19; i_12 += 1) 
                {
                    var_24 = ((((unsigned long long int) arr_0 [i_0])) * (((/* implicit */unsigned long long int) var_0)));
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (-1237202081)))) ? (((((/* implicit */_Bool) 2057674991)) ? (((/* implicit */unsigned long long int) -1931636956)) : (8091315957522416630ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_12 - 1] [i_12] [i_12] [i_12 + 2] [13LL] [i_12 - 1])))));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_42 [i_0] [i_8] [i_12 + 2])) : (arr_22 [(unsigned short)5] [(unsigned short)9] [(unsigned short)9] [i_0]))) : (var_10)));
                }
                for (long long int i_13 = 3; i_13 < 19; i_13 += 1) 
                {
                    var_27 -= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_9 [i_13] [i_10] [i_8] [i_0])) ? (var_2) : (((/* implicit */int) (unsigned short)52230))))));
                    arr_55 [i_0] [i_8] [(short)1] [i_8] [(unsigned short)13] [i_13] = ((/* implicit */int) ((12087755260225485663ULL) << (((12087755260225485663ULL) - (12087755260225485629ULL)))));
                    var_28 -= ((/* implicit */short) ((arr_22 [i_0] [i_0] [i_10] [i_13 + 1]) ^ (((/* implicit */long long int) arr_7 [i_8] [i_13 + 2] [i_13] [i_13]))));
                }
                /* LoopSeq 3 */
                for (long long int i_14 = 0; i_14 < 21; i_14 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned short) (+(var_2)));
                    var_30 = ((/* implicit */unsigned long long int) arr_13 [i_14] [i_10] [i_0] [i_0]);
                    arr_58 [(short)19] [i_8] [i_10] [i_14] [i_14] = ((/* implicit */long long int) (short)-10397);
                    var_31 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_34 [i_0] [(unsigned short)7])) : (((/* implicit */int) var_13))))));
                }
                for (long long int i_15 = 0; i_15 < 21; i_15 += 3) /* same iter space */
                {
                    var_32 ^= ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_53 [i_10] [5])) : (1073741823LL))) + (((/* implicit */long long int) ((((/* implicit */int) arr_34 [i_15] [i_10])) - (((/* implicit */int) arr_0 [i_0])))))));
                    /* LoopSeq 2 */
                    for (short i_16 = 0; i_16 < 21; i_16 += 3) 
                    {
                        arr_63 [i_0] [i_8] [i_10] [i_15] [i_16] = ((((/* implicit */_Bool) (short)217)) ? (((/* implicit */int) ((((/* implicit */int) (short)0)) > (((/* implicit */int) var_12))))) : ((~(-502663963))));
                        arr_64 [11] [i_8] [i_10] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) arr_54 [i_0]))));
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_48 [i_0] [i_8] [(short)6] [i_15] [(unsigned short)11] [i_8])) ? (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)-1))))) : (((((/* implicit */_Bool) (short)-20187)) ? (-3366179996631341201LL) : (((/* implicit */long long int) var_2))))));
                    }
                    for (short i_17 = 0; i_17 < 21; i_17 += 3) 
                    {
                        arr_67 [i_8] [i_8] = ((/* implicit */short) arr_11 [i_8] [i_10] [i_15] [i_17]);
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65072)) ? (((/* implicit */int) (short)-16552)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_23 [i_0] [i_0])) : (((int) arr_66 [10] [1] [i_10] [i_15] [(short)20]))));
                        var_36 = ((/* implicit */short) 1073741801LL);
                        var_37 = ((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) var_9))) | (-7232839524747638236LL)))));
                    }
                    var_38 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1073741828LL))))));
                    var_39 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                }
                for (long long int i_18 = 0; i_18 < 21; i_18 += 3) /* same iter space */
                {
                    var_40 = ((((/* implicit */_Bool) 1073741826LL)) ? ((~(((/* implicit */int) (short)-16035)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) -3222865066073619568LL))))));
                    arr_71 [i_0] [(short)20] [i_8] [i_10] [i_8] = ((/* implicit */unsigned short) -3222865066073619568LL);
                    arr_72 [i_0] [i_8] [i_10] [i_10] = ((/* implicit */int) (((!(((/* implicit */_Bool) 1073741798LL)))) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-8859517472224197158LL))) : (((((/* implicit */_Bool) arr_70 [(unsigned short)14] [i_10])) ? (-7709044735197591165LL) : (((/* implicit */long long int) var_1))))));
                    var_41 = (+(((/* implicit */int) arr_13 [i_18] [i_10] [i_8] [i_0])));
                }
            }
            for (short i_19 = 0; i_19 < 21; i_19 += 1) 
            {
                var_42 += arr_54 [i_0];
                var_43 = ((/* implicit */int) min((var_43), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1357276562)) ? (5751073408437553102ULL) : (((/* implicit */unsigned long long int) -411150613))))) ? (((((/* implicit */_Bool) var_11)) ? (arr_39 [i_0] [i_19]) : (var_2))) : (((/* implicit */int) arr_18 [i_0] [i_19]))))));
                var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_19] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 2047)) : (arr_33 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_53 [i_0] [i_8])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_54 [i_19])))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_13 [i_19] [i_8] [i_8] [i_0]))))));
                /* LoopSeq 3 */
                for (int i_20 = 0; i_20 < 21; i_20 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_21 = 0; i_21 < 21; i_21 += 1) 
                    {
                        arr_79 [i_21] [i_8] [i_20] [i_19] [20LL] [i_8] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_69 [i_21] [i_20])))) ? (arr_46 [i_0]) : ((+(((/* implicit */int) arr_57 [i_0] [i_8] [i_19]))))));
                        var_45 = ((/* implicit */unsigned short) ((-6113546534689035746LL) - (((/* implicit */long long int) (-(((/* implicit */int) arr_77 [i_0] [i_8] [i_19] [i_20] [(short)14])))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_22 = 2; i_22 < 17; i_22 += 1) 
                    {
                        var_46 = ((/* implicit */int) arr_0 [i_0]);
                        var_47 = ((/* implicit */long long int) arr_32 [i_0]);
                    }
                    for (short i_23 = 0; i_23 < 21; i_23 += 1) 
                    {
                        var_48 = ((/* implicit */long long int) ((int) (-(arr_9 [i_23] [i_20] [i_19] [i_0]))));
                        arr_86 [i_8] [i_8] [i_8] [17] [i_20] [i_23] = ((/* implicit */unsigned short) ((unsigned long long int) arr_2 [(short)1]));
                        arr_87 [i_23] [i_8] [i_19] [i_8] [i_0] = ((/* implicit */long long int) var_11);
                    }
                    for (unsigned short i_24 = 2; i_24 < 18; i_24 += 3) 
                    {
                        arr_91 [i_24 - 2] [(unsigned short)6] [i_19] [i_20] [i_24] [i_19] &= ((/* implicit */long long int) var_7);
                        arr_92 [i_0] [(short)12] [i_0] |= ((/* implicit */long long int) (short)-17803);
                    }
                    var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) (((!(((/* implicit */_Bool) -1237202077)))) || ((!(((/* implicit */_Bool) -324803498)))))))));
                    var_50 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) var_5)) <= (((/* implicit */int) arr_75 [(unsigned short)13] [9] [i_19] [3LL])))));
                }
                for (short i_25 = 3; i_25 < 18; i_25 += 1) 
                {
                    var_51 = ((short) var_9);
                    arr_97 [i_25 - 1] [i_8] [(unsigned short)2] [i_8] [i_0] = ((/* implicit */long long int) var_7);
                }
                for (int i_26 = 2; i_26 < 19; i_26 += 3) 
                {
                    arr_101 [i_26] [i_26 - 2] [i_8] [i_8] [i_0] [i_0] = ((/* implicit */unsigned short) 518401451);
                    arr_102 [i_8] [(unsigned short)9] = (-(((((/* implicit */int) var_9)) / (((/* implicit */int) arr_16 [i_26] [i_19] [(unsigned short)10] [i_0] [i_0] [i_0])))));
                }
            }
            for (short i_27 = 0; i_27 < 21; i_27 += 3) 
            {
                arr_105 [i_0] [i_8] [i_8] [i_27] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(arr_7 [i_0] [i_0] [i_27] [i_27])))) > (arr_32 [i_27])));
                var_52 &= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_98 [5] [i_8] [i_27] [i_0] [i_8] [i_0])))))));
                var_53 = ((((/* implicit */int) ((short) var_3))) + (((/* implicit */int) var_8)));
                /* LoopSeq 4 */
                for (unsigned short i_28 = 4; i_28 < 19; i_28 += 1) 
                {
                    var_54 = ((/* implicit */unsigned long long int) arr_61 [i_8] [i_8]);
                    arr_108 [i_8] [i_0] [i_8] [(short)6] [i_28] [i_8] = ((/* implicit */int) -1073741801LL);
                    arr_109 [i_8] [i_27] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_28] [10LL] [i_28 - 1] [i_8])) ? (arr_11 [i_28 - 2] [i_28] [i_28 - 3] [i_28]) : (arr_11 [i_28 + 2] [14ULL] [i_28 + 2] [i_27])));
                    var_55 ^= ((/* implicit */short) arr_90 [i_28 + 2] [i_27] [i_0] [i_0]);
                    var_56 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_28] [i_27] [i_0]))) : (7614755617916932116ULL)))));
                }
                for (unsigned short i_29 = 2; i_29 < 20; i_29 += 3) /* same iter space */
                {
                    arr_112 [(unsigned short)5] [i_8] [i_27] [i_8] [i_8] = ((/* implicit */short) arr_41 [(short)0] [(short)0] [(short)0]);
                    var_57 = ((/* implicit */unsigned long long int) ((7709044735197591165LL) << (((arr_59 [i_0] [i_8]) - (1109516653075305297ULL)))));
                    var_58 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (((/* implicit */int) arr_77 [i_29] [(short)1] [i_8] [i_8] [i_0]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)17826))))) : (((((/* implicit */_Bool) (unsigned short)64956)) ? (arr_9 [(short)14] [(short)14] [i_8] [i_0]) : (((/* implicit */unsigned long long int) 3975671847723759466LL))))));
                }
                for (unsigned short i_30 = 2; i_30 < 20; i_30 += 3) /* same iter space */
                {
                    var_59 = ((/* implicit */short) arr_110 [i_0] [i_0] [i_27] [i_30 - 1]);
                    var_60 = ((/* implicit */short) (~(arr_4 [i_30 - 2] [i_30 - 1])));
                }
                for (unsigned short i_31 = 2; i_31 < 20; i_31 += 3) /* same iter space */
                {
                    arr_118 [i_8] [i_8] = ((/* implicit */unsigned short) arr_47 [i_0] [i_8] [i_8] [18ULL] [i_31]);
                    var_61 = ((/* implicit */long long int) ((((/* implicit */_Bool) 643228234)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16))) : (3996644663877224399ULL)));
                    var_62 = ((/* implicit */unsigned short) arr_14 [i_27]);
                }
            }
            var_63 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned short)16))))));
        }
        arr_119 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 18446744073709551606ULL))));
        /* LoopNest 3 */
        for (short i_32 = 0; i_32 < 21; i_32 += 3) 
        {
            for (int i_33 = 1; i_33 < 20; i_33 += 1) 
            {
                for (short i_34 = 0; i_34 < 21; i_34 += 1) 
                {
                    {
                        var_64 = ((/* implicit */int) arr_47 [i_0] [9LL] [i_32] [i_33] [3LL]);
                        arr_130 [16ULL] [0ULL] [16LL] |= max((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) || (((((/* implicit */long long int) ((/* implicit */int) var_11))) == (arr_88 [i_34] [i_34] [i_33] [i_32] [i_0] [i_0])))))), (min(((~(arr_110 [i_0] [i_32] [i_33] [i_34]))), (((/* implicit */long long int) var_2)))));
                        arr_131 [i_33] [i_33] [(short)14] [i_34] = ((/* implicit */short) ((unsigned long long int) min((((long long int) arr_120 [i_0] [i_33])), (((/* implicit */long long int) 1931636936)))));
                    }
                } 
            } 
        } 
    }
    var_65 = ((/* implicit */long long int) var_1);
    var_66 = ((/* implicit */unsigned short) var_7);
}
