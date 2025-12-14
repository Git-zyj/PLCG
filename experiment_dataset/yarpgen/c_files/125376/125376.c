/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (arr_2 [i_0]);
                var_10 = arr_3 [i_0] [i_1] [i_0];
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_11 = (((arr_8 [i_2]) + (((arr_7 [i_2 - 1] [i_2]) - (arr_8 [i_2 - 1])))));
        var_12 = (!-240260990);
        arr_9 [i_2 - 1] [i_2 - 1] = var_1;
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 8;i_3 += 1)
    {
        arr_12 [i_3 - 1] = 133;

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_13 = (((arr_13 [i_3 - 2]) - 143));
            arr_15 [i_4] = (((~2734976891) ^ 1));
            var_14 = -270742129;
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            arr_19 [i_3 - 2] [i_5] = (arr_1 [i_3] [i_3 + 1]);
            var_15 = (min(var_15, ((((var_4 ^ -1) ? 11694 : ((112 ? -1960020891 : -6611)))))));
        }
        var_16 = ((((0 >= (-32767 - 1)))) - ((var_2 ? (arr_11 [i_3]) : (arr_11 [i_3]))));
        arr_20 [i_3] [i_3 + 2] = ((((var_0 & (arr_14 [i_3]))) <= 113));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        arr_23 [i_6] [i_6] = (arr_21 [i_6] [i_6]);
        arr_24 [i_6] = (((((((!(arr_22 [i_6])))))) ? var_1 : (min((0 ^ 9760), (((-32767 - 1) ? 672144054 : 1))))));
    }
    var_17 += (min(var_3, 141));
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            {
                var_18 = max(((252 ? (arr_0 [1]) : 1)), (min(var_1, -132)));
                arr_30 [i_7] [i_8] = ((25666 > ((((((arr_1 [i_7] [i_7]) & (arr_0 [0])))) | (((arr_28 [i_8] [i_8 + 2] [i_7 + 1]) % 20423))))));
            }
        }
    }
    var_19 = var_6;
    #pragma endscop
}
