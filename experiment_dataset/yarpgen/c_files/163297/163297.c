/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_16 = arr_0 [i_0];
        var_17 += var_2;
        arr_2 [i_0] = ((~(((((~(arr_0 [i_0])))) ? 5 : (!var_6)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] = var_2;
        var_18 = (var_12 | var_9);
        arr_8 [i_1] = var_7;
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            var_19 = ((-var_3 ? -1605065667 : 3540893708193105000));
            var_20 = ((~(arr_15 [i_2] [i_2] [i_3])));
        }

        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            var_21 = (min(var_21, ((max(3895381945, var_14)))));
            var_22 = (arr_16 [i_2] [i_2] [i_4 - 3]);
            var_23 *= ((-((-((var_6 ? 12581 : var_7))))));
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_24 *= -1;
            arr_20 [i_5] [i_5] = 7993265228631453138;
            var_25 = (arr_1 [i_2 + 2] [i_2 + 2]);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        var_26 = (((~-94) > (arr_17 [7] [i_5] [2])));
                        arr_25 [i_6] [i_6] |= ((!(arr_21 [i_2 + 2] [i_6] [i_2 + 2])));
                        arr_26 [i_2] [i_5] [i_5] [i_7 - 1] = var_12;
                    }
                }
            }
        }
        arr_27 [i_2 + 1] = var_12;
    }
    var_27 = (max(var_27, (((((min(888857115, ((var_14 ? var_13 : var_10))))) ? var_11 : var_14)))));
    #pragma endscop
}
