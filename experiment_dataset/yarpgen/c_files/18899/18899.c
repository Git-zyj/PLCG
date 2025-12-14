/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((1 ? var_5 : (var_9 ^ var_7)));
    var_18 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 *= (arr_8 [i_0] [10] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 |= ((var_10 | (((arr_1 [i_0]) ? (((arr_0 [15]) / (arr_4 [11] [i_3] [i_0]))) : 195))));
                                var_21 = ((((max((arr_5 [i_1]), (arr_5 [i_1])))) - ((0 ? 61 : 56006))));
                                var_22 = 60;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_23 = ((((((2300416848 / (arr_0 [i_1])))) ? (arr_7 [i_1] [i_1 - 2] [i_1]) : (29434 | 13387398596167400029))) >> (((arr_14 [i_1] [i_2] [i_2] [i_0] [i_1]) - 140)));
                                var_24 = ((((((((arr_16 [9]) & 0))) ? var_6 : (((((arr_14 [i_0] [i_0] [i_0] [i_0] [i_1]) <= var_16)))))) ^ 9527));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = 2;
    var_26 = (((((((-45 ? var_3 : var_11))) ? var_6 : var_16)) == var_7));
    #pragma endscop
}
