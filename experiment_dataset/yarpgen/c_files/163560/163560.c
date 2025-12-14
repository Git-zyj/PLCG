/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_10 = (((((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0] [3]))) < 37136));
        var_11 = var_6;
        var_12 = (max(var_12, var_1));
        var_13 = (!-62);
        var_14 -= ((((max((max((arr_2 [4]), -43)), (((37136 ? var_9 : var_4)))))) ? ((((20 | (arr_1 [i_0] [i_0]))) % var_3)) : (((((arr_1 [i_0] [i_0]) ? var_1 : (arr_2 [16])))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_15 = (max(var_15, var_3));
                    var_16 = (arr_2 [i_2]);
                    var_17 ^= ((((-28399 * (((arr_3 [2]) ? (arr_6 [i_1] [i_2] [i_3]) : 0)))) & ((((arr_6 [i_3] [i_2] [i_1]) >= (arr_6 [13] [14] [14]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_18 [i_5] [i_4] [i_7] [i_6] [i_7] [i_5] [i_5] = (arr_10 [8] [i_7 + 2]);
                                arr_19 [i_7 + 2] [i_6] [i_5] [i_5] [16] [i_1] = ((-((0 ? (arr_17 [i_1] [i_5] [i_5] [i_6] [i_7 + 2]) : (arr_17 [i_7] [i_5] [i_5] [i_5] [i_1])))));
                                var_18 = (max((arr_3 [i_7 + 2]), (arr_2 [i_5])));
                            }
                        }
                    }
                    var_19 = ((max((!var_7), (((arr_15 [i_1] [4] [i_5] [i_5]) == var_1)))));
                }
            }
        }
        arr_20 [i_1] [i_1] = (((arr_6 [i_1] [i_1] [i_1]) ? (arr_6 [i_1] [i_1] [i_1]) : ((min((arr_6 [i_1] [i_1] [i_1]), (arr_6 [i_1] [i_1] [i_1]))))));
        var_20 -= (arr_16 [8] [i_1] [i_1]);
        var_21 ^= var_9;
    }
    var_22 = 1;
    var_23 = (max(var_23, 122));
    var_24 = 7749812732665926751;
    #pragma endscop
}
