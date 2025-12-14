/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((-66 == (min(var_5, var_12))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [2] [i_2] [i_0] [i_4] [i_1] = var_18;
                                var_21 = (arr_9 [0] [i_2]);
                                arr_13 [i_0] [15] [i_1] [i_1] [i_3 - 1] [i_0] [i_4] = (min(((-((((arr_4 [i_0] [i_1] [i_1]) == var_19))))), (((-8795 + 2147483647) >> (-13610 + 13621)))));
                                arr_14 [i_4 + 1] [i_0] [i_2] [i_0] [i_0] = ((((!(arr_0 [i_4 - 1] [i_0]))) ? ((((arr_2 [i_0]) ? 1641 : (arr_5 [i_0] [i_0] [i_0] [i_4 + 2])))) : (arr_3 [i_0])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_22 = (max(((var_5 & (arr_15 [i_0] [i_1] [i_2] [i_6 - 1] [i_6] [i_6]))), 0));
                                var_23 = (((((1 ? (arr_2 [i_0]) : 0))) ? ((~((min(225, 16732))))) : var_11));
                                var_24 = var_19;
                                arr_20 [i_0] = 31;
                            }
                        }
                    }
                    arr_21 [i_0] [i_0] [1] [i_0] = (arr_19 [i_2] [4] [i_0] [i_0] [i_0] [i_0]);
                    var_25 = ((!((var_6 && (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    {
                        var_26 = ((((min((~var_19), (arr_6 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_0])))) ? 73 : (arr_19 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_0] [10] [i_7 - 1])));
                        var_27 = (min(var_27, var_18));
                        var_28 = ((((1637 ? (((!(arr_10 [i_0] [i_0] [i_7 - 1] [i_7] [0] [i_9])))) : (65532 << 9))) << (var_19 - 240)));
                    }
                }
            }
        }
        var_29 = (((arr_1 [i_0]) ? ((((((arr_30 [i_0] [i_0] [i_0] [i_0] [i_0]) / (arr_11 [i_0] [i_0])))) ? (((~(arr_26 [i_0] [i_0])))) : ((var_1 ? 2401189073 : (arr_26 [11] [1]))))) : (arr_24 [i_0])));
    }
    for (int i_10 = 1; i_10 < 1;i_10 += 1)
    {
        var_30 = (max((((((((arr_10 [i_10] [1] [i_10] [i_10] [i_10] [i_10]) ? 0 : var_11))) ? var_17 : (arr_6 [i_10] [i_10] [7] [i_10 - 1])))), (((arr_8 [i_10] [i_10] [14] [i_10 - 1] [1]) ? var_2 : ((22 ? (arr_2 [2]) : var_2))))));
        arr_35 [i_10 - 1] [i_10] = (arr_26 [12] [i_10 - 1]);
        var_31 = arr_8 [i_10] [i_10] [i_10] [i_10] [i_10];
    }
    #pragma endscop
}
