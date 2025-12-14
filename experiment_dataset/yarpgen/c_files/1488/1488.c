/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= 14434292661597753995;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_9;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 += ((((!(arr_9 [i_0] [i_1] [i_4]))) ? ((var_4 ? var_8 : (var_10 < var_8))) : (arr_12 [13] [i_1] [i_1] [i_1])));
                                var_14 = (max(var_14, var_5));
                            }
                        }
                    }
                }
                var_15 = (((0 + 4012451412111797621) ^ (arr_14 [i_0] [i_1] [i_0] [i_1])));
                arr_19 [i_0] [i_0] = var_3;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {

                /* vectorizable */
                for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    arr_27 [i_7] = ((15225477599715447663 ? var_4 : 1438754407403728190));
                    var_16 = -1438754407403728213;
                    arr_28 [i_6] = ((var_10 ? var_2 : var_0));
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 13;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_17 = (((arr_18 [i_8 + 1] [i_8 - 1] [i_9] [i_8 - 1] [i_8 - 2] [i_9]) ? (var_7 + var_2) : var_0));
                        var_18 = (min(var_18, 30117));
                        var_19 = ((+((((arr_11 [i_9]) < 240)))));
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_20 ^= var_1;
                        var_21 = ((-((var_9 ? (arr_36 [i_10] [i_8 - 2] [9] [3] [i_5] [i_8 - 2]) : (arr_30 [11] [i_8 + 1] [i_5])))));
                        var_22 = var_8;
                        var_23 = (max(var_23, ((((~var_2) || var_5)))));
                    }
                    arr_39 [i_5] [i_5] [i_5] = var_2;
                    arr_40 [i_8] [i_6] [i_8] = -6531514751118251874;
                    var_24 = (max(var_24, ((((arr_23 [i_8] [i_8 + 1]) == 24973)))));
                }
                arr_41 [11] = ((!((((-7341 ^ 6531514751118251874) ? (1224331529 / -698820464469984472) : var_4)))));
                var_25 = min((((var_5 && 12052) ? -1438754407403728232 : 10676097319758808223)), (((14434292661597753995 > (arr_38 [i_6] [i_6] [i_5])))));
            }
        }
    }
    #pragma endscop
}
