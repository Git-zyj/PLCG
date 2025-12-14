/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 17229367344512028346;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 += ((var_1 ? (((!var_1) ? 22575 : 22584)) : 992));
        arr_3 [i_0] = (((((181 ? ((((arr_1 [i_0]) ? var_1 : 22560))) : 1152903912420802560))) ? ((-(((!(arr_0 [i_0] [i_0])))))) : ((((max(22554, 127))) | (!var_2)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_12 = (max(var_12, -2062860794163074815));
                            arr_15 [i_1] [i_1] [i_1] [14] [i_1] = (!249);
                        }
                    }
                }
            }
            var_13 = (max(var_13, (((30 ? 17229367344512028342 : 217)))));
            var_14 = ((!(((var_9 ? var_6 : var_8)))));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_19 [i_5] [i_5] [i_5] = ((-22560 ? 22558 : 12));

            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                arr_22 [i_0] [i_0] [i_5] [i_5] = ((var_1 ? ((max(138, (arr_17 [i_6] [i_6] [i_6])))) : (182 >= -22528)));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_15 = (min(var_15, ((((65515 + ((134 ? 17229367344512028360 : -1))))))));
                            arr_28 [i_0] [i_0] [i_5] [i_6] [i_7] [i_8] [i_8] = (((((arr_12 [i_6] [i_5] [i_6] [i_7] [i_8]) ? (arr_12 [i_8] [i_7] [i_6] [i_5] [i_0]) : (arr_12 [i_0] [i_5] [i_0] [i_7] [i_7]))) ^ (((arr_8 [i_0] [i_5]) ? (arr_8 [i_5] [i_5]) : 6370))));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            var_16 = ((-((var_3 ? (arr_13 [18] [i_9] [i_9] [i_0]) : (arr_13 [i_0] [i_9] [i_0] [i_0])))));
            var_17 = (max(var_17, var_8));
        }
        arr_32 [2] [i_0] &= (min((arr_13 [i_0] [i_0] [i_0] [i_0]), (~30088)));
        arr_33 [i_0] = (arr_30 [i_0] [i_0]);
    }

    for (int i_10 = 1; i_10 < 20;i_10 += 1)
    {
        arr_38 [18] [i_10 + 1] |= arr_35 [i_10 + 2];

        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            var_18 = (arr_35 [i_10 + 2]);
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        {
                            arr_48 [i_10] [i_11] [i_14] [17] [i_13] [5] = (max((((arr_40 [i_10]) ? (arr_36 [21] [i_10]) : (arr_40 [i_10 - 1]))), 155));
                            var_19 *= ((~(!116)));
                        }
                    }
                }
            }
        }
        var_20 += (((((-(arr_43 [i_10 - 1] [i_10 + 2] [11] [i_10 + 2])))) ? ((~(arr_43 [7] [17] [17] [17]))) : (19874 / 10010)));
        var_21 -= (arr_47 [i_10] [2] [1] [i_10] [i_10 + 2] [i_10 + 1] [4]);
    }
    #pragma endscop
}
