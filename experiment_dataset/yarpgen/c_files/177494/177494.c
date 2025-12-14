/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_0);
    var_20 = -30716;
    var_21 = 30716;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] &= ((((~((~(arr_0 [i_0] [i_0]))))) + ((((!255) < (max(-5298670587047193128, (arr_1 [i_0]))))))));
        var_22 = ((-((((((((30737 ? (-9223372036854775807 - 1) : 34842)) + 9223372036854775807)) + 9223372036854775807)) << (!30693)))));
        var_23 ^= var_6;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_24 &= -15782;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_12 [i_1] [i_2] = 125;
                        var_25 = ((-((-(arr_6 [i_1])))));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_15 [i_5] [i_3] [15] [i_2] [i_1] [i_1] = (var_12 ? (((-(arr_8 [i_3] [i_5])))) : ((-(((arr_13 [13] [13]) ? var_0 : 33918)))));
                        var_26 = (((((((var_13 != (arr_1 [i_5]))) ? (((arr_9 [i_1] [i_1] [i_3] [i_1]) ? 0 : -57)) : ((30694 ? (arr_6 [i_1]) : var_14))))) ? (((-(((!(arr_9 [i_2] [i_2] [i_3] [i_2]))))))) : ((3086213082 ? (max((arr_10 [i_5] [10] [i_2] [i_1] [i_1]), 550818659)) : (((-(arr_0 [i_2] [i_3]))))))));
                    }
                    arr_16 [i_1] [i_2] [i_3] &= (!var_0);
                }
            }
        }
    }
    #pragma endscop
}
