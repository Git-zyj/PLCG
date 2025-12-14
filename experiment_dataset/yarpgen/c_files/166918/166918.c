/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(var_2, var_4))) & (((((var_15 ? 1 : 103)) & var_10)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 |= ((var_8 ? (arr_2 [1]) : ((~(arr_2 [24])))));
        arr_3 [i_0] = var_2;
    }

    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_18 = ((1878748026 ? (max(((var_2 ? var_6 : 1)), var_13)) : ((((arr_1 [i_1]) ? var_8 : (arr_2 [i_1]))))));
        var_19 = (min(var_19, ((((~(!var_14)))))));
        var_20 = (arr_6 [i_1]);
        var_21 = (max((arr_0 [i_1]), (arr_4 [i_1])));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_22 = (min((arr_5 [i_2]), (arr_4 [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    arr_17 [6] [10] [i_4] |= ((min(((var_12 ? var_10 : (arr_9 [i_2]))), ((1288243119 ? 1 : 3006724176)))));
                    var_23 = (min((11240 & 2825084002), var_14));
                }
            }
        }
        var_24 = (arr_4 [9]);
        arr_18 [9] [12] = max(var_9, (arr_5 [4]));
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        var_25 *= (-1288243120 ? 1 : 572074);
        var_26 = (min(var_26, (((((max((arr_1 [i_5]), ((((arr_19 [3]) ? var_3 : var_5)))))) ? (min((~var_13), (arr_21 [i_5]))) : (((min(var_13, (arr_2 [18]))))))))));
        var_27 |= ((((max(33055, var_10))) ? (arr_1 [i_5 - 1]) : (min(var_13, (min(1288243120, 3006724163))))));
    }
    #pragma endscop
}
