/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((2621406292 <= (((0 ? var_1 : 0)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_0] = var_7;
                    arr_9 [i_2] [0] = (((arr_3 [i_0 - 2]) ? 0 : (arr_3 [i_0 - 1])));
                }
                for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0 - 1] [i_1] [i_3] = (arr_0 [i_1]);
                    arr_14 [i_0] [i_1] = -var_8;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_22 [i_4] [i_1] [i_1] [i_1] [i_5 - 1] [i_5] [i_3] = ((((!(((arr_7 [i_1] [i_3] [i_3] [i_3]) < (arr_19 [i_0] [i_1] [i_3] [i_4] [i_3]))))) ? -1478990181 : (((arr_19 [i_5 + 1] [i_4] [i_3] [i_1] [i_0]) ? (arr_19 [i_0 - 2] [i_1] [i_3] [i_1] [i_5 + 1]) : 0))));
                                arr_23 [i_0] [i_0] [8] [i_3] [i_5 + 1] = ((((((389912376 || 1129582278) ? (arr_10 [i_3]) : (arr_0 [i_5 - 1])))) ? (((-((((arr_10 [i_3]) >= 1)))))) : ((~((1288719236 ? var_6 : var_4))))));
                            }
                        }
                    }
                    arr_24 [i_0] [i_3] [i_3] [i_0] = ((((arr_7 [i_0 - 1] [i_3] [i_3] [i_0 - 1]) ? 1811652055 : (arr_7 [i_0] [i_3] [i_3 + 1] [i_1]))));
                }
                for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                {
                    arr_28 [i_6] [i_1] [i_0] [i_0] = 1;
                    arr_29 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2] = (~-1);
                    arr_30 [i_0] [7] [i_6] = ((!(arr_15 [i_6 + 1] [i_6 + 1] [i_0] [i_6 + 1])));
                    arr_31 [i_0 - 2] [i_0 - 2] [5] [4] = ((((max(var_4, var_9)))));
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_39 [i_7] [0] [i_1] = ((((((max(27, -2579))) + (arr_18 [i_0] [i_7] [i_0 - 2] [i_0 + 1] [i_8])))));
                                arr_40 [i_0] [i_0] [i_1] [i_0] [i_7] [i_0] [i_1] = (max((max((arr_6 [i_0 + 1] [i_8 - 3] [i_9] [i_9 - 4]), (arr_12 [i_0 + 1] [i_1] [i_8 + 1] [i_0]))), (max(var_6, 570178354794553699))));
                                arr_41 [i_7] [i_8] [i_0] [i_0] [i_0] [i_0] [i_7] = max((arr_21 [i_9 - 4] [i_7] [i_8 - 2] [i_7] [i_0]), ((((max(335153576, var_6)) == 116))));
                                arr_42 [i_0] [i_0] [i_1] [i_7] [i_7] [i_1] = (((-18485 ? (max(var_2, 728333405275735026)) : var_7)));
                                arr_43 [i_0] [i_0] [i_7] [5] [i_7] = ((((((((max((arr_7 [i_0] [i_7] [i_7] [i_9]), var_2)))) / ((11 ? var_2 : var_6))))) ? var_0 : var_0));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            arr_51 [i_0] [i_0 - 2] [i_0] [i_0] = -8864825851103843729;
                            arr_52 [i_0 + 1] [i_0 + 1] [i_10] [i_10] = ((~((5576792392480767972 | (arr_37 [i_0 + 1] [i_0] [i_0 - 2] [i_10])))));
                        }
                    }
                }
            }
        }
    }
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            {
                arr_58 [i_12] [14] [i_13] = (((((max(18359, 0)))) ? (((arr_27 [i_12] [i_12] [i_12] [i_12]) ? (arr_27 [i_12] [i_13] [i_12] [i_13]) : -6674291032468401116)) : -389912379));
                arr_59 [i_12] = ((max(((var_5 ? var_0 : -3419)), 26988)));
            }
        }
    }
    #pragma endscop
}
