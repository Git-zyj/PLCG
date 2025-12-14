/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min((~617), 7643127829085212292))) <= ((var_3 ? -var_10 : var_4))));
    var_15 = var_6;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (min(((min(var_11, 30534))), (min((arr_5 [i_0]), (88 / var_4)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 = ((!(((var_9 ? (arr_1 [i_4 + 2]) : ((min((arr_3 [i_0] [i_0]), var_9))))))));
                                arr_13 [13] [i_1] [i_2] [i_0] [i_4 + 2] = -var_3;
                                var_17 |= var_0;
                            }
                        }
                    }
                    arr_14 [i_0] [17] = ((((max(((((arr_2 [i_1] [10]) / var_6))), (max(27021597764222976, 614))))) == ((var_1 / (min(var_4, var_12))))));
                }
            }
        }

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        var_18 ^= ((((-65 ? 65535 : 7)) << (!3836478177225457545)));
                        var_19 = var_2;
                        arr_23 [i_0] [7] [1] [i_5] [i_0] = (((arr_21 [i_6] [i_0] [i_0] [i_0]) ? ((((arr_21 [i_0] [i_0] [0] [i_7]) ? (arr_21 [i_0] [i_0] [i_0] [i_0]) : (arr_21 [i_0] [i_0] [i_6] [i_6])))) : (((arr_2 [23] [i_5]) ? (max(var_11, 0)) : ((((arr_10 [i_0] [i_5] [i_7]) + 0)))))));
                        var_20 = var_13;
                    }
                }
            }
            var_21 = var_8;
            arr_24 [i_0] = ((((((((-615 ? 1 : 7643127829085212292))) ? (((var_7 ? (arr_5 [i_0]) : (arr_10 [i_0] [i_0] [i_0])))) : (((arr_15 [i_0] [i_5]) ? var_4 : var_1))))) ? var_4 : ((max(1081, -7643127829085212293)))));
            arr_25 [i_0] [i_0] [i_0] = var_7;
        }
    }

    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        arr_29 [i_8] = (~var_9);
        var_22 *= 18446744073709551615;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        arr_33 [i_9] = ((1 ? var_10 : var_11));
        var_23 = ((7643127829085212292 ? (arr_21 [i_9] [1] [i_9] [22]) : (arr_21 [i_9] [1] [i_9] [i_9])));
        var_24 = (((arr_19 [i_9]) ? (arr_0 [i_9]) : (arr_20 [i_9] [i_9] [i_9] [i_9])));
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        arr_37 [i_10] = (arr_10 [i_10] [24] [i_10]);
        var_25 *= (max(((max(1, 18))), (5207 ^ 24)));
    }
    #pragma endscop
}
