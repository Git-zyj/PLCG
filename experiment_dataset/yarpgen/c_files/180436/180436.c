/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~((((max(-59, var_0))) << (((-127 - 1) + 137))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_12 = var_6;
        var_13 = var_7;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_14 = 15;
        var_15 = ((~(-59 & 100)));
        var_16 = var_10;
    }
    for (int i_2 = 2; i_2 < 24;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 3; i_3 < 24;i_3 += 1)
        {
            var_17 *= (max(((((arr_10 [6]) < (arr_10 [20])))), ((100 + ((max(var_7, 99)))))));
            arr_11 [24] [i_2] [i_3 - 2] = (max((((!(((100 ? -29 : var_4)))))), (((arr_8 [i_2] [i_3 - 2]) / var_10))));
            var_18 = ((((max((arr_10 [i_2]), var_2))) ? (var_4 / var_2) : (arr_10 [i_2])));
            arr_12 [i_2] = (max((max(((var_6 + (arr_10 [i_2]))), ((max(99, -3))))), (!59)));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_19 *= (((arr_13 [i_4]) / (arr_14 [i_2] [i_4])));

            for (int i_5 = 2; i_5 < 24;i_5 += 1)
            {
                var_20 = (((arr_8 [i_4] [i_5 - 2]) * -73));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            var_21 *= ((+(((arr_9 [i_2] [i_4] [i_2]) - var_1))));
                            var_22 = ((!(arr_13 [i_2])));
                        }
                    }
                }
                var_23 = (~-var_4);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_24 = (max(var_24, (((82 >> (((arr_22 [i_2] [i_4] [9] [9] [14]) + 121)))))));
                            var_25 = arr_8 [i_5 + 1] [i_9 + 3];
                            var_26 *= (((arr_25 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2]) >= (arr_22 [i_5] [i_5] [i_5 + 1] [i_5] [i_9 - 1])));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 22;i_12 += 1)
                    {
                        {
                            var_27 = ((var_7 ? var_2 : var_6));
                            arr_32 [i_2] [i_4] [15] [i_10] [i_11] [i_12] = ((-((var_8 ? 3 : -65))));
                        }
                    }
                }
            }
        }
        var_28 *= arr_13 [6];
    }
    for (int i_13 = 2; i_13 < 24;i_13 += 1) /* same iter space */
    {
        arr_37 [9] = 3;
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 24;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 21;i_15 += 1)
            {
                {
                    var_29 = 95;
                    arr_42 [5] [5] [5] [i_15] = (((arr_10 [22]) - -99));
                    var_30 = arr_39 [i_13];
                    var_31 = ((var_6 < (((arr_41 [i_13 - 2]) >> (-12 + 21)))));
                }
            }
        }
    }
    var_32 = var_1;
    var_33 = ((var_0 * (~34)));
    var_34 = (min(var_34, ((((-1 + 2147483647) >> (0 * var_4))))));
    #pragma endscop
}
