/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((+(((var_0 + 2147483647) << (1 - 1)))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_16 = (max(var_16, ((min(var_4, ((0 ? 65527 : (max((arr_1 [i_0] [i_0]), 1085191498)))))))));
        var_17 = var_11;
        arr_3 [i_0] = (min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [6] [i_1] [6] = (arr_6 [i_1] [i_0 - 1] [i_1 + 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = ((~(~var_7)));
                                arr_15 [5] [5] [5] [i_3] [i_4] [5] [i_3] = (min((arr_9 [i_0] [2] [i_0] [i_0]), 16));
                                var_19 = (min(var_19, (arr_11 [i_1])));
                            }
                        }
                    }
                    var_20 = ((((min(((min((arr_2 [i_0] [i_0]), var_6))), var_3))) || (((max(var_3, 1940828857))))));
                    var_21 |= (((arr_2 [i_0 + 1] [i_1 + 3]) ? (arr_2 [i_0 + 1] [i_1 + 1]) : ((16 ? -1085191498 : (arr_2 [i_0 + 1] [i_1 + 1])))));
                }
            }
        }
        var_22 *= (arr_14 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]);
    }
    for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] [i_5] = max(((min((arr_5 [11] [i_5]), var_12))), ((((arr_4 [i_5]) | ((((arr_10 [i_5] [i_5] [i_5]) > -399751356)))))));
        var_23 = ((1713500380 ? var_0 : 53));
        arr_19 [i_5] = (((42 ^ ((max(var_7, (arr_17 [i_5] [i_5])))))));
        arr_20 [i_5] [i_5] = ((var_4 ? (arr_1 [i_5] [i_5]) : (-1836454925 + 1085191497)));
        var_24 = (min(var_24, (((max(168, -1713500381))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_25 += (((arr_21 [i_6]) ? (arr_22 [i_6] [i_6]) : (arr_22 [i_6] [i_6])));
        var_26 = (arr_21 [i_6]);
        var_27 = (((arr_21 [i_6]) / ((var_9 ? 32 : (arr_21 [i_6])))));
    }
    var_28 = (min(var_28, (((!(((~35) < 0)))))));
    #pragma endscop
}
