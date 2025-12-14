/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = ((-((+((3108767821 ? (arr_0 [i_0 + 1] [i_1]) : (arr_2 [i_0] [i_0])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_1] [i_1] [i_3 + 3] [i_0] [i_0] [i_1] = ((~(var_7 && -441216602)));
                                var_17 *= 11182287830754355772;
                                var_18 = (((arr_4 [i_0] [i_4]) / (min(2147483647, (7 - 2666264743)))));
                                var_19 = ((-(((!(((var_3 ? (arr_2 [i_3] [9]) : 2147483642))))))));
                            }
                        }
                    }
                }
                var_20 = (min(var_20, (((!((((1 ? var_9 : 1769675608)))))))));

                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_21 = ((~((((4294967279 & -441216620) > var_7)))));
                    arr_15 [16] [i_1] [i_1] [i_0] = ((~((~((254 & (arr_5 [i_0] [i_0] [i_0])))))));
                    var_22 = (min(var_22, (((7078629804613234331 ? (((!(arr_10 [i_1] [i_1] [8] [i_1] [2] [i_1] [8])))) : (((!(var_6 / var_3)))))))));
                    var_23 = ((!((((arr_13 [i_0 + 1]) ? 140 : (arr_7 [i_0 - 2] [i_5] [i_5] [i_5] [i_0] [i_5]))))));
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    arr_18 [i_6] [8] [8] [6] &= ((+(max((!var_13), (max(var_8, var_12))))));
                    var_24 = var_5;
                }
            }
        }
    }

    for (int i_7 = 1; i_7 < 21;i_7 += 1)
    {
        var_25 = (min(var_25, (((((-(arr_21 [i_7 - 1] [i_7 - 1]))) / (((-1308504442 % (arr_22 [i_7 + 1] [i_7 + 1])))))))));
        arr_23 [i_7] = (var_12 < -1272256984);
    }
    var_26 = ((((415867530 - var_7) >= var_3)));
    var_27 = (max(var_27, var_6));
    #pragma endscop
}
