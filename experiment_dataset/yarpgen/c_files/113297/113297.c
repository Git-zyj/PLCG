/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_17 = (max(var_17, var_10));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = var_11;
                    var_18 = (max(var_18, -45));
                }
                arr_11 [i_1] [i_1] [i_1] = var_2;
                arr_12 [7] [i_1] [i_1] = ((((1358951304 ? (arr_2 [i_0]) : var_10)) - -1));
                arr_13 [i_1] = ((var_2 ? var_9 : -32));
            }
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                arr_16 [i_1] [i_1] = ((arr_15 [i_0] [i_0]) ? (arr_15 [i_0] [i_0]) : 8622904307708456079);
                var_19 = (arr_14 [i_0]);
            }
            var_20 = var_9;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_21 = (max(var_21, ((((arr_17 [23] [i_5] [i_6]) ? var_10 : var_8)))));
                            arr_26 [i_7] [i_7] [i_1] [i_1] [i_1] [i_1] [i_0] = (~453567996);
                        }
                    }
                }
            }
            var_22 *= var_10;
            var_23 += -var_6;
        }
        for (int i_8 = 1; i_8 < 22;i_8 += 1)
        {
            var_24 = (((0 ? -2222 : 67)));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_34 [i_10] [i_9] [i_8] [i_8] [i_9] [i_0] |= arr_30 [i_10];
                        arr_35 [i_9] [i_8] [i_8 + 2] [i_8] [i_0] = ((((((arr_31 [i_0] [i_0] [i_9] [i_8]) ? var_1 : var_12))) ? var_6 : var_11));
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
    {
        arr_38 [i_11] = var_15;
        var_25 = (((arr_6 [i_11]) ? (((((-127 - 1) <= (arr_6 [i_11]))))) : -3797422066797070442));
        var_26 ^= ((!(arr_4 [i_11] [i_11] [i_11])));
    }
    #pragma endscop
}
