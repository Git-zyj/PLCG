/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_7 [i_2] = (0 ^ 65535);
                    arr_8 [i_2] [i_0] [i_0] [i_0] = (arr_3 [i_0] [i_1] [i_2]);
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((((max(-1, (arr_3 [i_0] [i_1] [i_1 - 1])))) ? (((((((arr_0 [i_0] [i_0]) | (arr_6 [i_1 + 2])))) ? (max(var_11, 28728)) : 28735))) : (min((var_13 ^ 28738), (((-28739 ? 77 : 28735)))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                arr_20 [i_5] [i_4] [i_3] [i_1 + 1] [i_1 + 2] [i_0] &= var_0;
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_18 [i_0] [i_1 - 1] [i_3] [i_4] [i_5] [i_4]);
                                arr_22 [i_0] [i_1 + 2] [i_5] = ((1525503748 ? 26 : (-2147483647 - 1)));
                                var_15 *= (arr_18 [i_5] [i_1] [i_3] [i_4] [i_1 + 1] [i_3]);
                                var_16 = (min(var_16, (((!(arr_13 [i_4]))))));
                            }
                        }
                    }
                    arr_23 [i_1 + 1] [i_1 - 1] [i_1 - 1] = -28728;
                    arr_24 [i_0] [i_1] [i_3] [i_3] = (((arr_18 [i_1 - 1] [i_1 - 1] [i_0] [i_0] [i_0] [i_0]) ? 28728 : (28710 & 0)));
                }
                for (int i_6 = 3; i_6 < 13;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_33 [i_0] [i_1 - 1] [i_6] [i_7] [i_8] = ((((((arr_14 [i_8 - 2] [i_8 - 3] [i_8] [i_8 - 3] [i_8]) ? (arr_18 [i_8 - 2] [i_8 - 3] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1]) : var_4))) ? ((((arr_14 [i_8 - 2] [i_8 - 3] [i_8] [i_8 - 2] [i_8]) || var_6))) : ((max(0, -24)))));
                                arr_34 [i_0] [i_6] [i_6 - 2] [i_7] [i_0] = (min(var_8, (arr_27 [i_8 + 2] [i_7 + 1] [i_6 - 2] [i_0])));
                                arr_35 [i_0] [i_6 - 3] [i_6] [i_6] [i_8 - 1] = ((((((arr_6 [i_1 - 1]) ? (arr_6 [i_1 + 2]) : -28735))) ? (((1 ? (arr_6 [i_1 + 2]) : (arr_6 [i_1 + 2])))) : ((4294967295 * (arr_6 [i_1 + 1])))));
                                arr_36 [i_6] [i_6] [i_8 + 1] = (36623 && -1179480396);
                                arr_37 [i_6] [i_6] = var_14;
                            }
                        }
                    }
                    arr_38 [i_6] = (min((min((min(7707057308133068833, (arr_25 [i_0] [i_1] [i_6]))), (arr_17 [i_0] [i_0] [i_1 - 1] [i_0]))), ((((~var_12) & ((10739686765576482779 ? var_12 : var_8)))))));
                    var_17 -= (((1179480379 ? 0 : 10739686765576482782)));
                }
                arr_39 [i_0] [i_1] [i_0] = (((min(-28753, 10739686765576482782)) ^ ((max(16, (arr_1 [i_1 + 2] [i_1 + 2]))))));
                var_18 = (max(var_18, (((!((min(28741, 7707057308133068856))))))));
            }
        }
    }
    var_19 += (max((((var_13 ? var_0 : var_12))), (28730 - var_0)));
    var_20 &= (min(var_6, var_4));
    var_21 = (((((var_4 ? var_5 : 162))) - (30387 > var_12)));
    var_22 = var_9;
    #pragma endscop
}
