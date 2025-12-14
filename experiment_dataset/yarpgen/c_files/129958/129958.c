/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0 - 1] [i_1] = ((!(arr_4 [i_0 - 1] [i_0 - 1])));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_14 = (max(-83, -2147483625));
                            var_15 = (((arr_9 [14] [i_1] [18] [4] [i_3] [19]) / (max((arr_1 [i_2]), (arr_11 [15] [10])))));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            var_16 = ((0 ? -20526 : (arr_1 [i_0])));
                            var_17 = (~-2147483623);
                            arr_15 [i_5] = ((~var_0) / var_7);
                            var_18 ^= (((-2147483601 && 32767) < -6));
                        }
                        var_19 = (min(var_19, (((!((max(5209079751449404242, 20530))))))));
                        arr_16 [i_0] [i_3] = (arr_10 [i_0 - 1] [i_3] [i_2] [i_3] [i_0]);
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        var_20 = ((min(11, 20524)));
                        arr_21 [2] [i_1] [i_6] [i_6] = (arr_8 [i_6] [i_2]);
                        var_21 = (max((~var_13), 20505));
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 3; i_8 < 20;i_8 += 1)
                        {
                            arr_26 [i_0] [14] [i_0] [i_8] = (-(((arr_9 [23] [i_1] [i_0 - 1] [i_1] [8] [i_0 - 1]) ? (arr_12 [10] [16] [i_0 - 1] [i_7] [i_0 - 1]) : (arr_9 [i_0] [i_1] [i_0 - 1] [i_1] [i_8] [i_8 - 3]))));
                            var_22 -= (max((arr_11 [i_7] [i_8 - 2]), (max((arr_11 [i_0 - 1] [i_1]), var_13))));
                            var_23 = (max(var_23, ((((arr_7 [21] [i_0 - 1] [i_0 - 1] [i_0]) ? (arr_18 [18] [i_2]) : (((-32767 - 1) ? 7 : 706723590733238369)))))));
                            var_24 -= (max(3067261619, 8176));
                        }
                        var_25 = ((((max((arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) | ((min((arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                        arr_27 [i_7] [i_2] [i_1] [i_0 - 1] = -9282;
                        var_26 = (max((((min((arr_17 [i_0] [i_1] [i_2] [i_0]), var_9)))), (((arr_18 [i_0] [i_1]) ? (max(var_6, (arr_5 [i_1] [i_7]))) : (arr_7 [1] [i_1] [i_2] [i_7])))));
                        var_27 = (max(var_27, var_11));
                    }
                }
            }
        }
    }
    var_28 = (min(4861, var_7));
    var_29 = var_10;
    #pragma endscop
}
