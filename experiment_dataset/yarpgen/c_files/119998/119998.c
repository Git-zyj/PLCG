/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_0 >= (var_0 / 10094))) ? (var_6 & var_2) : ((var_2 << ((var_6 >> (2785209367073425368 - 2785209367073425355)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, -2785209367073425359));
                                var_12 = (max(var_12, ((((var_6 ? -var_4 : 2785209367073425376))))));
                                arr_14 [i_0] [i_2 - 1] [i_3] [i_4] = (arr_0 [i_2 - 1] [i_2 + 1]);
                            }
                        }
                    }
                }
                var_13 = var_9;

                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_25 [i_5] [i_1] [i_5] [i_6 - 1] [i_7] = ((var_2 + ((~(arr_22 [i_7] [21] [i_5] [i_6] [i_0 + 1] [i_6 - 1])))));
                                var_14 = (arr_13 [1] [i_1] [i_1] [i_5] [1] [i_5] [i_7]);
                            }
                        }
                    }
                    var_15 = var_0;
                    arr_26 [i_1] [i_5] = ((((min((arr_11 [i_0 + 2] [0] [i_0 - 1] [11]), (arr_23 [i_5] [i_0 - 1] [i_0 - 1] [i_0 + 2])))) ? (((((var_0 ? var_8 : (arr_10 [i_0] [i_1] [i_1] [5])))) ? (((((arr_10 [i_0] [i_0] [3] [i_0]) && var_6)))) : (~-2785209367073425368))) : (((var_4 ? -var_2 : ((var_6 ? var_0 : var_5)))))));
                    arr_27 [0] [i_1] [i_0] [0] |= ((14735224745069397804 ? (min(var_8, ((2785209367073425358 ? 3711519328640153820 : -8)))) : var_9));
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        arr_33 [i_0] [i_1] [i_0] [i_0] [i_9] [i_0] = (arr_22 [22] [i_1] [22] [22] [i_8] [i_9]);
                        var_16 = (~var_4);
                    }
                    var_17 ^= var_4;
                }
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    arr_38 [1] [i_10] [1] = ((((((10 ? var_9 : var_8)) << (((arr_0 [i_1] [i_10]) - 11908309898724458156)))) | (((~(arr_23 [i_10] [i_10] [i_1] [i_10]))))));
                    var_18 &= (max(var_7, ((((arr_5 [i_10]) | -var_6)))));
                    var_19 = 2785209367073425360;
                }
            }
        }
    }
    var_20 = ((((-var_3 ? var_2 : var_4)) * (((((min(var_3, var_8))) <= 1)))));
    #pragma endscop
}
