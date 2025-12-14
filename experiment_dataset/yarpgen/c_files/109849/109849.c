/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_1 + 1] = (((var_11 ? var_7 : 429545065)));
            var_16 = ((15 ? 1 : -16));
            arr_8 [i_1 - 1] [i_0] [i_0] = ((~(var_0 & var_7)));
        }
        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            var_17 = (((arr_3 [i_0 - 2] [i_2 - 3] [i_0 - 2]) ? (8374685802090177950 / 4324221582939387679) : -16));
            var_18 = (((max(18239272043102238725, -16)) * (((var_9 ? 23518 : (arr_4 [i_2] [i_2 + 1] [i_0 + 2]))))));
        }
        var_19 = (min(((~(max(var_4, 11121)))), (((((1 ? (arr_11 [i_0]) : var_8))) ? (arr_0 [i_0]) : var_4))));
    }
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            {
                var_20 = ((!(((1 ? (arr_12 [i_3 - 2] [i_3 + 1]) : (((-69668950 ? var_5 : (arr_3 [i_3] [i_3 - 1] [i_4])))))))));

                /* vectorizable */
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    var_21 = (arr_10 [i_5 + 1] [i_5 + 1] [i_5]);
                    var_22 = var_10;
                    var_23 = (arr_3 [i_4 - 1] [i_4 - 1] [i_4 - 1]);
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_24 = ((((((((1 ? (arr_11 [i_3]) : (arr_2 [i_4])))) ? (arr_6 [i_3 - 4] [i_3 - 4]) : 148))) ? (max(((var_12 ? var_14 : var_6)), ((min(117, -115))))) : (((arr_21 [i_4] [i_4 - 1] [i_4] [i_4 - 1]) - var_11))));
                    var_25 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
