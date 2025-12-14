/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_8;
        arr_4 [i_0 - 1] = arr_1 [i_0];
        var_10 = -248;
        var_11 = -369388691537404360;
        var_12 = ((var_3 ? -369388691537404362 : var_3));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_13 = (arr_6 [i_1] [i_1]);
        var_14 = (-369388691537404357 & 36578);
        arr_7 [i_1] = (arr_5 [i_1 - 1] [i_1 - 1]);
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_15 = (max((((arr_6 [i_3] [i_3]) ? (arr_9 [i_2]) : var_6)), (((((max(var_0, (arr_0 [i_3])))) ? var_4 : (arr_10 [i_2] [i_2]))))));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_19 [i_4] [i_5] [i_5] [i_5] = var_2;
                        var_16 = (((arr_18 [i_5] [i_3]) ? (arr_1 [i_2]) : (arr_18 [i_2] [i_3])));
                        var_17 = ((!(((arr_5 [i_3] [i_2]) == (var_3 >= 18128)))));
                        arr_20 [i_4] = ((~(arr_8 [i_2] [i_3])));
                    }
                    arr_21 [i_4] [i_4] [i_4] [i_4] = ((!(~369388691537404371)));
                }
            }
        }
    }
    #pragma endscop
}
