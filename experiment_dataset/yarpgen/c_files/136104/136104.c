/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max(var_1, var_1))) | (max((max(var_4, (-9223372036854775807 - 1))), var_4))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_12 = (max(9223372036854775807, -113));
        arr_4 [i_0] = (arr_3 [i_0 - 1]);
        var_13 = (max(var_13, ((max((!25), ((((-6 ? var_3 : var_1)) < 4129485725)))))));
        var_14 = ((((!(arr_1 [i_0 - 1] [5])))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_15 = (max(var_15, ((min((~-8224530907141843710), var_6)))));
        arr_8 [i_1] = (min((((-37308032649321718 + 829951703985835531) + (arr_6 [i_1] [i_1]))), (max((((arr_5 [i_1] [10]) ? (arr_7 [i_1]) : var_4)), (arr_6 [i_1] [7])))));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_16 += ((((max((arr_6 [i_1] [i_2]), (arr_6 [i_1] [i_2])))) ? -2147483631 : (arr_6 [i_1] [i_2])));
            var_17 = (max(var_17, var_5));
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_18 = ((((((var_6 ? var_3 : 7))) ? var_7 : var_10)) ^ (((((((arr_13 [i_3] [8]) ? (arr_11 [i_3] [i_3]) : 77)) > ((var_5 ? var_1 : var_7)))))));
        arr_15 [i_3] = ((((~(arr_6 [i_3] [i_3])))) ? (arr_11 [i_3] [i_3]) : (max(9223372036854775807, ((121584694221155592 ? var_0 : var_5)))));
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_22 [i_3] [12] [i_5] [i_5] [5] = var_8;
                        var_19 += (var_9 / (arr_12 [i_5]));
                        arr_23 [i_3] [i_4] [i_4] [2] [i_5] [i_5] = 995318587493874955;
                    }
                }
            }
        }
        var_20 = -8224530907141843685;
        arr_24 [i_3] [i_3] = (~1162877359);
    }
    #pragma endscop
}
