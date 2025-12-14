/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = var_4;
        var_13 = ((var_6 ? (arr_0 [i_0]) : (arr_1 [i_0])));
        var_14 = arr_1 [i_0];
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_15 = (0 ? 349 : (arr_10 [i_1] [i_2] [i_2]));
                    var_16 = (min(var_16, (arr_1 [i_3])));
                }
            }
        }
        var_17 = (((arr_10 [2] [i_1] [i_1]) ? (arr_11 [i_1] [10] [i_1]) : (arr_13 [i_1] [i_1] [5] [i_1])));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = var_9;
        var_18 = arr_9 [i_4] [i_4];
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_19 = var_8;
                    arr_23 [i_4] [i_5] [i_6] = (((arr_13 [i_4] [i_5] [i_6] [i_4]) ? (arr_6 [i_4]) : var_9));

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_20 = (arr_0 [i_4]);
                        var_21 = (max(var_21, (arr_21 [i_4] [i_4] [i_7])));
                        var_22 -= (arr_12 [i_4] [i_5] [i_6] [1]);

                        for (int i_8 = 4; i_8 < 12;i_8 += 1)
                        {
                            var_23 *= (((arr_18 [i_8 + 1] [i_8 - 1] [i_8 - 2]) ? ((((arr_26 [i_4] [10] [i_4] [10] [i_4] [i_4] [i_4]) ? (arr_6 [i_7]) : (arr_29 [i_5] [i_5] [i_6] [i_5] [i_8 - 4])))) : (arr_8 [i_4] [i_5] [i_8])));
                            var_24 = (arr_22 [i_6] [i_5] [i_4]);
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_25 = (arr_2 [i_6] [i_9]);
                            var_26 |= (arr_22 [i_4] [i_5] [i_4]);
                            var_27 = (arr_12 [i_4] [i_5] [i_6] [i_6]);
                            var_28 = (min(var_28, (arr_8 [i_4] [i_7] [i_9])));
                        }
                    }
                }
            }
        }
        var_29 = (arr_6 [i_4]);
    }
    var_30 = var_11;
    #pragma endscop
}
