/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((18446744073709551615 ? 9223372036854775807 : var_4)))));
    var_16 &= 0;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_17 = (var_4 == (arr_0 [i_0 - 1]));
        var_18 = (((0 >= 4092) ? (((!(arr_2 [i_0 - 2])))) : var_6));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_19 = (((arr_3 [i_1]) ? var_3 : (!0)));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_1] = (((arr_4 [i_1] [i_1]) >= var_2));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    {
                        var_20 = arr_3 [i_1];
                        var_21 = var_0;
                        var_22 = ((~((var_14 ? (var_3 && var_9) : var_14))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 11;i_6 += 1)
                {
                    {
                        arr_18 [i_1] [i_2] [i_5] [i_5] [14] [i_6] &= (max(var_12, (max(var_7, (arr_13 [i_6 + 2] [i_5] [i_5] [i_5] [i_5] [i_5])))));

                        for (int i_7 = 3; i_7 < 11;i_7 += 1)
                        {
                            var_23 = ((-1 ? (min((max(var_13, var_13)), ((min(var_11, (arr_6 [i_2] [0] [i_2])))))) : var_5));
                            var_24 = ((((max(12, 23)))));
                            arr_21 [i_1] [i_1] = (var_12 - var_11);
                            arr_22 [i_1] [i_6] [i_7] = var_2;
                        }
                        arr_23 [i_1] [i_2] [i_5] [i_6] = var_4;
                        var_25 = ((((((var_2 / (arr_11 [i_1] [i_2] [i_6]))))) ? ((((arr_19 [i_5] [i_1]) * var_11))) : (max((0 / 255), -2))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
