/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = var_7;
                var_16 ^= (((arr_2 [i_0]) >= (((~(max((arr_0 [i_0] [i_0]), (arr_1 [i_0]))))))));
            }
        }
    }
    var_17 = var_2;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_18 = var_4;
                                arr_18 [i_6] [i_5] [i_3 + 2] [i_3 + 2] [9] = (-var_12 >> (((((arr_12 [i_6] [i_5] [i_3 + 1] [i_2]) ? (arr_10 [i_2] [14]) : (arr_17 [i_2] [i_3] [i_4] [i_4] [i_4] [16] [i_6]))) - 16801761752510824681)));
                                arr_19 [i_2] [i_4] [0] [i_2] = (((arr_8 [i_4]) ? -1 : 6671393730034628698));
                            }
                        }
                    }
                    var_19 = (~((-1354732502 ? (arr_16 [i_4 - 3] [i_3] [i_3] [i_2] [i_2]) : (arr_15 [i_4] [i_3 - 2] [i_2]))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_24 [i_7] = ((~(arr_14 [i_7 - 1])));
                                var_20 = -1354732502;
                                arr_25 [i_7] [4] [i_4] [i_7] [i_8] [i_8 - 1] = -825744382;
                                var_21 = -4786105561955142282;
                            }
                        }
                    }
                }
            }
        }
        var_22 = (min(var_22, 17224536774484792079));
        arr_26 [1] = ((var_8 / ((-1354732488 ? (arr_20 [i_2] [i_2]) : -10))));
        var_23 = ((~(arr_12 [i_2] [i_2] [i_2] [i_2])));
    }

    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_30 [5] = (((arr_17 [i_9] [i_9] [17] [20] [i_9] [i_9] [i_9]) / (max((arr_8 [i_9]), 50))));
        var_24 = ((((((((arr_8 [i_9]) < -1490891446)) ? (arr_12 [i_9] [i_9] [1] [i_9]) : 56))) && -4));
    }
    #pragma endscop
}
