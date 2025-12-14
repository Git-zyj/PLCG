/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (665333418 ^ 4294967295);
                var_15 = ((max(((((arr_0 [i_0]) > (arr_3 [i_0] [i_1] [i_1])))), ((12454 ? 2147483647 : 4294967292)))));
                arr_4 [i_1] = ((~((var_13 ? (arr_1 [i_0]) : (min(var_0, var_9))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_10 [i_2] = var_13;
            arr_11 [i_3] [i_2] [16] = (arr_9 [0] [i_3] [4]);
            arr_12 [i_2] [i_2] [i_2] = (~(arr_5 [i_2]));

            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                arr_17 [i_2] [i_2] [5] [i_2] = (arr_13 [i_4 + 3] [i_4] [i_4 - 1]);
                arr_18 [i_2] [i_2] [i_2] [i_4] = (((arr_13 [i_4 + 1] [i_4 + 3] [i_4 + 1]) * (arr_13 [i_4 - 1] [i_4 + 2] [i_4 + 3])));
                var_16 = (arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1]);
            }
        }
        var_17 = ((~(arr_7 [i_2])));

        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 22;i_7 += 1)
                {
                    {
                        arr_26 [i_2] [i_5] [i_6] [i_2] [i_7 - 3] = ((var_11 ? (arr_22 [i_7 + 1] [i_7 + 1] [i_7 - 4] [i_7 - 2]) : (arr_22 [i_7 - 2] [i_7] [i_7 - 3] [i_7 - 3])));
                        var_18 = ((((((arr_15 [i_2] [i_2] [i_6]) ? (arr_7 [5]) : var_10))) ? (arr_22 [i_7 - 4] [i_7 - 4] [i_7] [i_7 - 4]) : (arr_23 [i_2] [i_2] [i_2])));
                    }
                }
            }
            arr_27 [i_2] [i_5] = (arr_9 [i_5] [i_2] [i_2]);
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 1; i_9 < 22;i_9 += 1)
            {
                arr_34 [i_2] [20] [i_2] = (var_4 ? ((~(arr_24 [i_2] [i_2]))) : (!0));
                var_19 = (arr_25 [i_9 + 1]);
                var_20 = (var_13 & (~var_3));
            }
            var_21 = ((var_10 ? (arr_22 [i_2] [i_2] [i_8] [i_8]) : (arr_22 [i_2] [i_2] [i_2] [i_2])));
        }
    }
    var_22 = (((((var_6 ? (!var_12) : var_4))) ? (((~4294967295) ? var_6 : var_12)) : var_9));
    var_23 = 0;
    #pragma endscop
}
