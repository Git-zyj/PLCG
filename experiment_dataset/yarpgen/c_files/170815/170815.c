/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((65535 ? (((~(arr_0 [i_1] [i_1 + 1])))) : (((((arr_3 [i_0]) <= 2147483639)) ? (((min(var_0, var_9)))) : 18446744073709551615))));
                arr_8 [i_0] = ((max((123 / var_8), (min(var_2, 18446744073709551615)))) - ((((!((((arr_6 [i_0] [i_0]) ? (arr_1 [i_1]) : (arr_5 [i_0] [i_0])))))))));
                var_12 = (max(var_12, ((((((1 ? (arr_5 [i_1 - 1] [i_1 - 1]) : (arr_5 [i_1 - 2] [i_1 - 2])))) <= (max(1, 18446744073709551615)))))));
                arr_9 [i_0] = var_0;
            }
        }
    }
    var_13 = (min(127, var_3));
    var_14 = ((((min((var_3 / var_2), var_6))) ? var_10 : ((var_9 ? ((min(var_2, var_11))) : ((18446744073709551612 ? 18446744073709551615 : var_11))))));

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                {
                    arr_20 [i_3] [2] = (max(var_6, (((18446744073709551615 ? 65529 : 2147483647)))));
                    arr_21 [i_2] [i_3 + 1] [i_2] = (max((((127 != 65535) ? (max(var_4, var_6)) : ((((arr_12 [i_2]) - var_9))))), (arr_13 [i_4 - 2] [i_4 + 3])));
                }
            }
        }
        var_15 = (((((arr_13 [i_2] [i_2]) << (((arr_19 [i_2] [i_2] [i_2] [i_2]) - 54609)))) & var_0));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        arr_24 [i_5] [i_5] = (((arr_23 [i_5]) | var_9));
        var_16 = ((~(((arr_22 [i_5]) / var_0))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_32 [i_5] = (arr_29 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_6]);
                        arr_33 [i_8] = -1;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
    {
        var_17 = ((((var_1 ? var_3 : var_11)) ^ var_8));
        var_18 = -115;
        arr_36 [i_9] [i_9] = ((arr_35 [i_9]) ? (arr_35 [i_9]) : var_4);
        var_19 = (1 != 18446744073709551615);
    }
    #pragma endscop
}
