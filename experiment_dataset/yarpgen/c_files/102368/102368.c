/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((1 % (max(40199, var_7))));
    var_14 = 126;

    for (int i_0 = 4; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = ((((max(var_12, var_4))) ? -433347095 : (!12)));
                    var_16 = (-1 >= 40199);
                }
            }
        }
        var_17 = ((((((((arr_6 [i_0] [i_0] [i_0]) ? 7 : var_9)) + var_5))) ? (arr_4 [i_0]) : (min(-1190086816, var_7))));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (arr_4 [i_3 - 4])));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 23;i_5 += 1)
            {
                {
                    arr_16 [i_3 - 3] [16] [i_4] [i_5] = (~11);
                    var_19 = (max(var_19, ((((~(arr_15 [15] [i_4] [i_3]))) - var_6))));
                    arr_17 [i_3] [6] [i_5 - 2] [i_4 + 1] = ((var_0 >= (14 == 2147483647)));
                    arr_18 [i_3] [1] [4] [i_5] = ((((var_5 ? var_1 : -53))) ? (arr_2 [i_3 - 4] [i_4 - 3]) : (arr_9 [i_3] [i_3 + 1] [i_3]));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_20 = (arr_5 [i_3 + 3] [i_6] [i_6]);
                    var_21 *= var_2;
                    var_22 -= var_3;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                arr_30 [i_6] [i_9] = var_11;
                                arr_31 [i_3 + 1] [i_3 + 1] [i_3] [i_7] [i_8] [i_3 + 1] &= (arr_6 [i_3] [i_7] [i_9]);
                            }
                        }
                    }
                }
            }
        }
        arr_32 [i_3 + 2] = (var_4 != 25335);
        var_23 = (min(var_23, var_2));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 18;i_10 += 1)
    {
        var_24 = (max(var_24, -1797622047));
        var_25 = (max(var_25, (arr_35 [i_10 + 2] [i_10 - 1])));
    }
    for (int i_11 = 3; i_11 < 11;i_11 += 1)
    {
        var_26 = (max(var_26, (((((var_5 ^ var_10) ^ -29365))))));
        arr_38 [i_11 + 2] [3] = (arr_27 [i_11 + 1] [i_11 + 1] [i_11] [i_11] [1]);
        arr_39 [i_11] = 29;
    }
    #pragma endscop
}
