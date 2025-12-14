/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (55267 ^ 12124472450576240204)));
    var_17 = (min(var_17, (max(var_10, var_9))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = ((65142 ? 1 : var_15));
        var_18 = (arr_2 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_9 [i_1] [i_1] [i_0] = (arr_7 [i_0]);
            arr_10 [i_0] [i_1] = var_6;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    {
                        var_19 *= ((((var_8 ? var_10 : var_11)) ^ 1));
                        var_20 = (max(var_20, ((((arr_11 [i_1] [i_3 + 1] [i_2] [i_2 + 1]) ? 1 : ((var_4 ? 1 : 1)))))));
                    }
                }
            }
            arr_15 [i_1] [i_0] = (arr_13 [i_0] [i_1] [i_0] [i_0]);
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            arr_19 [i_4] = (((1 > (arr_0 [i_0]))) || ((((arr_11 [i_4] [i_4] [i_0] [i_4]) | var_1))));
            arr_20 [i_0] = (arr_13 [i_0] [i_4] [i_4] [i_0]);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_21 *= 1;
                            arr_30 [i_7] [i_6] [i_5] [i_4] [i_0] = var_3;
                        }
                    }
                }
            }
            arr_31 [i_0] = (((arr_26 [i_4] [i_4] [i_0]) >= 51));
        }
        for (int i_8 = 1; i_8 < 7;i_8 += 1)
        {
            arr_35 [i_0] [i_0] [i_8] = var_7;
            arr_36 [i_0] = (((arr_11 [i_0] [i_8] [i_8] [i_8 - 1]) ? 0 : (arr_11 [i_0] [i_0] [i_8] [i_8 + 2])));
            arr_37 [i_0] = ((var_5 ^ (arr_5 [i_8 - 1])));
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        var_22 = ((var_15 <= (arr_39 [i_9])));
        arr_41 [i_9] [i_9] = (arr_38 [i_9]);
        arr_42 [i_9] &= (arr_38 [i_9]);
    }
    #pragma endscop
}
