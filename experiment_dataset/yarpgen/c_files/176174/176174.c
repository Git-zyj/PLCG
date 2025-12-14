/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 |= (((max(var_16, (max((arr_1 [i_1] [i_0]), (arr_7 [i_0] [i_0] [i_2] [i_2])))))) ? (((max(-34, (var_13 != var_8))))) : (arr_5 [i_2] [2] [i_0]));
                    arr_8 [i_2] |= (-34 ? var_12 : (arr_5 [i_2] [i_1] [i_0]));
                }
            }
        }
        var_18 &= var_16;

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_13 [i_0] |= (((((arr_7 [i_0] [i_0] [i_3] [9]) ? (((arr_11 [i_0] [i_0] [i_3]) / 42)) : (arr_7 [i_0] [i_0] [i_3] [i_0]))) >> (((arr_1 [i_3] [i_0]) - 62474))));
            var_19 |= (arr_11 [i_0] [6] [i_0]);
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_20 = (min(((min(34, (arr_10 [i_0] [i_4])))), var_5));
            var_21 = ((((max((arr_2 [10]), (arr_5 [i_0] [i_4] [i_4])))) ? ((((arr_9 [i_0] [14]) != (arr_7 [i_0] [i_0] [i_0] [1])))) : (((arr_2 [i_0]) ? ((((arr_4 [i_0] [i_0] [i_4]) || (arr_4 [i_0] [i_4] [i_4])))) : var_11))));
            var_22 = (arr_9 [i_0] [i_0]);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_19 [i_5] [i_5] = var_6;
            arr_20 [i_0] [i_5] = -1521822137;
            var_23 ^= (arr_14 [i_0] [19] [i_5]);
            arr_21 [i_0] [i_5] [i_5] = (((((var_11 ? (!-1521822137) : (arr_1 [i_0] [i_0])))) ? (arr_16 [i_0] [i_5] [i_5]) : -30));
        }
    }
    var_24 ^= (!1);
    #pragma endscop
}
