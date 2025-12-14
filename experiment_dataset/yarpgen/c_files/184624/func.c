/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184624
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
    var_15 = var_12;
    var_16 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        arr_9 [i_3] [i_1] [i_3] [i_1] = var_14;
                        arr_10 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_14);
                    }
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        arr_15 [i_1] [i_2] = ((/* implicit */long long int) var_6);
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            arr_19 [i_1] [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) var_3);
                            arr_20 [i_0] [14U] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) var_7);
                        }
                        arr_21 [3U] [i_1] [i_1] [i_0] = var_5;
                    }
                    arr_22 [i_0] = ((/* implicit */unsigned int) var_8);
                    arr_23 [i_1] [i_0] = ((/* implicit */unsigned char) var_7);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            {
                                arr_29 [i_0] [i_1] = ((/* implicit */long long int) var_3);
                                arr_30 [i_0] [i_1] [4] [1U] [i_1] = var_13;
                                arr_31 [18] [i_0] [(unsigned short)10] [i_0] [i_2] [i_0] = ((/* implicit */long long int) var_12);
                                arr_32 [i_7] [i_0] [i_0] [i_6] [i_7] = ((/* implicit */signed char) var_9);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 4; i_8 < 24; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 24; i_9 += 3) 
                        {
                            {
                                arr_38 [i_9] [i_0] [i_0] [i_2] [(unsigned short)24] = ((/* implicit */unsigned short) var_0);
                                arr_39 [i_0] [i_0] [i_1] [i_2] [i_8] [(unsigned char)5] [i_0] = ((/* implicit */int) var_8);
                            }
                        } 
                    } 
                }
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    arr_42 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_13);
                    arr_43 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned short) min((((/* implicit */signed char) var_9)), (var_13)))), (var_6)));
                }
                for (unsigned short i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    /* LoopSeq 3 */
                    for (int i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        arr_49 [i_0] [3U] [i_11] [i_11] = ((/* implicit */unsigned short) var_13);
                        arr_50 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) min((var_3), (var_0)))), (max((var_11), (((/* implicit */int) var_13))))));
                        /* LoopSeq 4 */
                        for (int i_13 = 0; i_13 < 25; i_13 += 1) 
                        {
                            arr_53 [i_0] [i_0] [(short)6] [i_11] [i_0] [(short)6] = ((/* implicit */signed char) var_7);
                            arr_54 [i_0] [i_1] [i_1] [i_0] [i_11] = ((/* implicit */unsigned short) min((min((var_4), (var_4))), (max((((/* implicit */unsigned int) min((var_6), (((/* implicit */unsigned short) var_5))))), (var_4)))));
                            arr_55 [i_11] [i_11] [i_11] [i_11] [i_1] [i_1] = ((/* implicit */int) var_14);
                            arr_56 [i_0] [i_0] [(unsigned char)21] [i_11] [i_12] [i_13] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (min((var_7), (((/* implicit */int) var_1))))));
                            arr_57 [i_0] [i_0] [(signed char)22] [i_12] [i_13] [i_0] = ((/* implicit */short) min((var_4), (min((var_4), (((/* implicit */unsigned int) var_8))))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 2) 
                        {
                            arr_60 [i_0] [i_0] [(signed char)17] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_5);
                            arr_61 [i_0] [i_14] [i_11] [i_12] [i_14] = ((/* implicit */short) var_9);
                        }
                        for (signed char i_15 = 3; i_15 < 22; i_15 += 3) 
                        {
                            arr_64 [i_1] = ((/* implicit */short) var_4);
                            arr_65 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) var_11)), (min((var_4), (((/* implicit */unsigned int) var_1))))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 4) 
                        {
                            arr_68 [i_0] [i_0] [i_0] [i_11] = min((var_7), (min((var_11), (((/* implicit */int) var_3)))));
                            arr_69 [i_0] [i_0] [i_0] [i_16] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_0)), (var_14)));
                            arr_70 [i_0] [i_11] [i_11] [i_1] [(signed char)2] [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_11)), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)12))))));
                            arr_71 [i_0] = var_11;
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_17 = 0; i_17 < 25; i_17 += 1) 
                        {
                            arr_74 [i_0] [i_0] [14U] [i_12] [i_17] = ((/* implicit */unsigned char) var_3);
                            arr_75 [i_0] [i_0] [i_11] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_8);
                        }
                        for (signed char i_18 = 0; i_18 < 25; i_18 += 3) 
                        {
                            arr_80 [i_0] [i_1] [i_11] [i_11] [i_11] [i_0] [i_18] = ((/* implicit */int) var_9);
                            arr_81 [i_0] = ((/* implicit */short) var_10);
                        }
                        arr_82 [i_0] [i_0] [i_12] [i_0] = ((/* implicit */unsigned long long int) var_11);
                    }
                    for (unsigned short i_19 = 0; i_19 < 25; i_19 += 1) 
                    {
                        arr_86 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_11)), (var_14)));
                        arr_87 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_1)), (min((((/* implicit */unsigned int) var_9)), (var_4)))));
                    }
                    /* vectorizable */
                    for (int i_20 = 1; i_20 < 23; i_20 += 2) 
                    {
                        arr_92 [24ULL] [i_11] [i_11] [i_20] = ((/* implicit */unsigned long long int) var_11);
                        arr_93 [i_11] [14] [i_11] [i_20] = ((/* implicit */signed char) var_7);
                    }
                    arr_94 [i_1] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned short) var_2)), (var_6))), (((/* implicit */unsigned short) max((((/* implicit */short) var_0)), (var_5))))));
                    arr_95 [i_11] [i_0] [i_0] [(unsigned short)6] = ((/* implicit */unsigned short) var_9);
                }
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 3; i_21 < 22; i_21 += 4) 
                {
                    for (int i_22 = 0; i_22 < 25; i_22 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (long long int i_23 = 1; i_23 < 24; i_23 += 3) 
                            {
                                arr_105 [(signed char)7] [i_1] [i_0] [i_22] [i_23 - 1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((/* implicit */int) var_5)), (max((var_12), (((/* implicit */int) var_5))))))), (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)115))))));
                                arr_106 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_6);
                                arr_107 [i_0] [i_1] [i_21] [i_22] [i_0] = ((/* implicit */unsigned int) var_6);
                            }
                            for (int i_24 = 0; i_24 < 25; i_24 += 1) 
                            {
                                arr_110 [i_0] [i_0] = max((var_8), (var_8));
                                arr_111 [i_0] [i_0] [i_0] [i_22] [i_1] = var_12;
                            }
                            for (unsigned char i_25 = 0; i_25 < 25; i_25 += 4) 
                            {
                                arr_115 [i_0] [i_0] [i_1] [i_21 + 3] [(unsigned short)3] [7U] [i_25] = ((/* implicit */unsigned int) min((((/* implicit */int) min((var_5), (var_5)))), (min((var_12), (var_7)))));
                                arr_116 [15LL] [(unsigned char)14] [(unsigned char)14] [(signed char)10] [i_0] = ((/* implicit */unsigned short) min((min((var_5), (((/* implicit */short) var_0)))), (((/* implicit */short) var_3))));
                                arr_117 [17U] [24] [i_1] [i_0] [i_22] [i_25] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned char)136)), (18446744073709551607ULL)));
                                arr_118 [i_0] [i_1] [i_1] [i_0] [16] [i_1] = ((/* implicit */int) var_13);
                                arr_119 [i_0] = ((/* implicit */int) var_6);
                            }
                            arr_120 [i_1] [i_1] [i_21] [i_22] = ((/* implicit */_Bool) var_10);
                        }
                    } 
                } 
                arr_121 [i_0] [i_1] [i_1] = max((min((var_11), (((/* implicit */int) var_3)))), (max((var_11), (((/* implicit */int) var_1)))));
                arr_122 [i_0] = ((/* implicit */signed char) min((max((((/* implicit */unsigned int) var_0)), (var_14))), (((/* implicit */unsigned int) min((((/* implicit */int) var_5)), (max((((/* implicit */int) var_9)), (var_12))))))));
                arr_123 [i_1] = ((/* implicit */int) min((((/* implicit */unsigned int) max((var_0), (var_3)))), (min((var_14), (((/* implicit */unsigned int) var_5))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned char) var_0))));
}
