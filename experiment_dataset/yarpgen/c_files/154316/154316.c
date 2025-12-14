/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 = ((((152 >= 0) ? ((15 ? -8592 : -28)) : var_1)));
        var_11 = (max(var_11, (arr_1 [i_0])));
        var_12 = ((!((-42 >= (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_13 -= (min((((!((max(var_7, var_9)))))), ((((1 ? var_9 : var_4)) + ((var_5 ? var_5 : -28))))));
            arr_7 [i_1] = ((min(15, (arr_4 [i_1]))));
            var_14 = (min(var_14, var_1));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_11 [i_0] [i_2] [i_0] = (((var_7 >= var_3) ? ((var_7 ? 68 : ((-28 ? 3 : var_6)))) : (!-var_7)));
            var_15 = (max(var_15, -28));
        }
    }
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        arr_14 [i_3] = -0;

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_17 [i_4] [i_4] = (max(((var_6 ? var_8 : (max(var_6, 1)))), (((arr_13 [i_3 + 1] [i_3 - 2]) & 0))));
            var_16 = (~12702998332597188617);
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_17 = ((30599 ? ((var_9 ? var_9 : 1)) : ((-113 ? 41799 : 0))));
            arr_20 [i_3] = (arr_3 [i_5 - 2] [i_5 - 2]);
        }
        for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_18 = (((((-1460408897619339755 ? 1 : var_7))) + ((126 ? var_6 : 5))));

            for (int i_7 = 3; i_7 < 9;i_7 += 1)
            {
                var_19 = var_4;
                var_20 = (((((((min(var_4, 5599963230465371576))) ? 222 : -2535))) ? (((-9223372036854775807 - 1) ? 124 : ((66 ? (arr_19 [i_3]) : 1)))) : ((var_8 ? var_2 : 33))));
                var_21 = (max(var_21, var_6));
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                {
                    var_22 = ((((((~var_2) ? var_5 : (arr_23 [i_9])))) ? 64289 : (((!1) ? var_6 : (~var_8)))));
                    var_23 = var_5;
                    arr_34 [i_9] [i_8 - 2] [i_9] = (min(var_8, (((((58906 ? 2092289639 : -117)) >= (arr_23 [i_9]))))));
                    arr_35 [i_9] [9] [i_8] [i_9] = ((var_7 ? ((107 + (((1 >= (arr_28 [i_3 - 2] [i_8])))))) : var_5));
                }
            }
        }
    }
    var_24 = 63;
    #pragma endscop
}
