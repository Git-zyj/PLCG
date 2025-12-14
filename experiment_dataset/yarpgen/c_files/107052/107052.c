/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = (((arr_1 [i_0]) ? var_4 : (arr_0 [i_0])));

        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [1] [1] [i_2] = var_5;
                            arr_15 [i_1] [i_2] [i_2] [i_1] [i_0] = (((2897973718 ? (((arr_9 [i_0] [i_2] [1] [i_0] [i_0]) ? -7738 : 10886958061587973892)) : -1)));
                        }
                    }
                }
                var_19 = (min(var_19, (((1 ? 1672474597 : 10886958061587973892)))));
                var_20 = var_15;
            }
            arr_16 [i_0] [i_0] = 5961;
            arr_17 [i_0] [i_1] = (arr_0 [7]);
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            arr_31 [9] [i_7] [i_5] [i_7] [i_5] [i_5] [i_0] = ((((((2476355422 ? 12093506769680971881 : (arr_2 [i_0]))))) ? (arr_18 [i_8] [i_5] [i_0]) : ((((0 % -1) & (-31972 % var_11))))));
                            var_21 = (((arr_18 [i_5] [i_5] [i_7]) >= var_3));
                            arr_32 [i_6] [i_6] [0] [i_6] [i_7] [i_8] |= 4317808165439928562;
                            var_22 = (((arr_24 [i_0]) ? 365610661 : (58425 | 9005000231485440)));
                        }
                    }
                }
            }
            var_23 = ((((-31972 ? var_6 : (arr_4 [i_0]))) ^ (-365610661 * 16600182499235558496)));
            arr_33 [i_0] [i_5] = (((var_11 ? var_0 : (arr_11 [i_0] [9] [i_0] [i_0] [i_0] [i_0]))));
            arr_34 [i_5] = 7559786012121577723;
            var_24 = (~-37);
        }
    }
    var_25 = ((var_12 ? var_12 : ((var_14 % (((var_5 ? var_7 : var_7)))))));
    var_26 = var_8;
    #pragma endscop
}
