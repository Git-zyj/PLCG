/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(153, 6705868140741396733))) && var_10));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_14 = ((((((arr_2 [i_0] [i_0]) == (((-(arr_0 [i_0] [i_0]))))))) + (max((~0), (arr_3 [i_0])))));
        var_15 = (arr_3 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((-(arr_3 [i_1])));
        var_16 = ((var_4 > (arr_3 [i_1])));
        var_17 = (((arr_3 [i_1]) ? (arr_6 [i_1] [i_1]) : (((arr_0 [i_1] [i_1]) / var_11))));
        arr_8 [i_1] [i_1] = (((arr_0 [i_1] [i_1]) ? 1 : var_8));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_18 = (arr_2 [i_2 + 1] [i_2 + 2]);
        var_19 = (min(var_19, (((((((arr_0 [i_2] [i_2]) && var_7))) ^ ((~(arr_3 [8]))))))));

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_20 += (((arr_3 [i_3]) ? (arr_3 [i_3]) : 1));
            var_21 = ((var_11 & (1 == 1)));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_22 = (arr_2 [i_2] [i_4]);
            arr_16 [14] &= ((~var_6) ? (arr_10 [i_2] [i_2 + 1]) : (arr_12 [i_2]));
            var_23 = (((~(arr_13 [1] [i_2] [i_2]))));
            arr_17 [i_2] [i_2] = ((var_3 | (arr_15 [i_2] [i_2])));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            arr_20 [i_2] = (1 == 1);
            var_24 |= (arr_1 [i_2 + 1]);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_25 &= (!var_5);
                        arr_28 [i_7] [i_7] [i_7] [i_2] &= var_4;
                        arr_29 [i_2] [i_6] [i_2] = 1;
                        var_26 = var_1;
                    }
                }
            }
        }
        var_27 = (~1);
        var_28 = (((arr_10 [i_2 + 3] [i_2 + 1]) > var_9));
    }
    var_29 = 1;
    var_30 = var_11;
    #pragma endscop
}
