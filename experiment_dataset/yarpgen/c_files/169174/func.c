/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169174
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
    var_16 = ((/* implicit */int) var_4);
    var_17 &= ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
                {
                    var_18 = arr_2 [i_0];
                    arr_10 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) arr_4 [1] [i_1]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            arr_17 [i_0] [i_3] [i_2] [8LL] [i_4] = ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_3] [i_0] [i_0]);
                            arr_18 [i_0] [i_3] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) arr_11 [i_0] [i_4] [(signed char)18] [i_2] [i_1] [i_0]);
                            arr_19 [i_0] [i_0] [i_1] [i_0] [i_1] [i_3] [i_3] = ((/* implicit */int) arr_9 [i_2]);
                            arr_20 [i_0] [(_Bool)1] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) arr_16 [1]);
                        }
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            arr_23 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */int) arr_13 [i_3] [i_3] [i_0]);
                            arr_24 [i_0] [8LL] [i_2] [i_0] [16] [i_3] [i_5] |= ((/* implicit */long long int) arr_13 [i_0] [(_Bool)1] [i_0]);
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_15 [i_0] [i_0] [i_2] [2LL] [i_3 + 3] [(short)23] [i_3 + 3]))));
                        }
                        var_20 = ((/* implicit */unsigned short) arr_0 [(unsigned short)5]);
                        var_21 = ((/* implicit */short) arr_6 [i_0] [i_2] [2LL]);
                    }
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            {
                                arr_33 [i_1] [i_1] [i_1] [i_1] [i_6] = ((/* implicit */unsigned long long int) arr_2 [i_7]);
                                arr_34 [i_0] [i_0] [i_6] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_4 [10LL] [10LL]);
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_32 [i_0]))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) arr_38 [i_0] [7] [7] [7] [i_9]);
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_27 [i_0] [i_1] [i_1]))));
                    }
                    for (long long int i_10 = 0; i_10 < 25; i_10 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */long long int) arr_29 [i_0]);
                        /* LoopSeq 2 */
                        for (signed char i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned short) arr_29 [i_0]);
                            var_27 = ((/* implicit */short) arr_28 [9ULL] [i_1] [i_1] [i_1]);
                        }
                        for (signed char i_12 = 0; i_12 < 25; i_12 += 1) /* same iter space */
                        {
                            arr_47 [i_1] [i_1] [i_6] [i_1] [i_1] = ((/* implicit */short) arr_36 [(short)5]);
                            arr_48 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) arr_38 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_12] [i_6]);
                        }
                        arr_49 [(signed char)8] [i_6] [i_6] [i_6] = ((/* implicit */long long int) arr_28 [i_0] [i_1] [i_6] [(signed char)15]);
                        arr_50 [i_0] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */short) arr_41 [i_10] [i_6]);
                    }
                    for (unsigned short i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_14 = 1; i_14 < 23; i_14 += 1) 
                        {
                            arr_57 [i_0] [i_6] [i_1] [i_6] [i_13] [i_14 - 1] = ((/* implicit */int) arr_43 [17LL] [i_14] [i_6] [i_14] [i_14] [i_14] [i_14]);
                            arr_58 [(_Bool)1] [(_Bool)1] [i_6] [15LL] [i_6] [i_6] [i_6] = ((/* implicit */signed char) arr_29 [i_0]);
                            var_28 = ((/* implicit */long long int) arr_27 [i_6] [i_6] [i_13]);
                        }
                        var_29 += ((/* implicit */unsigned char) arr_55 [6LL] [i_1] [i_13] [i_6] [i_13]);
                    }
                }
                arr_59 [i_0] [i_1] = ((/* implicit */signed char) arr_8 [i_0] [i_1]);
            }
        } 
    } 
    var_30 |= ((/* implicit */signed char) var_15);
}
