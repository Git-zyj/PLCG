/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 ^= var_6;

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            arr_11 [i_0 + 1] [11] [1] [1] [i_0] = ((((((arr_2 [2] [2] [2]) < (arr_5 [i_0] [i_0] [i_0] [i_0 + 1])))) << ((((((arr_0 [i_0 + 2] [1]) ? (arr_4 [i_1] [i_1] [i_1] [i_1]) : var_1))) ? (arr_3 [i_0 + 1] [i_0]) : (arr_10 [i_0 + 2] [i_4 - 1] [21] [i_4 + 2] [i_4 + 3])))));
                            var_20 = (-(((((~1) + 2147483647)) >> (4022 - 4019))));
                        }
                        arr_12 [i_3] [7] [i_0] [i_0] [i_3] = -2492452564914646639;
                        var_21 = (min(var_21, (arr_3 [i_0 + 3] [i_3])));
                        arr_13 [i_0] = (((arr_1 [i_0]) ? (((~-4022) ? (max(-8271290626672249771, 807)) : ((var_2 ? (arr_8 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2]) : -1102372080982365899)))) : (((95 | (arr_8 [i_0] [6] [16] [16]))))));
                    }
                    var_22 = (arr_5 [i_0] [11] [i_0] [i_2]);
                    arr_14 [i_0] [i_0] [i_0] = var_11;
                    var_23 = ((2147483637 ? var_7 : var_15));
                }
            }
        }
    }
    var_24 = (max(var_10, var_2));
    #pragma endscop
}
