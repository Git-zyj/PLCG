/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179730
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) var_7))));
                /* LoopSeq 3 */
                for (int i_2 = 1; i_2 < 16; i_2 += 3) /* same iter space */
                {
                    var_11 = ((/* implicit */_Bool) arr_0 [i_2 + 1] [i_1 - 1]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */signed char) min((var_12), (var_1)));
                        var_13 = ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
                        arr_9 [i_0] [(unsigned short)10] [i_2] [i_3] = ((/* implicit */unsigned long long int) var_6);
                    }
                    var_14 = ((/* implicit */unsigned long long int) var_0);
                }
                for (int i_4 = 1; i_4 < 16; i_4 += 3) /* same iter space */
                {
                    arr_13 [i_4] [i_1] &= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 - 2] [i_0]);
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_4 + 2]))));
                }
                for (int i_5 = 1; i_5 < 16; i_5 += 3) /* same iter space */
                {
                    arr_17 [i_0] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_1);
                    arr_18 [i_0] [i_5] [1ULL] [10] = ((/* implicit */unsigned long long int) var_8);
                    arr_19 [i_0] [i_0] [i_5] [i_5 + 1] = var_1;
                }
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    arr_22 [i_6] [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) arr_24 [i_6] [i_7] [i_8]);
                                var_17 *= ((/* implicit */unsigned long long int) var_6);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) max((var_18), (arr_1 [i_0] [i_6])));
                    /* LoopSeq 3 */
                    for (int i_9 = 1; i_9 < 17; i_9 += 4) 
                    {
                        arr_29 [i_0] [i_9 + 1] [i_9] [(unsigned char)17] = ((/* implicit */unsigned char) var_4);
                        var_19 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_6] [i_9 - 1]);
                        var_20 = ((/* implicit */unsigned char) var_7);
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_6))));
                            var_22 = ((/* implicit */unsigned int) var_3);
                        }
                    }
                    for (long long int i_11 = 1; i_11 < 17; i_11 += 3) 
                    {
                        arr_35 [i_0] [i_11] [i_6] [i_6] = arr_2 [i_1 + 1] [i_11 - 1] [i_11 + 1];
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (var_3)));
                        var_24 = arr_24 [i_11 - 1] [i_6] [i_1 - 1];
                        var_25 = ((/* implicit */unsigned long long int) arr_14 [i_11] [i_11] [i_11] [i_0]);
                    }
                    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        arr_38 [6ULL] [i_0] [i_1 - 1] [i_1 - 1] [9U] [i_12] = ((/* implicit */long long int) var_6);
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) var_4))));
                    }
                    arr_39 [i_0] [i_1] [i_6] [i_6] = ((/* implicit */int) var_6);
                }
                arr_40 [(unsigned char)16] = ((/* implicit */unsigned long long int) arr_10 [(unsigned char)4] [i_0] [i_0]);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_14 = 0; i_14 < 14; i_14 += 1) /* same iter space */
        {
            arr_46 [i_13] [i_13] = ((/* implicit */unsigned char) var_7);
            var_27 = ((/* implicit */int) arr_25 [i_13] [i_14] [i_13] [i_14] [i_13]);
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 14; i_15 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned int) var_9);
            var_29 |= ((/* implicit */long long int) arr_30 [i_13] [i_13] [i_15] [i_15]);
        }
        /* LoopSeq 1 */
        for (long long int i_16 = 0; i_16 < 14; i_16 += 4) 
        {
            arr_54 [i_13] [i_13] = ((/* implicit */int) var_7);
            arr_55 [i_13] = ((/* implicit */unsigned int) arr_20 [i_13]);
            arr_56 [i_13] = ((/* implicit */short) arr_25 [i_13] [i_13] [i_16] [i_16] [i_16]);
        }
    }
    for (long long int i_17 = 0; i_17 < 14; i_17 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */_Bool) arr_45 [i_17] [i_17]);
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 14; i_18 += 4) 
        {
            for (long long int i_19 = 0; i_19 < 14; i_19 += 1) 
            {
                {
                    arr_66 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned int) var_2);
                    arr_67 [i_19] [i_17] [13] = ((/* implicit */unsigned long long int) var_9);
                }
            } 
        } 
        var_31 = ((/* implicit */short) arr_33 [i_17] [i_17] [i_17] [i_17] [i_17]);
        arr_68 [i_17] = ((/* implicit */signed char) arr_27 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]);
    }
    for (long long int i_20 = 0; i_20 < 14; i_20 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */signed char) var_2);
        var_33 += ((/* implicit */unsigned int) arr_36 [i_20] [i_20] [i_20] [11] [i_20] [i_20]);
        arr_73 [i_20] = ((/* implicit */short) arr_63 [10] [i_20] [10]);
    }
    for (unsigned long long int i_21 = 0; i_21 < 20; i_21 += 4) 
    {
        arr_77 [i_21] = ((/* implicit */unsigned int) var_3);
        arr_78 [16] [i_21] |= ((/* implicit */long long int) arr_76 [i_21] [i_21]);
    }
    var_34 = var_7;
    var_35 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (short i_22 = 0; i_22 < 15; i_22 += 2) 
    {
        for (unsigned char i_23 = 3; i_23 < 14; i_23 += 3) 
        {
            {
                arr_86 [i_23] = ((/* implicit */_Bool) arr_0 [i_23] [2]);
                arr_87 [i_22] [i_23] [i_23 + 1] = ((/* implicit */long long int) var_5);
                arr_88 [i_22] [i_23] [i_23] = arr_15 [i_23 - 3];
                var_36 = ((/* implicit */int) arr_28 [i_23] [i_23 - 1] [i_22] [i_23]);
            }
        } 
    } 
}
