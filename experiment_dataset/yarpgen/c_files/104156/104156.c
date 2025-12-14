/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_14 = (((arr_0 [i_0] [i_0]) | (arr_0 [i_0] [i_0])));
        var_15 = ((var_12 ? 1184702687 : 64679));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_16 = (0 >= 1);
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_17 = ((+(max((arr_10 [i_3] [i_2 + 3] [i_2 + 3] [i_3 + 1]), var_4))));
                        var_18 = 1;
                    }
                }
            }
        }
        var_19 = (min(((min((arr_10 [i_1] [i_1] [i_1] [i_1]), (arr_10 [i_1] [i_1] [i_1] [i_1])))), ((0 ? 1422323127409147676 : (((max((arr_7 [i_1] [i_1] [i_1]), (arr_10 [i_1] [i_1] [i_1] [i_1])))))))));
        var_20 = ((~((max((max(var_10, (arr_10 [i_1] [i_1] [i_1] [i_1]))), (max((arr_9 [i_1] [i_1]), var_5)))))));
        var_21 = (min(var_12, (max(var_10, (arr_5 [i_1] [i_1] [i_1])))));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_22 = (((((var_12 & ((1 ? -3 : 9223372036854775807))))) ? (((~0) / -3)) : 9));
        var_23 = ((-(((var_4 && (!var_0))))));
        var_24 = (min((arr_6 [i_5] [i_5] [i_5]), (((var_13 ? -var_8 : (arr_1 [i_5]))))));
        var_25 = ((-9223372036854775807 ? var_0 : (arr_4 [i_5] [i_5] [i_5])));
        var_26 = max(((((arr_6 [i_5] [i_5] [i_5]) ? var_2 : var_8))), ((-3458741081658727635 ? var_6 : (arr_6 [i_5] [i_5] [i_5]))));
    }
    var_27 = (max(var_6, var_6));
    #pragma endscop
}
