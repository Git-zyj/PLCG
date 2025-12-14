/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_6 + var_6) ? var_9 : var_4)) < (min(((var_6 ? var_5 : var_7)), var_0))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (arr_0 [i_0]);
        var_14 = ((var_3 ? (max((~var_1), (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))) : (((arr_1 [i_0]) ? (max(var_5, 2147483647)) : (((var_3 || (arr_0 [i_0]))))))));
        var_15 = (max(var_15, var_0));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_16 ^= ((((var_10 ? var_2 : (arr_1 [i_1]))) / (~1)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    {
                        var_17 = (-(arr_3 [i_1]));
                        var_18 = (min(var_18, (((~(((((~(arr_10 [i_4 + 1] [20] [20] [i_1])))) ? -295970754 : ((1635769469334540083 ? var_4 : var_4)))))))));
                        arr_11 [i_1] = ((!(((var_9 ? var_5 : (arr_2 [i_4 + 1]))))));
                        arr_12 [i_1] [i_1] = (min((arr_3 [i_1]), ((~(arr_9 [i_1] [i_3] [i_3] [i_4 + 2] [i_4 - 1] [i_4])))));
                    }
                }
            }
        }
        var_19 ^= -var_6;
        var_20 -= min(3895, -29124);
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 14;i_5 += 1)
    {
        var_21 = var_10;
        var_22 = ((var_6 ? (arr_2 [i_5 + 1]) : (arr_0 [i_5 - 2])));
    }
    var_23 += (min((((~var_4) ? var_0 : var_10)), var_5));
    var_24 = var_5;
    #pragma endscop
}
