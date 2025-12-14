/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123139
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_12 *= ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_2]);
                        var_13 = ((/* implicit */unsigned short) var_11);
                    }
                } 
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */short) arr_5 [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        arr_14 [i_4] [i_4] = var_0;
        var_14 = ((/* implicit */signed char) arr_11 [i_4]);
    }
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        arr_17 [i_5] = min((((/* implicit */int) ((max((((/* implicit */int) var_8)), (var_1))) != (((/* implicit */int) min((arr_1 [i_5]), (arr_1 [i_5]))))))), (((((/* implicit */int) arr_15 [i_5])) + (((/* implicit */int) var_11)))));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned char) arr_6 [i_5] [i_5] [i_5]))), (((arr_6 [i_5] [i_5] [i_5]) / (arr_6 [i_5] [i_5] [(signed char)18]))))))));
        arr_18 [i_5] [10LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_3 [i_5] [i_5]), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((arr_3 [i_5] [i_5]) * (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((arr_8 [(unsigned char)2] [i_5] [i_5] [(signed char)10] [(signed char)1] [i_5]) ? (((/* implicit */int) ((unsigned char) var_10))) : (((/* implicit */int) var_3))))) - (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_3 [i_5] [i_5]))) / (min((((/* implicit */unsigned int) var_2)), (arr_3 [19] [19])))))));
    }
    var_17 = ((/* implicit */unsigned long long int) var_1);
}
