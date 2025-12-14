/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((367805894770400760 ? (min(var_0, var_11)) : (var_10 >= 0)))) ? (((((10955 ? var_7 : 60796)) == (((var_1 ? var_9 : var_4)))))) : var_4));

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = 255;
            arr_4 [i_0] [i_1] = ((var_11 ? 822485789 : (1 || 49379)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_0] = ((4294967276 ? (11 > 18078938178939150850) : 678219323));
                        var_15 = (arr_1 [i_0 + 1] [i_0 + 1]);
                        var_16 *= (~1);
                        arr_12 [i_2] [i_2] &= ((0 ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1])));
                        var_17 = ((((((arr_10 [i_2] [i_1] [i_0]) ? -25 : (arr_5 [i_0 + 1] [i_0 + 1] [i_2] [i_3])))) ? var_11 : ((689350022 ? (arr_2 [i_2]) : 0))));
                    }
                }
            }
        }
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            arr_15 [i_4] = ((2596238728 ? 0 : 0));
            arr_16 [i_0] = (arr_3 [i_0] [i_0] [i_4]);
            var_18 = (!var_5);
            arr_17 [i_4] [i_0] = ((((((arr_3 [i_0 + 1] [i_4 + 1] [i_4 + 2]) ? ((((arr_7 [i_0] [i_4 + 2] [i_0]) <= -1103696179))) : (arr_14 [i_4] [i_4])))) ? 4520 : ((-1640172652 ? (arr_13 [i_0 + 1] [i_4 + 1] [i_4 - 1]) : (arr_7 [i_4 - 1] [i_4] [i_4 + 1])))));
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_19 -= ((((((arr_9 [i_0]) ? ((var_4 ? var_5 : (arr_6 [i_0] [i_5]))) : var_11))) ? (max(((2629408173 ? (arr_18 [i_5]) : var_4)), 1640172652)) : (((((max((arr_7 [i_0] [i_0] [i_5]), 3896421612093236515))) ? -61008 : (arr_3 [i_0] [i_5] [i_5]))))));
            var_20 = ((((arr_10 [i_0] [i_0 + 1] [i_0]) < (arr_10 [i_5] [i_0 + 1] [i_0]))));
        }
        var_21 ^= ((((((var_5 ? (arr_9 [i_0]) : var_8)))) ? 4527 : ((-(arr_7 [i_0] [i_0] [i_0])))));
        arr_20 [i_0] = (arr_1 [i_0] [i_0]);
        var_22 = (min((((arr_9 [i_0 + 1]) ? (arr_10 [i_0] [i_0 + 1] [i_0 + 1]) : (arr_10 [i_0] [i_0] [i_0]))), ((((arr_3 [i_0] [i_0] [i_0]) ? (arr_14 [i_0] [i_0]) : (arr_8 [i_0]))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
    {
        arr_25 [i_6] = (!(arr_5 [i_6] [i_6] [i_6] [i_6]));
        var_23 = (3822457565 / (arr_2 [i_6 + 1]));
        var_24 = (arr_19 [i_6]);
        arr_26 [i_6] = ((-(arr_22 [i_6 + 1])));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_25 = var_9;
        var_26 = var_7;
    }
    var_27 = (max(var_27, var_11));
    #pragma endscop
}
