/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132007
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
    var_19 = ((/* implicit */short) var_11);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_20 &= ((/* implicit */unsigned long long int) var_11);
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_18)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            arr_9 [i_1] [i_2] = ((/* implicit */signed char) (-(arr_0 [i_1 - 1])));
            /* LoopNest 3 */
            for (long long int i_3 = 2; i_3 < 22; i_3 += 2) 
            {
                for (short i_4 = 3; i_4 < 23; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            arr_17 [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_5])))) : (var_16)));
                            arr_18 [i_3] [i_4] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) + (arr_12 [i_1 - 1] [i_1 - 1] [i_3])));
                            arr_19 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_1])) ^ (((/* implicit */int) (short)-22546))));
                            arr_20 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)28733)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)-13002)))));
                            arr_21 [(signed char)15] [i_1] [(signed char)15] = ((/* implicit */signed char) var_12);
                        }
                    } 
                } 
            } 
        }
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_14))));
        var_22 += ((long long int) arr_8 [(short)0]);
        arr_22 [12] &= ((/* implicit */_Bool) ((arr_4 [i_1 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1]))) : (arr_15 [i_1 - 1] [i_1 - 1] [i_1])));
    }
    for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        var_23 = ((/* implicit */long long int) 3895686089U);
        var_24 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_5 [i_6] [i_6] [i_6])) || (((/* implicit */_Bool) var_16)))), (((var_7) || ((!(var_12)))))));
    }
}
