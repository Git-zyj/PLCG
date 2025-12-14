/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11860
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
    var_20 = ((/* implicit */unsigned int) var_8);
    var_21 = ((/* implicit */unsigned int) var_9);
    var_22 = ((/* implicit */int) var_10);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_23 = arr_1 [i_1] [i_2];
                        var_24 = ((/* implicit */unsigned int) arr_5 [i_0] [i_0]);
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [(short)13] [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_6 = 1; i_6 < 20; i_6 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned short) arr_8 [i_0] [(short)1] [i_4] [i_5] [i_6]);
                        var_27 = ((/* implicit */long long int) arr_12 [i_0] [(_Bool)1] [i_5]);
                        var_28 = ((/* implicit */short) arr_3 [1LL] [i_4]);
                        arr_21 [i_0] [i_5] [i_5] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_16 [i_4] [i_6]);
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) arr_5 [(unsigned char)12] [(signed char)3]))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        arr_24 [i_0] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
                        var_30 |= arr_20 [i_7] [i_5] [i_4] [i_0];
                        var_31 = ((/* implicit */long long int) arr_19 [19LL]);
                    }
                    arr_25 [i_0] [(unsigned short)12] [18LL] |= ((/* implicit */unsigned int) arr_10 [i_0] [0U] [13LL] [4U] [i_0] [18U]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                {
                    var_32 = ((/* implicit */long long int) arr_14 [i_9]);
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        for (long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned int) arr_9 [i_9] [i_9] [i_9] [i_10] [i_11]);
                                arr_35 [i_0] [i_11] [8U] [i_0] = ((/* implicit */_Bool) arr_28 [3U] [i_0] [(unsigned short)7]);
                                var_34 = ((/* implicit */int) arr_2 [i_11] [7LL]);
                            }
                        } 
                    } 
                    arr_36 [i_0] [i_0] [i_9] [i_8] = ((/* implicit */signed char) arr_0 [i_0]);
                }
            } 
        } 
    }
}
