/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_10 ? var_3 : (max(var_11, (max(var_18, var_17))))));
    var_20 = var_10;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = (arr_2 [i_0]);
        var_22 &= var_18;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_23 += (((arr_4 [i_1 - 1]) ? (((!(arr_3 [i_1 + 2])))) : (var_2 - var_2)));
        var_24 ^= (((arr_3 [i_1]) - ((((arr_3 [i_1]) && var_11)))));
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = var_14;
        var_25 ^= ((~(arr_5 [i_2] [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_26 = (max(var_26, ((max((max(var_7, (var_5 % var_0))), var_2)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_27 = ((((arr_8 [i_2] [i_2 - 2]) / (arr_14 [i_2 - 1] [i_2 - 1]))));
                                arr_21 [i_2] [i_3] [i_3] [i_4] [16] [i_5] [i_6] = (((max((var_3 < var_16), ((var_17 ? var_12 : (arr_14 [i_2] [i_4]))))) / (arr_8 [i_3] [i_2])));
                            }
                        }
                    }
                }
            }
        }
        var_28 = (((arr_12 [i_2 + 2] [i_2 + 2]) ? (max(((var_10 ? (arr_12 [i_2] [i_2]) : (arr_12 [i_2] [i_2]))), (arr_6 [i_2] [i_2]))) : var_12));
        var_29 ^= (arr_3 [i_2]);
    }
    var_30 = (max(var_2, var_1));
    var_31 = var_10;
    #pragma endscop
}
