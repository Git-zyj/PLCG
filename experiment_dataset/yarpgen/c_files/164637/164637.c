/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = (var_11 == var_10);
    var_15 = ((var_6 ? ((((1 ? var_11 : var_8)) >> (var_4 - 17075))) : 0));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((-(arr_1 [i_0] [i_0])))) ? ((0 + (arr_1 [i_0] [i_0]))) : 1));
        arr_3 [i_0] = (((arr_0 [i_0]) ? (max(var_6, (arr_0 [i_0]))) : (arr_0 [i_0])));
        var_16 = var_7;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] = (arr_6 [i_1]);
        arr_8 [7] = ((+(((((arr_6 [i_1]) + 2147483647)) >> (((arr_6 [i_1]) + 7209))))));
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_16 [i_3] = (~var_5);
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_21 [i_3] [8] [i_4] [i_4] [14] [i_3] = (max((min((arr_4 [i_2 + 2] [i_5 + 1]), var_6)), (((21 ? (arr_4 [i_2 + 1] [i_5 - 3]) : 248)))));
                                arr_22 [i_3] [5] [i_4] [i_3] [i_2] [i_3] = ((((!(arr_6 [i_2]))) ? (((arr_20 [i_2] [i_2 - 1] [i_3] [i_3] [i_2 - 1]) ? var_4 : var_1)) : var_11));
                                arr_23 [i_2] [i_2 + 1] [i_2 + 1] [i_3] = (min(((((207 && 9768695537807886173) || (4275560685 || 21)))), (min((!9302), var_2))));
                            }
                        }
                    }
                }
            }
        }
        arr_24 [6] |= ((((((var_3 ? var_2 : var_3)))) ? (arr_13 [i_2 + 3] [i_2] [12] [i_2]) : (min((((arr_11 [i_2] [i_2 - 1] [10]) ? var_11 : (arr_18 [2] [i_2] [i_2] [i_2]))), ((((arr_4 [i_2] [3]) << (((var_9 + 8837) - 16)))))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    var_17 = ((((-(((arr_11 [i_2] [i_2] [i_8]) ? var_4 : var_0)))) >= ((3 ? 0 : 9302))));
                    arr_29 [i_8] = (((((((34402 ? (arr_27 [i_8] [i_7]) : 1)) + 2147483647)) << (((var_4 >> var_5) - 17080)))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_18 = (max((((arr_27 [i_8] [i_2 + 1]) ? (!0) : (var_2 / var_9))), (((+(max((arr_17 [i_7] [i_9] [i_8] [i_9] [i_10]), var_0)))))));
                                var_19 *= var_2;
                                var_20 = (min(var_20, (arr_15 [i_2] [i_10] [i_2] [i_2])));
                            }
                        }
                    }
                    arr_36 [i_8] = ((((((((var_11 ? 0 : (arr_15 [i_2] [i_8] [i_2] [5])))) ? ((((arr_0 [i_2]) ? 60 : (arr_1 [i_2] [i_7])))) : ((2458234451 << (13020899264563087965 - 13020899264563087947)))))) ? ((((!(arr_28 [i_2 + 3] [i_2 - 1] [i_8]))))) : (min(((min((arr_6 [i_7]), 183))), (min(-8192, (arr_0 [i_2])))))));
                }
            }
        }
    }
    var_21 = (((~((var_11 ? 21 : var_5)))));
    #pragma endscop
}
