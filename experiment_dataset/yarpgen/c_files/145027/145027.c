/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [11] = (min((((arr_1 [i_0]) >> (18446744073709551610 + 8))), 0));
        var_15 -= ((min(-1682098654, (arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] = 827801451;
        var_16 = ((((min((arr_1 [i_1]), 51867))) - (max(91, (30 + -1490975149)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    arr_12 [15] = -87;
                    var_17 = (arr_11 [14] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            {
                                arr_18 [i_5] [i_2] = ((min((arr_15 [i_1] [12] [i_1] [i_1]), -107)));
                                arr_19 [i_5] [i_5] [7] [i_5] [7] = 60677;
                                var_18 = (((~((6923645806301217238 >> (56165 - 56161))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 13;i_6 += 1)
    {
        arr_23 [i_6] [i_6] = (((((-(arr_3 [i_6] [i_6])))) * 149));
        arr_24 [6] [3] = ((~(arr_1 [i_6 - 2])));
    }
    #pragma endscop
}
