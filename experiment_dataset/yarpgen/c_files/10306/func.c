/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10306
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
    var_18 = ((/* implicit */long long int) var_16);
    var_19 &= var_3;
    var_20 = ((/* implicit */int) max((((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_14)))))))), (((/* implicit */long long int) var_14))));
    var_21 = ((/* implicit */short) ((min((2199019061248LL), ((-9223372036854775807LL - 1LL)))) < (((/* implicit */long long int) ((((/* implicit */int) (short)-29844)) ^ (((/* implicit */int) max(((short)-32767), (var_0)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_1 - 1] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (var_13))))))), (var_7)));
                arr_7 [i_0] [i_0] = min((((/* implicit */long long int) (~(((/* implicit */int) var_0))))), (((((/* implicit */long long int) ((/* implicit */int) (short)2))) - (-1LL))));
                arr_8 [i_0] = min((((/* implicit */long long int) var_0)), (var_10));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_3] [i_2] [i_3] [i_1] [i_3] = var_11;
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) (-(var_5)))) | (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) & (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_8)))));
                                arr_19 [(short)4] [(short)4] [i_3] = var_12;
                                arr_20 [i_0] [(short)11] [(short)16] [i_3] [i_3] [i_2] [i_2] = ((/* implicit */long long int) var_6);
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] |= ((/* implicit */short) var_10);
                            }
                        } 
                    } 
                    arr_22 [i_0] = ((/* implicit */long long int) var_15);
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (short i_6 = 1; i_6 < 17; i_6 += 1) 
                        {
                            {
                                arr_27 [i_0] [i_6] [i_1 - 1] [i_6] [i_0] = ((/* implicit */short) var_10);
                                arr_28 [i_6] [i_6] [i_0] = max((((/* implicit */long long int) var_12)), (((((/* implicit */long long int) ((/* implicit */int) var_17))) & (var_10))));
                                arr_29 [i_0] [i_6] [i_0] = ((/* implicit */short) ((288230376151711744LL) ^ (((/* implicit */long long int) var_5))));
                                arr_30 [i_0] [i_0] [18] [i_0] [i_5] [10] [i_6] = ((/* implicit */int) var_17);
                            }
                        } 
                    } 
                    arr_31 [(short)9] [i_1] [13] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) -288230376151711745LL)) ? (((/* implicit */int) (short)-5)) : (-21276785))));
                    /* LoopSeq 4 */
                    for (short i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        arr_35 [i_1 - 2] [i_2] [i_1 - 2] [i_0] = ((/* implicit */long long int) var_9);
                        arr_36 [i_1] &= var_0;
                        arr_37 [i_0] [i_0] [i_1] [i_0] [(short)9] [(short)17] &= (-(((/* implicit */int) var_6)));
                        arr_38 [i_0] [i_1] [i_2] [i_7] = var_2;
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        arr_42 [i_0] [i_0] [i_2] [i_2] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_3))));
                        /* LoopSeq 2 */
                        for (short i_9 = 0; i_9 < 19; i_9 += 3) 
                        {
                            arr_47 [i_0] [i_8] [i_0] = var_16;
                            arr_48 [i_0] [i_0] [i_0] [18LL] [i_0] [(short)6] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_17))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                            arr_49 [i_0] [i_1] [i_8] [i_1] [i_9] = ((/* implicit */short) ((var_5) > (((/* implicit */int) var_3))));
                            arr_50 [i_0] [1LL] [i_2] [i_8] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))));
                        }
                        for (int i_10 = 0; i_10 < 19; i_10 += 4) 
                        {
                            arr_54 [i_0] [i_2] [i_1] [i_2] [i_8] [i_8] = ((/* implicit */short) var_5);
                            arr_55 [i_8] [i_2] [i_8] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_17))) + (var_1)));
                            arr_56 [(short)6] [i_10] [i_8] [i_8] &= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_16)) : (var_5)));
                            arr_57 [14] [i_2] [14] [14] [i_2] &= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_14))) <= (((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                        }
                        arr_58 [i_2] = ((/* implicit */short) var_10);
                        arr_59 [i_0] [i_8] [i_2] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? (var_1) : (((/* implicit */long long int) var_5))));
                        /* LoopSeq 1 */
                        for (long long int i_11 = 1; i_11 < 17; i_11 += 2) 
                        {
                            arr_64 [i_0] [i_8] [i_2] [i_2] [i_11 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) || (((((/* implicit */int) var_2)) > (var_5)))));
                            arr_65 [i_0] [i_0] [i_8] [i_0] [i_8] [i_8] = (((-(var_1))) & (((/* implicit */long long int) var_15)));
                        }
                    }
                    for (long long int i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_13 = 0; i_13 < 19; i_13 += 1) 
                        {
                            arr_72 [i_12] [i_1 - 1] [2LL] [i_12] [i_13] = ((/* implicit */short) ((var_5) / (var_5)));
                            arr_73 [i_0] [i_2] [i_2] [(short)0] [0] [i_0] = (~((~(288230376151711744LL))));
                            arr_74 [i_1] [i_1] = ((/* implicit */short) var_1);
                        }
                        for (short i_14 = 2; i_14 < 17; i_14 += 1) 
                        {
                            arr_77 [i_1] [i_1 + 1] [i_2] [i_1 + 1] [i_1] [i_1 + 1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_13), (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? ((~(var_13))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_17))))))) : ((~(((((/* implicit */_Bool) (-2147483647 - 1))) ? (4655794950070344942LL) : (288230376151711730LL)))))));
                            arr_78 [i_12] [i_12] [i_12] [i_12] [6LL] = ((/* implicit */short) ((((var_8) + (9223372036854775807LL))) >> (((((/* implicit */int) var_17)) + (29443)))));
                            arr_79 [i_0] [15LL] [i_2] [i_12] [i_14] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)));
                            arr_80 [i_14 - 1] [i_12] [i_12] [i_0] [i_12] [i_0] = ((/* implicit */short) (((-(((/* implicit */int) (!(((/* implicit */_Bool) 1LL))))))) != (((/* implicit */int) max((var_2), (var_14))))));
                            arr_81 [i_0] [i_0] [i_0] [i_12] &= ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) ^ ((-(((/* implicit */int) var_4)))));
                        }
                        for (long long int i_15 = 2; i_15 < 16; i_15 += 2) 
                        {
                            arr_85 [i_0] [i_0] [i_0] [i_2] [i_12] [10] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */long long int) var_13))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))));
                            arr_86 [i_0] [i_0] [i_2] [i_12] [i_15] = var_17;
                        }
                        arr_87 [i_0] [i_2] [(short)14] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) == (var_8))))) : (var_8)))) || (((/* implicit */_Bool) var_5))));
                        arr_88 [i_0] [i_12] = var_12;
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 19; i_16 += 1) 
                    {
                        arr_92 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_1);
                        arr_93 [(short)5] [i_1] [(short)3] [9] &= var_4;
                    }
                }
                for (long long int i_17 = 0; i_17 < 19; i_17 += 2) /* same iter space */
                {
                    arr_97 [i_0] = ((/* implicit */long long int) (-(var_13)));
                    arr_98 [i_17] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_11))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_8))))))) & (var_15)));
                }
                /* vectorizable */
                for (long long int i_18 = 0; i_18 < 19; i_18 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_19 = 3; i_19 < 17; i_19 += 3) 
                    {
                        for (short i_20 = 0; i_20 < 19; i_20 += 1) 
                        {
                            {
                                arr_109 [i_0] [i_1] [i_19] = var_3;
                                arr_110 [i_0] [i_1 + 1] [i_18] [i_19] [i_19] [(short)12] = ((/* implicit */long long int) var_4);
                                arr_111 [i_0] [i_18] [i_18] [i_18] [i_0] = ((/* implicit */short) ((var_15) == (((/* implicit */int) var_9))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_21 = 3; i_21 < 15; i_21 += 1) 
                    {
                        for (short i_22 = 2; i_22 < 16; i_22 += 4) 
                        {
                            {
                                arr_116 [i_0] [i_0] [i_18] [i_21] [i_21] [i_22] = (~(((/* implicit */int) var_2)));
                                arr_117 [i_18] [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */long long int) var_5))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0))))));
                                arr_118 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) var_16))));
                                arr_119 [i_1] [i_1] [12LL] [i_18] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)-5847)) != (((/* implicit */int) (short)32749))))) <= (((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 19; i_23 += 3) 
                {
                    for (short i_24 = 0; i_24 < 19; i_24 += 4) 
                    {
                        {
                            arr_124 [i_24] [i_0] [i_0] [i_0] = max((var_8), (((/* implicit */long long int) var_17)));
                            arr_125 [i_23] [i_1] = ((/* implicit */short) var_10);
                        }
                    } 
                } 
            }
        } 
    } 
}
