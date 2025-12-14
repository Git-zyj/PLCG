/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177833
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) var_4))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1]))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                arr_9 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) var_6);
                var_13 = ((/* implicit */long long int) var_2);
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */int) arr_6 [i_1 - 1] [i_3 + 2]);
                            var_15 = ((/* implicit */int) arr_1 [i_0]);
                            arr_17 [i_0] [5] [5] [i_3] [i_3] [i_3] = arr_13 [13U] [i_1 + 1] [i_3] [i_3 + 3] [i_4 + 2];
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) arr_12 [i_0] [i_1 - 1] [i_0]);
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    arr_22 [i_0] [i_0] [2] [i_0] [(signed char)9] [i_0] = var_1;
                    arr_23 [17LL] [i_1] [i_1] [14ULL] = ((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [(unsigned char)0] [i_2 - 1] [i_0]);
                    var_17 = ((/* implicit */unsigned char) arr_7 [i_0] [i_1 - 1] [i_2 + 1] [i_2 + 1]);
                }
            }
            /* vectorizable */
            for (unsigned char i_6 = 2; i_6 < 22; i_6 += 3) 
            {
                var_18 = arr_21 [i_0] [i_1] [i_1] [i_1] [i_1];
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 4; i_8 < 20; i_8 += 1) 
                    {
                        {
                            arr_30 [i_6] [i_7] [i_7] [i_6] [i_8] = ((/* implicit */unsigned char) var_3);
                            var_19 = ((/* implicit */int) arr_29 [i_0] [i_1] [(unsigned short)17] [i_7 + 1] [i_7 + 2] [i_7 + 1] [i_1]);
                            arr_31 [i_8] [i_0] [i_6 + 2] [i_1 + 1] [i_0] [i_0] |= ((/* implicit */unsigned int) arr_26 [i_7 - 1] [i_7 - 1] [i_0] [i_7 + 2]);
                        }
                    } 
                } 
            }
            for (unsigned int i_9 = 2; i_9 < 22; i_9 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned short) arr_6 [i_0] [i_0]);
                    var_21 = ((/* implicit */unsigned int) var_0);
                    arr_38 [i_0] [i_1 + 1] [(signed char)1] [i_9] [i_9] = var_4;
                }
                for (int i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
                {
                    var_22 &= var_7;
                    var_23 = ((/* implicit */unsigned char) var_5);
                }
                var_24 = ((/* implicit */long long int) max((var_24), (arr_24 [i_1 + 1])));
                arr_42 [i_0] [i_9] [i_1] [i_9 + 1] = ((/* implicit */int) var_4);
                arr_43 [i_9] [i_1] [i_9] = ((/* implicit */_Bool) var_6);
                /* LoopSeq 3 */
                for (long long int i_12 = 3; i_12 < 21; i_12 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned int) var_9);
                    arr_46 [i_9] [i_1 + 1] [i_1 + 1] [i_1 - 1] = ((/* implicit */short) arr_11 [i_1 + 1] [i_9 + 1] [i_9] [i_9] [i_1 + 1] [i_0]);
                }
                for (long long int i_13 = 3; i_13 < 21; i_13 += 1) /* same iter space */
                {
                    arr_49 [(_Bool)1] [(_Bool)1] [i_9] [i_9 - 1] [i_9 - 1] [i_13] = ((/* implicit */int) var_1);
                    var_26 = ((/* implicit */_Bool) arr_10 [i_0] [i_1 + 1] [i_0] [i_1 + 1]);
                    /* LoopSeq 1 */
                    for (int i_14 = 2; i_14 < 23; i_14 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) arr_2 [i_9 + 1] [i_9]);
                        var_28 = arr_40 [(signed char)14] [(signed char)14] [(signed char)14] [(signed char)14] [23U];
                    }
                    var_29 = ((/* implicit */unsigned short) var_5);
                }
                for (long long int i_15 = 3; i_15 < 21; i_15 += 1) /* same iter space */
                {
                    arr_54 [i_0] [i_0] [i_1 + 1] [(unsigned char)18] [i_9] [i_15 - 3] = ((/* implicit */unsigned int) arr_25 [i_1 + 1] [i_9 - 1] [i_15 + 2] [i_15 - 2]);
                    arr_55 [i_9] [i_1] [i_9] = ((/* implicit */signed char) arr_21 [i_9 + 1] [i_9 + 1] [i_9 + 2] [i_9 - 1] [i_9 + 2]);
                    arr_56 [i_0] &= ((/* implicit */unsigned short) arr_1 [i_0]);
                }
            }
        }
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_30 -= ((/* implicit */short) arr_53 [i_0] [i_0] [i_0] [i_0] [i_16] [i_16]);
            arr_61 [i_0] [i_16] [i_16] = arr_48 [i_0] [i_0] [i_0] [i_0];
            var_31 = ((/* implicit */int) var_8);
            var_32 = ((/* implicit */short) var_0);
            arr_62 [i_0] [i_16] [i_16] = ((/* implicit */unsigned int) var_7);
        }
        for (unsigned char i_17 = 2; i_17 < 23; i_17 += 1) 
        {
            var_33 *= ((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [i_0] [i_0]);
            var_34 = ((/* implicit */unsigned long long int) var_7);
        }
    }
    for (signed char i_18 = 1; i_18 < 10; i_18 += 2) 
    {
        arr_67 [i_18] = ((/* implicit */unsigned long long int) arr_41 [i_18] [i_18] [i_18]);
        arr_68 [6] [i_18] = ((/* implicit */int) arr_29 [i_18] [i_18] [i_18] [i_18] [i_18 + 1] [i_18] [i_18]);
        /* LoopNest 2 */
        for (unsigned long long int i_19 = 3; i_19 < 10; i_19 += 4) 
        {
            for (unsigned char i_20 = 0; i_20 < 11; i_20 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 4; i_21 < 10; i_21 += 4) 
                    {
                        for (long long int i_22 = 1; i_22 < 10; i_22 += 1) 
                        {
                            {
                                arr_82 [i_18 + 1] [i_19] [i_20] [i_18 + 1] [i_18] = ((/* implicit */unsigned long long int) arr_29 [i_18 + 1] [i_18 + 1] [i_19] [i_19 - 2] [i_19 - 3] [i_19 + 1] [i_21 - 1]);
                                arr_83 [i_18] [i_18] [i_20] [i_21 - 3] [i_22] = ((/* implicit */unsigned int) arr_25 [i_19] [i_19 - 3] [i_19 - 3] [i_19]);
                                arr_84 [i_18] [i_19] [i_20] [i_20] [i_20] [i_18] [i_22 - 1] = ((/* implicit */int) var_3);
                                arr_85 [i_22] [i_18] [i_18] [i_18] [i_18] = arr_44 [i_18 + 1] [i_18];
                            }
                        } 
                    } 
                    arr_86 [i_19] [i_19 - 3] [i_19 - 3] [i_18] = ((/* implicit */long long int) var_1);
                    var_35 = ((/* implicit */short) arr_15 [i_18] [i_19] [i_19 - 1] [i_20] [i_20] [i_20] [i_20]);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
        {
            var_36 -= ((/* implicit */unsigned char) var_7);
            arr_89 [i_18 - 1] [i_18] = ((/* implicit */unsigned short) arr_13 [i_23] [i_23 - 1] [i_18] [i_23] [i_23 - 1]);
        }
        /* vectorizable */
        for (int i_24 = 2; i_24 < 10; i_24 += 3) 
        {
            var_37 = ((/* implicit */unsigned long long int) arr_50 [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18] [i_18 - 1] [i_18]);
            arr_93 [i_18] [i_18] = ((/* implicit */unsigned char) arr_1 [i_18]);
            var_38 ^= ((/* implicit */short) arr_81 [i_18] [i_18] [i_18] [i_24 + 1] [i_18]);
        }
        for (unsigned int i_25 = 0; i_25 < 11; i_25 += 1) 
        {
            var_39 ^= ((/* implicit */unsigned char) arr_16 [i_18 - 1] [i_25]);
            /* LoopSeq 1 */
            for (unsigned char i_26 = 1; i_26 < 9; i_26 += 1) 
            {
                arr_99 [i_18] [i_26] = ((/* implicit */_Bool) var_1);
                var_40 = ((/* implicit */int) max((var_40), (var_5)));
            }
        }
    }
    for (unsigned int i_27 = 1; i_27 < 15; i_27 += 2) /* same iter space */
    {
        var_41 -= ((/* implicit */unsigned short) arr_10 [i_27 + 2] [i_27] [i_27] [i_27]);
        /* LoopSeq 1 */
        for (unsigned long long int i_28 = 1; i_28 < 15; i_28 += 1) 
        {
            arr_104 [i_27] = ((/* implicit */short) arr_18 [i_27]);
            arr_105 [i_27] [i_28 - 1] = ((/* implicit */unsigned int) arr_28 [i_27] [(unsigned char)2] [i_28] [i_27] [i_28]);
        }
    }
    for (unsigned int i_29 = 1; i_29 < 15; i_29 += 2) /* same iter space */
    {
        var_42 = ((/* implicit */unsigned int) arr_63 [i_29 + 2]);
        arr_108 [i_29 - 1] [(unsigned char)14] |= ((/* implicit */unsigned long long int) var_6);
        var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) arr_24 [i_29]))));
    }
}
