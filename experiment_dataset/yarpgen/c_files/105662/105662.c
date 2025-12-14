/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (1362762111 && 1362762111);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [9] [i_1 + 2] [0] [i_1] = (2581755748 <= 1362762104);
                        var_19 = (max(var_19, (((-31144 ? -var_9 : 6503)))));
                        var_20 = (max(var_20, (arr_4 [i_1 - 4] [i_0])));
                    }
                    for (int i_4 = 3; i_4 < 14;i_4 += 1)
                    {
                        var_21 ^= var_16;
                        var_22 = (min(var_22, 1219014641));

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_23 = (min(((((arr_16 [2] [i_1 - 2] [i_4 + 1] [5]) / ((~(arr_3 [i_0] [i_1 - 3])))))), (min(var_5, (((var_10 ? var_13 : var_12)))))));
                            var_24 = (min(var_24, (((1125899906842623 <= (min(2984615363248306298, ((var_2 - (arr_4 [i_0] [i_2]))))))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_20 [i_0] [i_1] [i_0] [i_0] [i_0] = var_3;
                            arr_21 [i_0] [i_1 - 3] [i_1] [i_4] [i_6] = (arr_7 [i_1] [i_0] [i_1 - 2] [i_2] [i_2] [i_2]);
                            arr_22 [i_0] [i_0] [i_2] [i_4 - 2] [2] [3] [i_1] = ((arr_18 [i_0] [i_1] [i_1 - 2] [i_1 - 3] [i_0] [i_2] [i_4]) & var_13);
                            arr_23 [i_0] [i_0] [i_0] [0] [i_0] [i_1] [3] = ((var_1 & (((var_13 ? var_8 : var_11)))));
                        }
                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            var_25 = ((var_15 - (((arr_0 [8] [8]) - (((arr_8 [i_0] [9] [i_2] [i_7]) ? var_0 : var_2))))));
                            arr_26 [i_1] [i_4 - 1] [i_2] [i_1] [i_1] = ((((((max(-43, var_3)))) <= (min(450621191, 3844346104)))));
                        }
                        var_26 = ((((0 * ((~(arr_7 [i_1] [i_0] [i_1] [2] [i_4 - 3] [i_4]))))) <= var_7));
                    }
                    var_27 = ((((max(30200, var_15))) & (((arr_8 [i_0] [i_1] [i_2] [i_1 - 1]) - ((max(var_3, (arr_25 [i_1] [14] [i_0] [i_0] [i_1]))))))));

                    for (int i_8 = 1; i_8 < 14;i_8 += 1)
                    {
                        arr_31 [8] [i_1] [i_2] [i_2] [i_1] [i_0] = (((((var_5 <= (arr_9 [i_0] [i_1])))) | (arr_9 [i_1 - 2] [i_2])));

                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            arr_34 [i_0] [i_1] [i_2] [13] [6] = (((((!var_6) & (~var_9))) & (((var_7 & var_15) ? var_3 : ((((arr_6 [i_1] [i_1]) && var_8)))))));
                            arr_35 [i_0] [14] [i_1] = (((((var_13 & (arr_13 [i_2] [i_1] [i_2] [i_2] [i_9] [i_9])))) % (min((~var_6), (min(var_0, var_15))))));
                            var_28 ^= (arr_8 [i_1 + 1] [4] [2] [3]);
                            arr_36 [12] [12] [i_2] [i_1] [i_9] = var_15;
                        }
                        arr_37 [i_1] = (((arr_1 [i_8]) <= 97));
                        arr_38 [i_0] [i_1] [i_2] [i_8] [i_0] = (((~89) & ((var_8 ? (arr_33 [0] [12] [12] [i_1] [i_0]) : (((!(arr_15 [i_0] [2] [i_0] [0] [i_2] [i_2] [9]))))))));
                    }
                }
            }
        }
    }
    var_29 = 9;
    #pragma endscop
}
