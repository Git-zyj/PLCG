/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_16 *= ((((min(18070, 65534))) | -1242429311386864626));
                var_17 = 1;
                var_18 = ((((((!4607182418800017408) ? (arr_2 [i_0] [i_0]) : var_0))) ? var_0 : (arr_6 [i_0] [i_1 - 2])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_19 = var_10;
                    arr_16 [1] [i_3] [i_4] = ((1 ? 65506 : 65507));
                }
            }
        }
    }
    var_20 = var_11;

    /* vectorizable */
    for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] = (arr_1 [16]);
        var_21 = ((var_12 / (arr_4 [i_5] [i_5] [i_5])));
        var_22 = (min(var_22, (((2147483647 ? 1 : 1)))));
        var_23 -= (((arr_9 [i_5 + 1]) ? (((var_11 ? -2147483637 : -32765))) : 9223372036854775807));
    }
    for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = (arr_20 [i_6]);
        arr_23 [i_6] = (((~32763) ? (arr_15 [i_6 + 2]) : ((~(arr_15 [i_6 + 1])))));
        var_24 = var_0;
        var_25 = ((!(((~(arr_21 [i_6 + 1] [i_6 + 1]))))));
        var_26 = (min(var_26, (((3 ? (arr_21 [i_6] [i_6]) : ((max((arr_21 [i_6 + 2] [i_6 - 1]), (arr_2 [i_6 - 1] [i_6])))))))));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 8;i_10 += 1)
                {
                    {
                        var_27 = -105;
                        arr_34 [i_7] [i_7] [i_9] [i_7] [1] = ((!(-105 & 6096536160705271186)));
                        var_28 = (arr_17 [i_7 - 1] [i_7 + 2]);
                        arr_35 [i_7 - 1] [i_7] [i_9] = 1674668201;
                    }
                }
            }
        }
        arr_36 [11] = (arr_13 [i_7] [i_7 + 2] [i_7] [i_7 - 1]);
    }
    #pragma endscop
}
