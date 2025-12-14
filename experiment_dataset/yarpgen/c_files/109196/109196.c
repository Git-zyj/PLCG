/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [1] = ((var_11 ? var_7 : (arr_6 [i_1 + 2] [i_1] [i_1 + 3])));
                    var_17 |= 0;
                }
            }
        }

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_18 = (min(var_18, (((-11 ? (arr_11 [i_0]) : var_14)))));
            arr_13 [i_0] = var_12;
            var_19 += (arr_2 [i_3]);
        }
        arr_14 [i_0] = -137304735744;
        arr_15 [i_0] = (arr_8 [i_0] [i_0] [i_0]);
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_20 |= 1269630452;
        var_21 += max((((((var_10 ? 14888 : var_8))) ? 65535 : (((arr_3 [i_4]) ? (arr_11 [i_4]) : var_16)))), (((((var_10 ? var_3 : var_1))) ? 10902473062977011566 : (((1572864 ? (arr_5 [1] [i_4] [i_4] [1]) : var_15))))));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_22 = 576460752303423488;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        arr_31 [i_5] [i_6] [i_7] [i_6] [i_7] = var_15;
                        arr_32 [i_5] [i_6] = ((!((max(var_16, 8)))));
                        arr_33 [i_5] |= (var_16 || var_13);

                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_23 = (min((((((max(27, 1))) ? var_3 : (!var_6)))), (max(var_13, (arr_19 [i_5])))));
                            arr_37 [i_5] [i_6] [10] [10] [i_5] = (arr_22 [13] [i_6]);
                            var_24 = ((!((max((arr_27 [i_7] [i_6] [i_7] [i_7 + 1]), 0)))));
                            arr_38 [i_5] [i_6] [i_7] [17] [i_9] = (arr_36 [i_5] [i_6] [i_6] [i_5]);
                        }
                        for (int i_10 = 4; i_10 < 20;i_10 += 1)
                        {
                            arr_41 [i_10] [i_6] [i_5] = ((var_1 ? 28672 : (max((arr_36 [i_5] [i_7] [i_6] [i_10 - 3]), (max(var_3, var_13))))));
                            var_25 += (arr_40 [i_7 + 1] [i_8] [i_8] [i_10] [i_10]);
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                arr_48 [i_5] [i_5] [i_11] [i_12] = (((arr_47 [i_5] [i_11]) ? (arr_35 [i_5] [i_11] [i_5]) : (arr_43 [i_12] [20] [20])));
                var_26 += (~var_1);
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 19;i_14 += 1)
                    {
                        {
                            var_27 += 32;
                            arr_57 [i_5] [i_11] [i_12] [i_13] [i_13] [i_14] |= (9403594220532740834 ? var_12 : 18446744073709551615);
                            var_28 += (arr_23 [i_14 + 1] [i_14 - 3] [i_5]);
                        }
                    }
                }
                var_29 = (arr_30 [3] [i_11] [19] [i_12] [i_12]);
            }
            var_30 = var_2;
        }
        arr_58 [i_5] = (((((!(arr_52 [i_5] [i_5] [i_5] [i_5])))) > (~var_9)));
    }
    var_31 = (((min(var_15, (!36863))) ? (((((8191 ? var_11 : var_5))) ? var_7 : (max(var_4, var_2)))) : (var_5 >= var_11)));
    #pragma endscop
}
