/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 0;
    var_19 = (max(var_19, (min(((-var_2 ? (max(65535, var_7)) : (min(var_17, -6)))), (var_17 - var_0)))));
    var_20 = var_4;
    var_21 = ((((((((65535 ? 16 : 29697))) ? var_11 : (var_12 || var_10)))) || var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2] [i_2] = 65535;
                            arr_12 [i_0] [i_2] [i_1] [i_1] [i_3] = (((arr_5 [i_0] [i_0] [i_2]) + (max(1, ((var_5 ^ (arr_9 [i_0] [i_2] [i_2])))))));
                            arr_13 [i_1] [i_0] [i_1] [i_2] = var_3;
                            arr_14 [i_2] [i_0] [i_0] [i_2] = (arr_4 [i_0] [i_1] [i_2]);
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 4; i_4 < 21;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_22 = (arr_4 [i_5] [i_0] [i_0]);
                                arr_24 [i_6] [i_6] [i_6] [i_6] = (((arr_21 [i_6] [i_6 + 3] [i_6]) || (arr_22 [i_5] [i_6] [i_5] [i_5] [i_6] [i_5])));
                                arr_25 [i_0] [i_0] [i_4] [i_6] [i_1] [i_6] [i_0] = (((arr_15 [i_0] [i_0] [i_0]) && 0));
                                var_23 = (((arr_21 [i_6] [i_6 + 3] [i_4]) > (arr_19 [i_4 - 3] [i_6 + 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_24 = var_3;
                                arr_32 [i_8] [i_8] [i_4] [i_8] [i_8] = (~var_4);
                                arr_33 [i_0] [i_1] [i_8] = ((1746726680343785155 ? -14758315398473097840 : 7213));
                            }
                        }
                    }
                    arr_34 [i_1] [i_1] [i_4] = 65535;
                    var_25 = var_13;
                    var_26 = (((((arr_27 [i_0] [i_0] [i_0] [i_4] [i_0]) ? (arr_18 [i_0] [i_1] [i_1] [i_4]) : 59161)) > (((arr_29 [i_4] [14] [i_0]) - (arr_30 [i_0] [i_0] [i_0] [i_1] [i_4] [i_0])))));
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    arr_39 [i_0] [i_0] [i_0] = (max(((((min(15, (arr_17 [i_0] [i_0] [i_0] [i_0])))) ? var_4 : (arr_5 [i_0] [i_0] [i_9]))), (((arr_38 [i_9] [i_0]) ? (arr_38 [i_0] [i_0]) : var_3))));
                    arr_40 [i_0] = ((((min(var_14, (arr_5 [i_0] [i_0] [i_0])))) - ((var_13 ? var_6 : var_9))));
                    var_27 = ((((((var_16 < -2752056752120520961) ? 65535 : (arr_23 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))) ? 65528 : ((2752056752120520968 >> ((((var_8 ? var_7 : var_6)) - 3382795135))))));
                    var_28 |= 6374;
                }
                /* LoopNest 3 */
                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_29 = (arr_41 [i_10] [i_10] [i_10] [i_10]);
                                var_30 = (((max((arr_15 [i_0] [i_0] [i_12]), (max(var_1, var_14)))) + (((max(134201344, 65535)) - (arr_18 [i_0] [i_10 - 1] [i_12 + 2] [i_12 + 3])))));
                            }
                        }
                    }
                }
                var_31 = ((((min((((arr_43 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]) ? var_8 : 1006309023)), (max(var_10, (arr_15 [i_0] [i_0] [i_0])))))) && (-1 && var_0)));
                var_32 = -17;
            }
        }
    }
    #pragma endscop
}
