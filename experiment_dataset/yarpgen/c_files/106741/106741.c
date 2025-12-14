/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) ? var_1 : var_8));

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_16 = 9545932311748925064;
                            arr_14 [1] [i_1] [i_2] [i_3] [i_4] = (arr_5 [10] [i_1]);
                        }
                    }
                }
                var_17 = var_11;
                var_18 = (((arr_4 [i_1 + 1] [i_1 + 1] [i_1]) ? (arr_4 [i_1 + 1] [i_1 + 2] [i_1]) : 65535));
            }
            for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
            {
                var_19 = ((+(((arr_9 [i_0] [i_0] [6] [i_1]) | (arr_16 [i_0] [i_1] [i_1])))));
                var_20 = (~(((arr_8 [i_1]) & (arr_10 [i_1]))));
            }
            for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
            {
                var_21 -= ((-(arr_18 [12] [i_1 + 2])));
                arr_22 [i_1] [i_1] [i_6] = (((arr_4 [i_1 + 1] [i_1 - 2] [i_1]) ? (arr_11 [i_0] [i_1] [i_6] [i_6 + 1] [i_1] [i_0]) : ((var_10 ? var_8 : (arr_11 [i_0] [0] [8] [6] [i_1] [i_6 - 1])))));
                var_22 += var_12;
            }

            for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
            {
                var_23 += (((arr_16 [i_1 - 1] [i_1 + 2] [10]) ? var_0 : (arr_16 [i_1 - 1] [i_1] [8])));
                var_24 = 13;
                var_25 = ((((var_1 ? var_2 : (arr_16 [i_0] [10] [i_1]))) % (arr_23 [i_0] [i_1] [i_7])));
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
            {
                var_26 = var_12;

                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {

                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        var_27 = (((((var_11 ? var_0 : var_3))) ? (arr_17 [i_1] [i_1 + 1]) : (arr_29 [i_9] [i_8] [i_1 - 2] [i_0])));
                        var_28 *= ((((arr_19 [i_0] [14] [i_9]) ? (arr_16 [i_1 + 2] [i_8] [2]) : (arr_17 [10] [i_1]))));
                        arr_34 [12] [11] [i_1] [i_1] [i_1] [i_0] = (((arr_23 [i_1 - 1] [i_1] [4]) ? (arr_23 [i_1 - 1] [i_1] [i_10]) : (arr_23 [i_1 - 1] [i_1] [i_1])));
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_29 = (((arr_19 [i_1 + 1] [i_1 - 1] [i_1 - 1]) | (arr_19 [i_1 + 2] [i_1 - 2] [i_1 - 1])));
                        arr_37 [i_0] [7] [i_8] [i_9] [i_1] = (var_2 || var_12);
                    }
                    var_30 = (min(var_30, ((((((8900811761960626551 ? (arr_9 [i_0] [i_1] [i_8] [2]) : (arr_0 [1] [i_1 - 2])))) || var_9)))));
                    var_31 = var_3;
                    arr_38 [i_1] [i_8] [i_1] [i_1] = (((arr_7 [i_1] [i_1]) ? 0 : (arr_15 [i_1] [i_1 + 2] [i_1])));
                    var_32 = ((-((var_6 ? (arr_13 [9] [i_9] [i_1] [9] [i_1] [9] [i_0]) : var_11))));
                }
                var_33 = (((arr_9 [i_1 + 2] [i_1 + 1] [i_8] [i_1]) < (arr_23 [i_1 + 2] [i_1] [i_1 - 1])));
                var_34 = var_13;
            }
            arr_39 [i_1] = (((arr_15 [i_1 - 1] [i_1] [i_1]) ? ((1 ? var_7 : (arr_17 [i_1] [13]))) : var_5));
            var_35 = ((arr_27 [i_1] [i_1 + 1]) ? (arr_27 [i_1] [i_1 + 2]) : (arr_27 [i_1] [i_1 + 1]));
        }
        var_36 = ((((((arr_25 [i_0] [10] [0]) ? 227 : 220266927))) ? (((arr_17 [8] [i_0]) ? var_8 : var_0)) : ((var_4 ? (arr_13 [i_0] [i_0] [i_0] [i_0] [4] [i_0] [i_0]) : (arr_18 [8] [8])))));
    }
    var_37 = (min(var_37, ((min(var_6, (((max(var_2, var_7)))))))));
    #pragma endscop
}
