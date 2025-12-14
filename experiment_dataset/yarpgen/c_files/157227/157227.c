/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((-(9870948904634433386 * var_17))))));
        arr_3 [i_0] [0] = var_18;
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_2] [7] [i_1] [i_3] = (((((var_17 / ((max(var_13, var_12)))))) ? var_17 : ((~(arr_0 [i_4 - 1] [i_1 + 3])))));
                                arr_17 [1] [i_2] [i_2] = (max((arr_7 [i_0] [i_2]), var_10));
                                arr_18 [i_0] [i_0] [i_2] [i_0] [i_0] = (-(!var_0));
                                arr_19 [i_0] [9] [3] [1] [i_0] [i_2] [9] = (((((arr_0 [i_2] [i_1]) ? var_15 : (arr_8 [i_1] [i_3] [i_2]))) ^ (arr_11 [i_0] [6] [i_1] [i_1 - 3] [1] [i_4 - 2])));
                                var_19 = (min(var_19, var_13));
                            }
                        }
                    }
                    arr_20 [i_0] [i_2] [i_2] = (((arr_7 [i_1] [i_1]) ? ((((arr_10 [i_2]) ? (arr_6 [i_2]) : (arr_6 [i_2])))) : (min((arr_8 [i_1 - 4] [i_1 - 1] [i_2]), (arr_4 [i_0] [i_1 + 4])))));
                }
            }
        }

        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            arr_23 [i_5] [i_5] [i_0] = var_5;
            var_20 *= (((((var_7 ? (arr_0 [i_5 + 2] [i_5 - 1]) : var_17))) ? 144115188075855616 : (((((arr_22 [i_5 + 1]) < ((((arr_11 [i_0] [i_0] [i_0] [i_5] [i_5] [i_5 + 2]) == 32)))))))));
            arr_24 [i_5] = (!var_6);
        }
    }
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            arr_31 [i_6] [i_6 - 1] [i_6] = ((var_7 ? var_1 : (arr_25 [i_6 + 2])));
            arr_32 [i_6] = (((arr_30 [i_7 - 1] [i_7] [i_6 + 2]) ? var_1 : var_4));
            arr_33 [8] [i_7 + 1] [12] = var_9;
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_21 = (max(var_21, ((max((((~(arr_34 [i_6] [i_8] [3])))), (max(17179869183, 17179869203)))))));
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        var_22 = (min((arr_29 [i_9] [i_8]), (!101572403)));
                        var_23 = (max(var_23, (((((((arr_35 [i_6 - 1]) != (arr_35 [i_6 + 4])))) | var_18)))));
                        arr_40 [i_10] = 28;
                    }
                }
            }
        }
        var_24 = arr_38 [i_6 + 1] [i_6] [14];
        arr_41 [17] [i_6] = (arr_35 [i_6 + 1]);
    }
    for (int i_11 = 2; i_11 < 19;i_11 += 1)
    {
        arr_45 [17] [17] = (!16);
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    {
                        arr_52 [7] [7] [16] [i_14] [20] = ((-1772501720567070509 != var_14) ? (((var_6 ^ (arr_36 [i_14] [i_14] [i_11 + 1])))) : ((var_17 ? var_1 : (arr_25 [1]))));
                        var_25 += (arr_30 [2] [1] [i_13]);
                        var_26 = (max(var_26, ((max((((arr_25 [i_11 - 2]) ? (arr_50 [i_11 + 3]) : (arr_50 [i_11 + 3]))), (((!(arr_28 [i_11 + 2] [i_12])))))))));
                        arr_53 [i_11] [17] = ((~(var_2 & var_15)));
                    }
                }
            }
        }
        arr_54 [0] = var_16;
    }
    var_27 = var_7;
    #pragma endscop
}
