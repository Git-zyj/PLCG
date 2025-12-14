/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147294
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_10 = ((/* implicit */unsigned char) arr_3 [i_0] [i_1] [(short)4]);
                    var_11 *= ((/* implicit */unsigned char) arr_5 [(unsigned char)0] [6U] [i_2] [i_2]);
                    var_12 = ((/* implicit */unsigned char) arr_3 [(_Bool)1] [i_0] [i_0]);
                }
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 12; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            {
                                arr_17 [i_3] [i_1] = ((/* implicit */short) arr_13 [i_0] [i_1] [i_1] [i_1]);
                                var_13 = ((/* implicit */unsigned long long int) arr_13 [(signed char)6] [(signed char)6] [i_1] [i_0]);
                                var_14 = ((/* implicit */_Bool) arr_12 [i_0] [i_4]);
                                var_15 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_4] [i_5]);
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_1] = ((/* implicit */unsigned short) arr_12 [i_0] [(unsigned short)13]);
                }
                /* vectorizable */
                for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    var_16 &= ((/* implicit */_Bool) arr_4 [6U] [6U]);
                    arr_21 [i_6] [i_1] [i_1] [i_0] = ((/* implicit */long long int) arr_20 [i_1]);
                    var_17 = ((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_6] [i_1]);
                    arr_22 [i_0] [i_1] = ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [i_6]);
                }
                arr_23 [i_0] [i_1] [10ULL] = ((/* implicit */unsigned char) arr_4 [i_1] [i_1]);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        arr_28 [i_7] = ((/* implicit */long long int) arr_25 [i_7]);
        /* LoopSeq 1 */
        for (unsigned short i_8 = 2; i_8 < 16; i_8 += 4) 
        {
            var_18 = ((/* implicit */unsigned char) arr_32 [i_8 - 1]);
            /* LoopSeq 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 3) /* same iter space */
                {
                    arr_38 [i_7] [i_9] [i_7] [i_9] = ((/* implicit */short) arr_24 [i_8]);
                    var_19 = ((/* implicit */_Bool) arr_26 [i_8]);
                    var_20 = ((/* implicit */unsigned char) arr_29 [i_9] [i_8 - 2] [1LL]);
                    var_21 = ((/* implicit */unsigned long long int) arr_24 [i_9]);
                    var_22 = arr_25 [i_9];
                }
                for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
                {
                    var_23 |= ((/* implicit */unsigned long long int) arr_36 [i_8]);
                    var_24 = ((/* implicit */unsigned long long int) arr_31 [8ULL]);
                }
                for (unsigned char i_12 = 0; i_12 < 17; i_12 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_25 -= ((/* implicit */unsigned short) arr_47 [i_12] [i_12] [i_9] [i_12] [i_12]);
                        arr_48 [i_7] [i_7] [i_7] [i_7] [i_7] [i_8] [i_7] &= ((/* implicit */unsigned long long int) arr_30 [i_7] [i_8]);
                        var_26 = ((/* implicit */unsigned char) arr_32 [(short)13]);
                    }
                    var_27 = arr_39 [i_9] [i_9] [i_8 - 1] [i_9];
                }
                for (unsigned char i_14 = 0; i_14 < 17; i_14 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_15 = 1; i_15 < 13; i_15 += 1) 
                    {
                        var_28 = arr_32 [i_7];
                        arr_53 [i_7] [14ULL] [i_8] [i_9] [i_14] [i_15] [i_9] = ((/* implicit */unsigned int) arr_36 [i_9]);
                        var_29 = ((/* implicit */unsigned char) arr_31 [i_7]);
                        var_30 ^= ((/* implicit */unsigned long long int) arr_39 [i_7] [i_8] [i_9] [i_14]);
                        arr_54 [i_9] = arr_34 [(signed char)4] [8U] [i_14] [i_15];
                    }
                    var_31 = ((/* implicit */unsigned long long int) arr_31 [i_8]);
                    /* LoopSeq 3 */
                    for (long long int i_16 = 0; i_16 < 17; i_16 += 3) /* same iter space */
                    {
                        arr_57 [i_7] [i_9] [(signed char)3] [i_7] [i_16] [(signed char)3] [i_7] = ((/* implicit */unsigned int) arr_50 [i_16] [i_14] [i_9] [(_Bool)1] [i_7]);
                        arr_58 [i_7] [i_8] [i_9] [i_14] [i_9] = arr_39 [i_8 + 1] [i_9] [i_9] [i_9];
                        arr_59 [i_9] [i_9] = ((/* implicit */unsigned short) arr_26 [i_16]);
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) arr_27 [i_8]))));
                    }
                    for (long long int i_17 = 0; i_17 < 17; i_17 += 3) /* same iter space */
                    {
                        var_33 = ((/* implicit */int) arr_34 [i_7] [i_7] [i_7] [i_7]);
                        var_34 &= ((/* implicit */unsigned char) arr_56 [i_8] [i_9] [i_14]);
                    }
                    for (unsigned int i_18 = 0; i_18 < 17; i_18 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) arr_40 [i_18]);
                        var_36 = ((/* implicit */unsigned short) arr_30 [i_9] [i_7]);
                        var_37 = ((/* implicit */unsigned char) arr_29 [(short)7] [i_9] [i_9]);
                        var_38 *= ((/* implicit */unsigned long long int) arr_36 [i_14]);
                    }
                }
                var_39 += ((/* implicit */unsigned int) arr_55 [i_7] [i_7] [(unsigned char)6]);
            }
            for (unsigned int i_19 = 0; i_19 < 17; i_19 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_20 = 0; i_20 < 17; i_20 += 4) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 17; i_21 += 2) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned long long int) arr_44 [i_20] [i_20] [i_8] [i_8]);
                            arr_74 [(_Bool)0] [(_Bool)0] [(_Bool)0] [0LL] [i_7] |= ((/* implicit */signed char) arr_55 [i_21] [i_8 - 1] [i_7]);
                        }
                    } 
                } 
                var_41 = ((/* implicit */unsigned short) arr_41 [i_7] [i_7] [i_7] [2ULL] [i_8]);
            }
            /* LoopNest 2 */
            for (unsigned long long int i_22 = 0; i_22 < 17; i_22 += 3) 
            {
                for (unsigned int i_23 = 4; i_23 < 14; i_23 += 3) 
                {
                    {
                        arr_82 [i_7] [i_22] = ((/* implicit */short) arr_77 [i_7] [i_7] [i_7] [(_Bool)1]);
                        var_42 = ((/* implicit */unsigned short) arr_72 [i_23] [i_7] [i_22] [i_8 - 2] [i_8] [i_7]);
                        /* LoopSeq 4 */
                        for (long long int i_24 = 3; i_24 < 16; i_24 += 2) 
                        {
                            arr_85 [i_7] [i_7] [i_22] [i_7] [i_22] = arr_56 [i_7] [i_8] [i_22];
                            var_43 = ((/* implicit */short) arr_76 [i_7] [(unsigned char)6] [(unsigned char)6]);
                        }
                        for (unsigned char i_25 = 0; i_25 < 17; i_25 += 4) /* same iter space */
                        {
                            var_44 = ((/* implicit */unsigned short) arr_29 [i_7] [i_23] [i_25]);
                            var_45 = ((/* implicit */short) arr_26 [i_25]);
                            var_46 = ((/* implicit */_Bool) arr_36 [i_22]);
                        }
                        for (unsigned char i_26 = 0; i_26 < 17; i_26 += 4) /* same iter space */
                        {
                            var_47 = ((/* implicit */short) arr_89 [i_7] [i_8] [i_7] [i_23] [i_26]);
                            var_48 *= ((/* implicit */unsigned long long int) arr_69 [i_7] [i_22] [i_22]);
                            arr_93 [i_7] [i_7] [i_7] [i_7] [i_22] = ((/* implicit */unsigned int) arr_44 [i_7] [i_26] [i_22] [3LL]);
                            arr_94 [i_22] [i_8] [i_22] [i_26] = ((/* implicit */unsigned long long int) arr_24 [(_Bool)1]);
                        }
                        for (unsigned char i_27 = 0; i_27 < 17; i_27 += 4) /* same iter space */
                        {
                            arr_97 [i_7] [i_7] [i_22] = ((/* implicit */long long int) arr_81 [(short)5] [(short)5] [i_22]);
                            var_49 = ((/* implicit */int) arr_73 [i_23]);
                            var_50 = ((/* implicit */long long int) arr_70 [(signed char)7] [3] [(unsigned char)1] [i_22] [i_8] [i_7]);
                            var_51 = arr_65 [i_27] [i_23] [i_8];
                        }
                        var_52 = ((/* implicit */unsigned char) arr_80 [i_23 + 3] [4ULL] [10ULL] [1ULL] [6] [i_7]);
                        var_53 *= ((/* implicit */_Bool) arr_63 [i_23] [i_22] [i_22] [i_7] [i_8 - 2] [i_7]);
                    }
                } 
            } 
        }
    }
    var_54 = ((/* implicit */unsigned short) var_5);
    var_55 = ((/* implicit */short) var_6);
}
