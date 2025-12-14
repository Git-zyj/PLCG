/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((max(((min(var_8, var_8))), ((var_0 ? var_5 : 1637270186612284407)))), 1));
    var_11 = (var_1 ? var_0 : (((var_7 < ((1 ? 3 : var_1))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_12 = var_5;
        var_13 = ((+((((max((arr_0 [i_0] [i_0]), (arr_1 [i_0])))) ? ((((arr_0 [i_0] [8]) >= var_8))) : ((var_7 ? 944172036 : var_2))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = arr_3 [i_1];
        var_14 = (max(var_14, (~-40)));
        arr_5 [i_1] = (max((var_3 - 46), ((((1 ? 1 : -47)) | 0))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_15 -= ((-(arr_10 [i_1] [3] [i_5] [i_5])));
                            arr_16 [i_2] [1] [i_3] [i_4] [i_5] = (((max((min(var_2, var_9)), ((max(var_5, 244)))))) ? (((arr_14 [i_1] [i_2] [i_3] [i_1] [i_5]) + ((var_2 ? 244 : 79)))) : (arr_3 [i_5]));
                            var_16 |= ((!(((1125891316908032 ? ((min(var_0, (arr_14 [i_1] [i_4] [1] [i_4] [i_5])))) : (var_1 <= 0))))));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_21 [i_1] [i_1] [i_2] [i_4] = (((((((var_0 ? 1 : (arr_1 [i_1]))) & ((-(arr_10 [i_1] [i_1] [i_3] [i_4])))))) ? (((min(var_4, (arr_2 [i_6]))) ^ (arr_6 [i_3] [i_4]))) : 1369104514));
                            arr_22 [i_1] [i_2] [i_3] [i_4] [i_4] [i_6] [i_6] = (max((min(((511 ? var_0 : (arr_8 [i_2] [i_2] [i_4]))), ((1 ? -2081902002 : 1)))), (((!77) ? ((16074238999246528144 ? 1 : 511)) : (var_8 - var_6)))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_17 = (arr_12 [i_1] [i_3] [i_4]);
                            var_18 = -76;
                            var_19 = (min(var_19, ((~(~var_1)))));
                            var_20 = ((2274236612 ? 21 : 59));
                            arr_26 [7] [i_2] [i_3] [i_4] [i_2] [i_7] [i_7] = var_7;
                        }

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_21 |= 59;
                            var_22 |= ((var_6 ? (arr_2 [i_8]) : (arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] [i_2])));
                            arr_29 [i_1] [i_1] [i_2] [12] [i_2] [11] [i_8] = var_8;
                            arr_30 [i_2] = (arr_8 [i_2] [i_2] [i_3]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
