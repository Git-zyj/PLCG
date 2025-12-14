/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 |= ((-(((arr_0 [i_0] [i_0]) ? var_5 : (arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            var_13 = ((~((var_8 ? (arr_1 [i_0]) : -6946))));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_14 = (((arr_8 [i_1] [i_3] [i_4 - 1]) ? ((((arr_2 [4]) && var_8))) : (var_6 == var_7)));
                            var_15 = ((((((arr_2 [i_0]) ? var_5 : var_1))) >= (arr_8 [i_2 - 1] [i_2 - 1] [i_1])));
                            arr_14 [i_4] = (((((var_9 * (arr_8 [i_4] [i_3] [i_1])))) ? (((arr_4 [i_0] [i_1] [i_1]) ? (arr_9 [0] [i_1] [i_2] [i_2] [i_3 + 1] [i_4]) : var_7)) : (!var_8)));
                            arr_15 [i_0] = var_1;
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_16 = var_0;
            var_17 += 6932;
        }
        var_18 = (((-116 ? 116 : (arr_6 [i_0] [i_0] [14]))));
        arr_19 [i_0] = (arr_9 [i_0] [19] [i_0] [i_0] [i_0] [0]);
    }
    var_19 = var_7;
    #pragma endscop
}
