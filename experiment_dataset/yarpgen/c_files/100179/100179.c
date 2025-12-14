/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_1 [22]);
        var_16 = (11186555903445517807 / 2868741130);

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_13 [i_1] [i_1] [19] = 1426226165;
                            arr_14 [i_1] [i_1] [i_2] [i_3] [i_3 - 1] [i_2] [i_4] = (arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]);
                        }
                        var_17 = (((arr_6 [11] [i_3]) ? 4294967295 : (arr_8 [i_1 - 1] [i_1 - 1] [i_1 + 1])));
                        arr_15 [i_1] [11] = ((-(arr_2 [i_2])));
                        var_18 = (max(var_18, 1426226165));
                        arr_16 [18] [i_1] [i_2] [i_2] [i_2] [i_3] |= ((var_2 / (arr_4 [i_1 + 1])));
                    }
                }
            }
            var_19 = (55096 ? (arr_2 [i_1 + 1]) : (arr_2 [i_1 - 1]));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_20 = ((var_0 | ((var_12 ? 87 : 2868741130))));
            arr_21 [i_0] [2] [i_0] = var_11;
            arr_22 [15] [i_5] = (((arr_6 [i_0 - 1] [i_0 - 1]) || (arr_6 [i_0 + 1] [i_0 + 2])));
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_21 = (min(var_21, 1426226177));
        var_22 = (max(var_22, (-32767 - 1)));
    }
    var_23 = (((((var_11 || 17233) && (((var_5 ? var_9 : -2348539693119630876))))) && var_1));
    #pragma endscop
}
