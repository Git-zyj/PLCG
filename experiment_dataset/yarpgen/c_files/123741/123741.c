/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = var_4;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_9 [i_2] = (min(((max((arr_8 [i_1 - 1] [i_1 + 1]), (arr_8 [i_1 - 1] [i_1 + 1])))), ((var_0 ? 94 : (arr_8 [i_1 - 1] [i_1 + 1])))));
                    var_10 = (min(((((((arr_5 [i_0] [5] [5]) ? -85 : var_5)) < ((max((arr_8 [6] [i_2]), var_1)))))), (arr_3 [i_2 + 1] [i_1 + 1])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_11 = ((~(arr_7 [i_3] [i_3] [i_3] [i_3])));
        arr_13 [i_3] = (112 >= 15673);

        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            var_12 |= ((var_7 ? (arr_15 [i_4 - 2] [i_4 - 1]) : (arr_1 [i_4 - 1])));
            var_13 = (min(var_13, (((~(arr_1 [i_4 + 1]))))));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_14 += ((var_2 ? var_5 : var_6));

            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                var_15 = (min(var_15, 1626567449));
                var_16 = 1626567458;
                var_17 = 231;
                arr_23 [i_3] [i_3] = 2;
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_18 = (((((((arr_17 [i_7]) >= 53164)))) | (arr_25 [i_5])));
                var_19 = (arr_5 [i_3] [1] [i_7]);
                arr_27 [14] |= (!(arr_7 [i_3] [i_3] [i_3] [19]));
            }
            arr_28 [i_3] [i_5] [i_3] = var_3;
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
        {
            var_20 = -var_1;
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    {
                        var_21 = (min(var_21, (arr_12 [i_10])));
                        var_22 = (arr_1 [i_3]);
                        var_23 = (max(var_23, (9763449849438308195 <= -116)));

                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            arr_41 [i_3] [i_3] [i_8] [i_3] [1] [i_11] = arr_29 [i_9 + 1] [i_9 + 1] [i_3];
                            var_24 = (arr_11 [i_3]);
                        }
                    }
                }
            }
            var_25 = ((-(arr_22 [i_3] [i_3])));
            var_26 = (arr_21 [i_3]);
        }
    }
    var_27 &= (max(((min((62644033 >= 79), (!var_5)))), 16));

    /* vectorizable */
    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        var_28 -= (arr_18 [i_12]);
        var_29 &= (!-3717525479363247047);
    }
    #pragma endscop
}
