/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141005
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) var_9);
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            arr_15 [i_2] [i_2] = ((/* implicit */short) -1414515944);
                            arr_16 [i_1] [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3 - 2] [i_3 - 2])) ? (arr_0 [i_3 - 3] [i_3 - 3]) : (arr_10 [i_2])));
                            arr_17 [i_4] [i_2] [i_3] [i_3] [i_4] [i_1] = ((/* implicit */short) -694953734);
                        }
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
                        {
                            var_20 |= ((/* implicit */int) max((min((arr_7 [i_2 + 1] [i_0 - 1]), (arr_7 [i_2 - 1] [i_0 + 2]))), (((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_0 + 2])) ? (-1LL) : (((/* implicit */long long int) var_5))))));
                            arr_21 [i_2] [i_3] [i_0 + 1] [i_1] [i_2] = ((/* implicit */short) 480877295);
                            var_21 &= ((/* implicit */unsigned char) max((max((arr_4 [i_2 + 2] [i_0 + 1]), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_4 [i_2 + 2] [i_0 - 1])))))));
                        }
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                        {
                            arr_25 [i_0 + 1] [i_1] [i_1] [i_2] [i_6] [i_6] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0 + 1]))));
                            arr_26 [4ULL] [i_2] [i_1] [i_2] [i_2 - 1] [i_3 - 1] [i_6] = ((/* implicit */short) (((+(((/* implicit */int) (short)-20641)))) <= (((/* implicit */int) (unsigned short)255))));
                            arr_27 [i_0] [8] [2LL] [i_3] [i_2] [(short)1] [i_2] = ((/* implicit */long long int) ((((/* implicit */long long int) var_18)) < (arr_0 [i_0 - 1] [i_2 + 1])));
                            var_22 = ((/* implicit */long long int) ((((-382679739539818577LL) | (arr_14 [i_6] [i_6] [9LL] [i_6] [i_6]))) < (((/* implicit */long long int) (-(var_11))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) (-(arr_7 [i_7] [7LL])));
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                for (short i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    {
                        arr_39 [i_8] [i_8] [5LL] [4] = ((/* implicit */unsigned char) var_9);
                        arr_40 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (!((((-(382679739539818599LL))) != (((6422539029502677095LL) - (((/* implicit */long long int) arr_3 [i_7]))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_11 = 2; i_11 < 7; i_11 += 1) 
        {
            for (int i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                for (unsigned short i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    {
                        var_24 = ((/* implicit */short) 18400938669550546864ULL);
                        arr_47 [i_12] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((-382679739539818579LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)265)))))))) ? ((-(((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */int) var_1)))))) : (max((1508327671), (arr_6 [i_13])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            arr_52 [i_14] [i_11] [i_11] [4ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_49 [i_12] [i_11] [i_12] [i_11 + 3] [i_14] [i_11])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) : (((/* implicit */int) (unsigned char)0))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)17))))) ? (((/* implicit */int) ((unsigned char) (unsigned short)13989))) : (((int) (unsigned short)65535))));
                            var_26 += ((/* implicit */int) ((-1) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) (short)3584)))))));
                            arr_53 [i_11] [i_11] [0] [i_11] [i_7] = ((/* implicit */unsigned short) ((0) | (-1461389196)));
                            var_27 &= ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) 1765503580)) : (arr_50 [i_11 + 4] [i_11] [i_11 - 2]));
                        }
                        arr_54 [i_11] [i_11 + 4] [i_11 + 4] [i_11] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)24464)), (-275812735)))) ? (((var_15) | (((/* implicit */int) (unsigned char)231)))) : (((((/* implicit */int) (unsigned short)448)) | (((/* implicit */int) arr_8 [i_13] [i_11] [i_11] [3]))))))), (max((((((/* implicit */unsigned long long int) var_6)) ^ (13544216132821436806ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 193556186)) ? (var_3) : ((-2147483647 - 1)))))))));
                    }
                } 
            } 
        } 
        var_28 = arr_30 [i_7];
        /* LoopNest 3 */
        for (unsigned short i_15 = 1; i_15 < 10; i_15 += 3) 
        {
            for (int i_16 = 0; i_16 < 11; i_16 += 3) 
            {
                for (long long int i_17 = 1; i_17 < 10; i_17 += 1) 
                {
                    {
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) -382679739539818577LL))));
                        /* LoopSeq 3 */
                        for (long long int i_18 = 0; i_18 < 11; i_18 += 2) /* same iter space */
                        {
                            var_30 |= ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                            arr_64 [i_7] [i_15] [i_16] [i_17] [i_15] = (short)20640;
                            arr_65 [i_7] [0] [i_16] [i_15] [i_18] [i_18] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_15 + 1]))));
                        }
                        for (long long int i_19 = 0; i_19 < 11; i_19 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) -207288225)) ? (382679739539818566LL) : (((/* implicit */long long int) (~(var_11)))))) << (((/* implicit */int) ((((/* implicit */long long int) var_10)) < (-4495029156871251204LL)))))))));
                            var_32 = ((/* implicit */int) var_0);
                            arr_70 [i_15] [(short)7] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_1))) * (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                            var_33 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)24594))) % (-382679739539818577LL))) >> ((((((+(min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_57 [i_15] [i_15] [i_15] [i_15 - 1])))))) - (-9223372036854775791LL))) + (68LL)))));
                            arr_71 [i_7] [i_15] [i_15] [i_15] [i_17] [i_15] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) max((arr_66 [i_7] [4] [i_7] [i_7] [i_15]), (((/* implicit */long long int) arr_22 [i_7] [i_15 - 1] [i_16] [i_16]))))) ? (arr_44 [7LL] [i_15] [i_16] [i_15]) : (((/* implicit */int) (unsigned short)6141)))));
                        }
                        for (long long int i_20 = 0; i_20 < 11; i_20 += 2) /* same iter space */
                        {
                            var_34 &= ((/* implicit */unsigned short) 382679739539818599LL);
                            var_35 = ((((/* implicit */_Bool) ((((/* implicit */int) ((-2147483638) > (var_11)))) << (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)128))))))) ? (((0) / (((((/* implicit */_Bool) -9223372036854775794LL)) ? (((/* implicit */int) (short)-29824)) : (((/* implicit */int) arr_57 [i_7] [i_15] [i_17 + 1] [i_20])))))) : (((var_5) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3065))))))));
                            var_36 = ((/* implicit */unsigned long long int) arr_33 [i_15]);
                            var_37 = ((/* implicit */int) ((short) var_10));
                            arr_76 [i_15] [i_15 - 1] [i_16] [i_17 - 1] [i_20] = ((/* implicit */short) 1048064);
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 4) 
    {
        for (short i_22 = 0; i_22 < 15; i_22 += 2) 
        {
            {
                arr_81 [6LL] [6LL] [6LL] = ((/* implicit */short) (-(8659550036794683360LL)));
                /* LoopSeq 1 */
                for (long long int i_23 = 1; i_23 < 13; i_23 += 4) 
                {
                    arr_85 [i_23] [5LL] [i_22] [i_23] = arr_84 [i_21] [i_21] [i_21] [i_21];
                    /* LoopSeq 1 */
                    for (int i_24 = 0; i_24 < 15; i_24 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_25 = 0; i_25 < 15; i_25 += 1) 
                        {
                            var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_3), (min((var_6), (((/* implicit */int) var_0)))))))));
                            arr_92 [i_21] [i_22] [i_23] [14LL] [i_21] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (arr_90 [i_23] [i_22] [i_23] [i_24] [i_23] [i_24])))) ? (min((((/* implicit */long long int) var_0)), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)65527))))))), (max((min((-382679739539818599LL), (((/* implicit */long long int) -126898549)))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1790583796)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_84 [2] [i_23] [i_22] [(unsigned short)7])))))))));
                        }
                        arr_93 [i_21] [i_21] [i_23] [i_21] [i_21] = var_0;
                        var_39 = ((/* implicit */short) max(((~(8972500971790052509LL))), ((-((+(-2402705177277997417LL)))))));
                        var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((var_5) ^ (((/* implicit */int) var_7))))))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 15; i_26 += 1) 
                    {
                        for (unsigned long long int i_27 = 0; i_27 < 15; i_27 += 2) 
                        {
                            {
                                var_41 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1866332833)) ? (var_6) : (var_6)))))) ? (((((/* implicit */_Bool) max((2402705177277997415LL), (((/* implicit */long long int) (short)(-32767 - 1)))))) ? (((((/* implicit */int) var_2)) ^ (((/* implicit */int) (unsigned short)5049)))) : (((arr_77 [i_23 + 1] [9]) / (((/* implicit */int) var_12)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65517))))) ? (var_4) : (((int) var_8))))));
                                var_42 &= ((/* implicit */int) (unsigned short)14328);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_43 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min(((unsigned short)12), (((/* implicit */unsigned short) var_0))))) : (min((((/* implicit */int) var_0)), (-446068478)))))) ? (max((((/* implicit */unsigned long long int) max((1015808), (((/* implicit */int) (unsigned short)53636))))), (max((((/* implicit */unsigned long long int) 378478397)), (0ULL))))) : (((/* implicit */unsigned long long int) ((var_3) / (((((/* implicit */_Bool) 4495029156871251203LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)60487))))))));
}
