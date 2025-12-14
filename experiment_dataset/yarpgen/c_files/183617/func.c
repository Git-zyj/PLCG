/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183617
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
    var_13 = ((/* implicit */long long int) max((min((var_7), (((/* implicit */short) var_12)))), (((/* implicit */short) var_1))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_14 += ((/* implicit */short) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) arr_0 [i_1]);
        var_15 = ((/* implicit */long long int) arr_6 [i_1] [i_1]);
        var_16 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
        arr_8 [i_1] [(unsigned char)10] = ((/* implicit */int) arr_6 [i_1] [(short)15]);
        arr_9 [i_1] &= ((/* implicit */unsigned int) arr_4 [i_1] [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) arr_12 [i_2]);
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_4 [i_2] [4]))));
        var_19 = ((/* implicit */unsigned long long int) arr_4 [i_2] [i_2]);
        /* LoopSeq 2 */
        for (int i_3 = 4; i_3 < 21; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_3] [i_5 + 1]))));
                        var_21 &= ((/* implicit */unsigned long long int) arr_13 [i_2] [i_3 - 2] [i_4]);
                        arr_20 [i_4] = arr_16 [i_2] [i_3] [3];
                    }
                } 
            } 
            var_22 = arr_6 [i_2] [i_3];
            var_23 = ((/* implicit */long long int) arr_19 [i_2] [i_2] [i_3 + 1] [8LL]);
            arr_21 [i_3 - 2] [i_3 + 1] [i_3 + 1] = ((/* implicit */int) arr_10 [(unsigned short)15]);
        }
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_10 [i_2]))));
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 2) 
            {
                /* LoopSeq 3 */
                for (long long int i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
                {
                    var_25 = ((/* implicit */int) arr_12 [i_2]);
                    arr_31 [i_7] [i_7 + 4] [i_6] [i_7] = ((/* implicit */unsigned long long int) arr_22 [1] [1]);
                    var_26 *= ((/* implicit */short) arr_28 [6ULL] [i_2] [i_2] [i_8]);
                    var_27 = ((/* implicit */unsigned long long int) arr_17 [i_2] [i_7 - 1] [i_8] [i_7] [(unsigned short)2] [(unsigned short)2]);
                }
                for (long long int i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */int) arr_4 [i_9] [i_2]);
                    arr_34 [i_7] [i_7 + 2] [i_7] [i_7] = arr_10 [i_6];
                }
                for (long long int i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned char) arr_32 [i_2] [i_7] [i_7 + 4] [i_10] [i_2]);
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) arr_36 [i_2] [i_6] [i_7] [i_7] [i_10]))));
                    var_31 = ((/* implicit */short) min((var_31), (arr_22 [i_2] [i_7 + 3])));
                }
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 22; i_11 += 3) 
                {
                    for (unsigned char i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        {
                            var_32 &= ((/* implicit */short) arr_25 [i_11] [i_11] [i_11] [i_11]);
                            arr_43 [i_2] [i_2] [i_6] [i_7] [i_11] [5ULL] [i_12] = ((/* implicit */unsigned long long int) arr_38 [(unsigned char)4] [i_6] [(unsigned char)4] [i_6]);
                            arr_44 [i_2] [i_7] [i_7] [i_11] [i_12] = ((/* implicit */unsigned char) arr_37 [i_2] [i_7] [i_11] [i_12]);
                            var_33 *= ((/* implicit */unsigned int) arr_37 [i_12] [i_2] [i_12] [i_12]);
                        }
                    } 
                } 
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_47 [i_2] [i_6] [i_13] = ((/* implicit */long long int) arr_30 [i_2] [i_2] [i_6] [i_2]);
                arr_48 [(unsigned short)21] [(unsigned short)21] = ((/* implicit */long long int) arr_19 [i_13] [i_6] [13ULL] [i_2]);
                var_34 = ((/* implicit */unsigned long long int) arr_41 [i_6] [i_6] [14ULL] [i_6] [i_6]);
                var_35 &= ((/* implicit */unsigned short) arr_12 [i_6]);
            }
        }
    }
    var_36 = min((min((((/* implicit */unsigned long long int) max((var_11), (var_0)))), (min((var_5), (var_3))))), (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned char) var_10)), (var_1))), (max((var_6), (var_9)))))));
}
