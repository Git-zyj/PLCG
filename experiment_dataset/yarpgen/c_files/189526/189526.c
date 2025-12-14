/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (arr_0 [i_0]);

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_17 ^= (arr_3 [i_0] [i_3]);
                        var_18 = (536870911 == (((-((-(arr_7 [i_1] [i_2] [i_1] [i_0])))))));
                    }
                }
            }
            var_19 = (arr_2 [i_1] [i_0]);
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_20 = (min(var_20, 9));
            var_21 ^= (((arr_11 [i_0] [i_4] [18] [i_4]) < var_0));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_22 = (min(var_22, var_0));
                            var_23 = ((((max(-var_8, (arr_18 [i_0] [i_4] [i_5] [i_6] [i_0])))) ? (((var_12 - var_12) ? 1125865547104256 : 1)) : var_4));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    var_24 = ((((14 < (arr_21 [i_0] [i_8] [i_9]))) ? 0 : (((((34359738352 ? 255 : (arr_3 [1] [i_9])))) ? ((var_6 ? var_8 : var_4)) : ((min(var_13, var_7)))))));
                    var_25 = ((((min(var_12, (arr_17 [i_10] [i_8] [i_8] [i_0]))) <= -var_9)));
                    var_26 = ((-(max((arr_11 [6] [i_9] [i_8] [1]), var_9))));
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        {
                            var_27 = (max(0, (((arr_31 [i_12] [i_8] [15]) ? ((0 ? 34359738352 : var_3)) : var_1))));
                            var_28 = (((max(var_5, ((var_12 ? var_15 : 7))))) ? (((max(235, 18446744073709551615)) / (((arr_23 [i_12] [i_9] [i_9] [i_8]) ? var_12 : 7)))) : var_4);
                        }
                    }
                }
            }
            var_29 = (~1);
        }
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            arr_37 [i_13] [i_13] = (!var_8);
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    {
                        var_30 = -18446744073709551610;
                        var_31 = ((!((((((arr_35 [8] [i_13] [i_14]) ? (arr_24 [i_0] [i_13] [7] [i_15]) : 32767))) || ((max(var_10, (arr_40 [i_15] [i_14] [i_13] [i_0]))))))));
                    }
                }
            }
        }
        var_32 = var_5;
    }
    var_33 = ((~(var_12 || var_13)));
    var_34 = var_6;
    #pragma endscop
}
