/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            arr_4 [i_1] [i_1] = (var_16 >= 28);
            var_20 = (max(var_20, ((((((-2147483647 - 1) ? (arr_3 [i_0] [i_0]) : (arr_2 [i_1 - 1]))) - (arr_3 [i_1] [i_1 + 2]))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_21 = arr_2 [i_0];

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_22 = 2147483636;
                            arr_14 [i_1] [i_1] [i_1] [i_1] [i_1 + 2] [i_1] = (arr_8 [i_0] [11] [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_23 = ((var_7 >> ((((15802 ? (arr_13 [i_5] [1] [i_5] [i_3] [10] [i_0] [i_0]) : (arr_0 [i_3] [i_5]))) + 1647037561))));
                            arr_17 [i_0] = (((((11801477121875698923 > (arr_9 [i_0] [i_0] [i_2] [i_2] [i_0] [i_5])))) * (arr_11 [i_1 - 1])));
                            var_24 = (((arr_10 [i_0] [i_1 + 2]) ? (arr_5 [i_0]) : ((var_9 ? var_9 : (arr_6 [i_0] [i_0] [i_2] [i_5])))));
                            var_25 = (((~0) ? ((var_12 ? 1 : (arr_13 [i_5] [i_0] [i_0] [i_2] [i_1] [i_0] [i_0]))) : (arr_10 [i_1 + 2] [i_2])));
                            var_26 *= ((((((arr_3 [1] [i_1 + 3]) ? var_1 : var_9))) ? (arr_2 [i_0]) : (arr_5 [i_0])));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_27 = (((arr_10 [i_0] [i_1 + 1]) ? var_2 : (arr_10 [i_1 + 1] [i_1 + 4])));
                            var_28 = var_4;
                        }
                        arr_21 [i_0] [1] = (((arr_6 [8] [i_2] [i_1 + 1] [i_0]) | (arr_6 [i_0] [i_1] [i_2] [i_3])));
                    }
                }
            }
            var_29 = (max(var_29, ((((arr_2 [i_1 + 2]) ? (arr_13 [6] [i_1 + 4] [i_1 + 1] [i_1] [i_1] [i_1] [i_1 + 2]) : (arr_13 [i_1 + 2] [i_1 + 3] [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1 + 4]))))));
        }
        var_30 = ((((var_10 ^ (arr_8 [1] [i_0] [i_0])))) ? (arr_3 [i_0] [i_0]) : (arr_11 [i_0]));
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_31 = (min(var_31, ((((((-1448405235 ? (arr_2 [i_7]) : 303267146))) - var_12)))));
                                arr_33 [i_7] [i_7] [i_8] [i_0] [i_9] [i_0] = (arr_7 [i_7 + 4]);
                                arr_34 [i_7] [11] = ((~(((!(arr_11 [i_0]))))));
                            }
                        }
                    }
                    var_32 = (((arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [4]) ? (arr_32 [i_0] [i_7 - 3] [4] [i_7] [4] [i_0]) : var_15));
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 23;i_13 += 1)
            {
                {
                    var_33 = ((18446744073709551613 ? ((min(127, (arr_36 [i_11])))) : ((~((max(85, var_14)))))));
                    var_34 = ((-((((min(var_3, var_15))) ? (min((arr_42 [i_11] [i_12] [i_13]), var_7)) : (arr_42 [i_13 - 2] [17] [i_12])))));
                }
            }
        }
        var_35 += (((arr_35 [20]) ? ((((min(15790, var_13))) ? (min(var_7, (arr_38 [i_11] [i_11] [i_11]))) : (((min(var_7, var_13)))))) : (arr_43 [i_11])));
    }
    #pragma endscop
}
