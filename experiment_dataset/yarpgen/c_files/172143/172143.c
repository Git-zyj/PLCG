/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (~var_15);
        arr_4 [i_0] = var_17;
        arr_5 [i_0] = var_10;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = var_11;
        arr_9 [5] &= var_2;
        arr_10 [1] [i_1] &= (var_10 + (var_13 == var_7));
    }
    var_18 = ((((min(8, var_15)))) != var_2);
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_19 [8] &= var_14;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_26 [16] [16] [i_4] [i_5] [i_3] = (((1 != 9223372036854775807) << -0));
                                arr_27 [i_6] [i_5] [i_3] [6] [i_3] [6] [i_2] = -22;
                                arr_28 [i_5] [16] [8] [i_3] [i_3] = (-9223372036854775807 - 1);
                                arr_29 [i_3] [i_3] [i_4] [i_5] [7] = (((7 + ((max(-35, var_9))))));
                                arr_30 [i_4] [i_4] [i_3] = (((max((arr_14 [i_2] [i_2] [3]), var_7))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    arr_34 [12] |= var_7;
                    arr_35 [i_2] [i_3] [i_3] [i_7] = (((arr_14 [0] [1] [i_7]) / ((1 * ((min(var_16, var_14)))))));
                    arr_36 [i_3] [i_3] [i_3] = ((((~(arr_20 [i_2] [5] [i_3] [i_2] [i_3] [i_3]))) >= (arr_33 [i_2] [i_3] [i_7] [i_3])));
                    arr_37 [0] [4] &= (arr_11 [i_2] [i_3]);
                }
                arr_38 [i_3] [i_3] [i_3] = var_15;
            }
        }
    }
    var_20 = ((18128011115441786191 & (((~(var_6 & var_14))))));
    #pragma endscop
}
