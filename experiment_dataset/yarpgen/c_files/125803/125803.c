/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((1631294836 ? 164 : 50874));
    var_20 |= var_9;
    var_21 += (((var_17 * 14649) | (min(0, ((var_8 ? var_16 : var_17))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = 50874;
        arr_5 [i_0] = (((((arr_0 [i_0]) >> 1)) != (arr_0 [i_0])));
        arr_6 [i_0] [i_0] = ((~(max(3690505120, 33637))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_9 [11] [1] = (var_4 ? (((-629860315 ? var_10 : (arr_3 [i_1])))) : 14623);

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_14 [i_1] [i_1] [i_1] &= (max((((max(var_2, var_16)))), ((-(min(var_10, var_14))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((max((arr_13 [i_1] [1]), 3296175282))) ? (((arr_13 [i_1] [i_2]) ? (arr_13 [i_1] [1]) : var_15)) : (arr_13 [i_1] [i_1])));
                        arr_21 [8] [i_2] [i_3] [i_4] = (!var_8);
                    }
                }
            }
            arr_22 [i_1] = (max((arr_17 [i_1] [i_2] [i_1] [i_2] [i_1] [i_2]), (arr_7 [i_1])));
        }
        var_22 = (min(var_22, (((~(((arr_10 [i_1] [i_1]) / (arr_10 [i_1] [i_1]))))))));
        arr_23 [1] = ((min(var_11, (arr_3 [i_1]))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_27 [i_5] = ((-((-(arr_25 [i_5])))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    arr_32 [i_5] [i_6] [i_7] [i_7] &= (((arr_30 [i_5] [i_5]) ? 1845501313 : 52847));
                    arr_33 [i_6] = var_6;
                    var_23 = (var_7 + -var_3);
                }
            }
        }
        var_24 = (min(var_24, (-28 / 25039)));
    }
    #pragma endscop
}
