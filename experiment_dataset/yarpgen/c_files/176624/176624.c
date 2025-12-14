/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_9 [i_0] = (((~43081) && var_17));
                    var_20 &= (((((arr_4 [i_0] [i_2]) + 2147483647)) >> (((arr_4 [i_0] [i_0]) + 549707582))));
                    var_21 = (arr_5 [16] [i_1]);
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_22 = (max(var_22, (arr_5 [1] [i_3])));
                            arr_18 [i_1] [15] = (arr_3 [i_0] [i_0]);
                            var_23 = ((((~(arr_15 [i_5] [i_5] [i_3] [i_4 + 1] [i_5] [i_1]))) | (arr_10 [i_0])));
                            var_24 = 65535;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_25 = (arr_17 [4] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_6]);
                            var_26 = (min(var_26, ((((arr_16 [i_0] [i_1] [i_3] [i_4 + 1] [i_6]) + (arr_14 [i_0] [i_1] [i_1] [i_4 + 1] [i_6]))))));
                            arr_22 [i_0] [i_0] [i_6] [i_4] [i_6] [i_1] [i_3] = (arr_5 [i_0] [i_3]);
                            var_27 = (((arr_12 [i_0]) == (arr_4 [i_6] [i_4 + 1])));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_28 = (~1);
                            arr_26 [i_0] [i_1] [i_3] [i_7] [0] = (((!1) ? var_4 : (var_2 && 0)));
                            var_29 = var_7;
                        }
                        var_30 = ((-(((arr_12 [i_4 - 1]) ? (arr_13 [8]) : 21807))));
                        var_31 |= ((197 ? (arr_5 [i_3] [i_3]) : (arr_5 [i_0] [i_4 + 1])));
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 19;i_8 += 1)
                    {

                        for (int i_9 = 2; i_9 < 20;i_9 += 1)
                        {
                            var_32 = (min(var_32, ((((arr_27 [i_8 - 1] [i_8] [17] [i_8 + 2]) / (arr_27 [i_8 - 1] [i_8] [i_8] [i_8 + 2]))))));
                            var_33 -= ((((arr_23 [i_0] [i_1] [i_1] [i_3] [1] [i_1] [i_9]) ? (arr_0 [16]) : var_9)));
                            var_34 = (max(var_34, (!var_0)));
                        }
                        arr_32 [i_0] [i_1] [17] [2] [1] [10] &= arr_2 [i_0] [i_0];
                    }
                    var_35 = (max((min((arr_6 [i_1] [20]), 768)), (((var_2 & (21792 & 21824))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_38 [i_0] [i_1] [i_3] [i_10] [i_11] = (arr_24 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1]);
                                arr_39 [2] [i_1] [i_3] [i_10] [i_1] [8] [1] = ((((!((max(1, var_19)))))));
                            }
                        }
                    }
                    var_36 &= 15355603582531922721;
                }
                for (int i_12 = 2; i_12 < 17;i_12 += 1)
                {
                    var_37 = (((~var_15) ? var_13 : ((((max(80, 4294967295))) ? (arr_6 [i_0] [i_1]) : ((5847769086699503168 ? (arr_4 [i_1] [i_12 - 1]) : var_5))))));
                    var_38 = (min(var_38, (((~((543133120147301197 ? ((((arr_27 [i_0] [19] [i_12] [19]) && 32332))) : 1)))))));
                    var_39 = (max(var_39, (-33200 & 255)));
                    arr_42 [i_12] [16] [i_12] [16] = (max(127, var_16));
                }
                var_40 = ((((arr_27 [4] [4] [i_1] [12]) && (arr_21 [i_0] [1]))));
            }
        }
    }
    var_41 = (min(var_41, ((((var_16 ? (((var_9 ? -1 : 137)) : (max(var_0, var_4)))))))));
    var_42 = (min(var_0, -103));
    #pragma endscop
}
