/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((~var_5) ? var_7 : ((~(~var_0)))))));
    var_11 = var_3;
    var_12 = (~205);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (-(((((1734524252 ^ (arr_1 [i_0])))) ? var_2 : var_3)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] &= (-1 / 2080393489);
            arr_7 [i_0] [i_1] = (((2214573806 ? (arr_0 [i_1]) : (arr_5 [i_0]))));
        }
        var_14 = ((~((~(arr_1 [i_0])))));
        arr_8 [i_0] [i_0] = (((var_3 & ((~(arr_3 [i_0] [i_0]))))) / (((((~68) + 2147483647)) >> (((!(arr_1 [i_0])))))));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        var_15 = (((arr_2 [i_2 + 1]) * var_1));
        var_16 = (max(var_16, 65));
        var_17 = (((arr_11 [i_2 + 1]) ? 25 : ((max((arr_3 [i_2 + 1] [i_2 + 1]), 25)))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_15 [i_3] = var_7;
        var_18 ^= (arr_0 [i_3]);
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_19 = (max(var_19, ((-((-(min(-14, 3211511521))))))));
        var_20 ^= ((20 ? var_6 : var_9));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_21 = (max(var_21, (arr_2 [i_4])));
                    arr_22 [i_4] [i_5] [i_6] = (~0);
                }
            }
        }
        arr_23 [i_4] = (min((arr_4 [i_4]), 4074150189));
    }
    #pragma endscop
}
