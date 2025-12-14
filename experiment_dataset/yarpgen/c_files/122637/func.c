/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122637
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_9 [5LL] [(unsigned char)10] [5LL] [i_2 + 1] = ((/* implicit */unsigned int) arr_7 [i_0] [15] [i_2]);
                    var_16 = ((/* implicit */unsigned long long int) arr_8 [17U] [i_1] [2U]);
                    var_17 = ((/* implicit */long long int) arr_1 [i_2]);
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) arr_4 [i_2]);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            arr_13 [4ULL] [i_3] [i_3] = ((/* implicit */unsigned char) arr_0 [i_3] [i_0]);
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    {
                        var_18 = arr_18 [i_3] [i_3] [i_3];
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned int) arr_16 [i_3]);
                            arr_21 [i_3] [i_6] [i_6] [i_6] [i_6] [i_0] [(short)4] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_3] [i_3] [i_5]);
                            var_20 = ((/* implicit */long long int) arr_2 [i_4]);
                            var_21 ^= arr_19 [i_0] [i_5] [i_5] [i_4] [i_3] [i_3] [i_0];
                            var_22 |= arr_17 [3U] [i_3] [i_3] [i_3] [i_3];
                        }
                        var_23 = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0] [i_5]);
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 1; i_7 < 17; i_7 += 1) 
                        {
                            var_24 = arr_14 [i_3] [i_3] [i_7 - 1];
                            arr_26 [(unsigned short)4] [i_3] [i_3] [i_3] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_16 [i_3]);
                        }
                        var_25 -= ((/* implicit */signed char) arr_22 [i_0] [i_3] [i_0] [i_5] [i_4]);
                    }
                } 
            } 
            arr_27 [i_3] [i_3] = ((/* implicit */unsigned char) arr_11 [i_0] [i_3] [i_0]);
            arr_28 [i_0] [i_3] = arr_18 [i_3] [i_3] [i_3];
        }
        for (long long int i_8 = 4; i_8 < 15; i_8 += 4) 
        {
            arr_32 [i_0] [(unsigned char)6] [i_0] = ((/* implicit */short) arr_15 [i_8] [(short)2] [6U] [i_8]);
            arr_33 [(signed char)17] = ((/* implicit */long long int) arr_3 [i_0] [i_8 - 2]);
            arr_34 [i_0] = ((/* implicit */short) arr_22 [i_0] [i_0] [i_0] [i_0] [5ULL]);
        }
        for (unsigned long long int i_9 = 3; i_9 < 17; i_9 += 1) 
        {
            arr_39 [i_9] [i_9] = ((/* implicit */unsigned char) arr_12 [i_9]);
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_18 [i_0] [i_9] [i_0]))));
        }
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 18; i_10 += 2) 
        {
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) arr_20 [i_0]))));
            var_28 = ((/* implicit */unsigned short) arr_7 [i_10] [i_0] [i_0]);
        }
    }
    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
    {
        arr_45 [i_11] = ((/* implicit */int) arr_36 [4LL]);
        var_29 ^= ((/* implicit */unsigned char) arr_17 [i_11] [i_11] [i_11] [i_11] [i_11]);
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) 
        {
            for (unsigned int i_13 = 1; i_13 < 16; i_13 += 2) 
            {
                {
                    var_30 = ((/* implicit */int) arr_43 [i_11]);
                    var_31 *= ((/* implicit */signed char) arr_49 [i_11]);
                }
            } 
        } 
    }
    var_32 = ((/* implicit */int) var_3);
    var_33 = ((/* implicit */long long int) var_4);
    var_34 = ((/* implicit */short) var_8);
}
