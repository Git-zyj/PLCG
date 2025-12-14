/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = (((((((arr_1 [i_0]) ? 255 : (arr_4 [i_0]))))) ? ((((arr_3 [4] [i_1] [i_1]) ? (arr_6 [i_0] [i_0] [i_2]) : 10))) : (((arr_2 [i_2]) & var_5))));
                    arr_9 [i_2] = (arr_1 [i_2]);

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_13 = var_4;
                        var_14 ^= ((((max((((arr_8 [8] [i_2] [i_1] [2]) ^ (arr_0 [i_2]))), ((var_7 ? (arr_3 [i_2] [i_1] [i_0]) : var_8))))) - (max(((var_11 ? (arr_2 [3]) : var_3)), (arr_3 [i_3] [i_2] [i_1])))));
                        var_15 = (min(var_15, ((min((((var_5 * 1333983983) ? ((((arr_1 [i_3]) ? var_2 : var_8))) : ((var_11 ? 10400140038662624270 : (arr_4 [i_2]))))), (((0 ? ((var_8 ? (arr_12 [i_2] [i_2]) : 1333984004)) : 255))))))));
                        arr_13 [i_2] [i_3] [i_3] [1] = ((((((!46) ? ((2147483643 ? var_5 : (arr_11 [i_2]))) : (((arr_6 [i_1] [i_3] [i_2]) ? 0 : 255))))) ? var_3 : ((((!var_11) ? 7546 : (!var_10))))));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_16 = 7144;
                        arr_18 [i_2] [i_2] [i_0] [i_4] = (((((((arr_3 [i_0] [i_1] [i_4]) ? (arr_10 [i_4] [i_2] [i_2] [i_1] [i_0]) : var_10)))) ? (arr_0 [i_4]) : ((7151 & (arr_15 [i_0])))));
                        var_17 = -44;
                        var_18 = (((~var_2) ^ ((((!(((57255 ? var_2 : (arr_4 [i_0]))))))))));
                    }
                }
            }
        }
    }
    var_19 = ((var_10 ? var_0 : var_3));
    #pragma endscop
}
