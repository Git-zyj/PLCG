/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18058
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
    var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) var_2))));
    var_11 = ((/* implicit */int) var_3);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 13; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_12 += ((/* implicit */_Bool) arr_1 [i_1]);
                            arr_13 [i_3] [(signed char)14] [i_2] [(short)11] [(signed char)14] = ((/* implicit */int) arr_3 [i_2] [8]);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) arr_6 [i_2] [i_1] [i_1] [i_3]))));
                            var_14 = arr_3 [i_2] [i_3];
                        }
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            arr_20 [i_6] [i_0] [i_2] [i_0] [i_0] |= ((/* implicit */short) arr_9 [i_0] [i_1] [i_1] [i_3 + 1] [(unsigned char)2] [i_6]);
                            arr_21 [(signed char)7] [i_3] [(signed char)7] [(signed char)7] [i_6] = ((/* implicit */unsigned long long int) arr_3 [(signed char)7] [12]);
                            arr_22 [i_6] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) arr_8 [(_Bool)1] [(unsigned char)14] [i_1] [i_1] [(_Bool)1] [(_Bool)1]);
                        }
                        arr_23 [i_3] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */signed char) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_24 [i_3] [i_1] [i_1] = ((/* implicit */short) arr_17 [i_0] [i_0] [i_0] [(short)14] [14] [2] [i_3]);
                        arr_25 [i_3] [i_3] [10LL] [i_3] = ((/* implicit */unsigned long long int) arr_11 [i_3] [i_3]);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
                    {
                        arr_30 [i_0] [i_2] [i_0] &= ((/* implicit */long long int) arr_16 [i_0] [i_0] [(short)10] [i_0] [i_0] [i_7]);
                        arr_31 [i_7] = ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_7]);
                        arr_32 [i_7] [i_7] [i_2] [i_7] = ((/* implicit */short) arr_15 [i_0] [i_0] [7ULL] [i_1] [i_2] [i_7]);
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
                    {
                        arr_35 [i_0] [7] [i_2] [i_8] [i_8] = ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2] [9]);
                        var_15 = ((/* implicit */short) arr_5 [i_0] [i_1] [i_2] [i_8]);
                        arr_36 [i_0] [i_0] [i_2] [i_8] [i_8] = ((/* implicit */_Bool) arr_3 [i_0] [i_2]);
                        var_16 = arr_5 [i_0] [i_0] [i_2] [i_8];
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_39 [(_Bool)1] [i_1] [i_2] [i_8] [i_0] &= ((/* implicit */short) arr_5 [i_0] [i_0] [i_2] [i_8]);
                            arr_40 [i_8] = ((/* implicit */int) arr_9 [10LL] [i_8] [i_2] [i_1] [i_0] [i_0]);
                            var_17 = ((/* implicit */unsigned int) arr_11 [i_8] [i_8]);
                            arr_41 [i_8] [i_8] [i_8] [i_8] [i_1] [(unsigned char)12] = ((/* implicit */long long int) arr_17 [i_0] [i_1] [i_0] [i_8] [i_9] [i_1] [i_8]);
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) arr_9 [i_2] [i_10] [i_2] [i_2] [i_0] [i_0]);
                                var_19 = ((/* implicit */signed char) arr_10 [i_0] [i_1] [i_0] [i_10] [i_11]);
                                var_20 = ((/* implicit */long long int) arr_0 [i_0]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) arr_14 [i_0] [i_1] [(_Bool)1] [13ULL] [i_0]);
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 15; i_12 += 4) 
                    {
                        for (long long int i_13 = 0; i_13 < 15; i_13 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_12] [i_2] [i_2]);
                                var_23 |= ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_2] [i_12] [i_0]);
                                arr_51 [i_0] [i_1] [i_2] [i_1] [i_13] [i_13] [12] = ((/* implicit */short) arr_18 [1LL] [i_1] [i_2] [i_2] [i_12] [i_12] [i_13]);
                            }
                        } 
                    } 
                    arr_52 [i_0] [4LL] [(_Bool)1] = ((/* implicit */long long int) arr_16 [i_0] [(signed char)14] [i_0] [i_0] [i_0] [i_2]);
                }
            } 
        } 
    } 
}
