/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_7 && ((max((((var_6 ? var_9 : 2147483647))), ((-2147483647 ? 638067147139820284 : var_2)))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = (((((~(min(var_13, var_2))))) ? var_6 : ((((arr_1 [i_0]) * (arr_1 [i_0]))))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_16 |= ((28419 ? var_8 : ((((arr_2 [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [3] [i_0]) : (arr_2 [i_1] [i_0] [i_0]))))));
            arr_5 [i_1] [i_1] &= ((((((-2147483647 >= (arr_0 [i_0] [i_1]))) ? (var_12 ^ var_1) : 15354)) / -32760));
            arr_6 [i_0] [i_1] = (-2147483634 ? var_8 : (((-((-(arr_3 [i_0] [i_1] [i_1])))))));
        }
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_17 = ((!(var_1 >= 32)));

        /* vectorizable */
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_18 = var_0;
                var_19 |= ((!(((32 ? var_5 : (arr_8 [i_4] [i_2]))))));
            }
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_20 = (((((arr_12 [i_2]) & var_2))) ? ((((arr_13 [i_5] [i_3]) ? var_8 : (arr_16 [i_2] [i_2] [i_2])))) : (arr_15 [i_2] [i_3 - 2] [i_2] [i_2]));
                var_21 |= ((!((((arr_7 [i_3] [i_3]) ? 117 : (arr_8 [i_2] [i_5]))))));
                arr_18 [6] [6] |= (arr_9 [i_2] [i_3 - 2] [i_5]);
                var_22 *= ((6639651713064114053 ? (((arr_7 [21] [21]) + 0)) : ((2359831150 ? 2469019789 : (arr_9 [i_2] [i_3] [i_5])))));
            }

            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                arr_21 [i_2] [i_3] [i_6] = ((223 & var_10) ? var_9 : (((arr_16 [1] [i_3] [i_6]) ? (arr_20 [i_2] [i_2] [i_3] [i_3]) : (arr_13 [i_6] [i_3]))));
                arr_22 [i_6] [i_6] [i_2] [i_2] = ((((((arr_12 [i_3 - 2]) ? (arr_8 [i_2] [i_3]) : var_9))) ? (arr_16 [i_3] [i_3 - 2] [i_3 - 1]) : var_2));
                var_23 |= -28;
                arr_23 [i_2] [i_2] [i_2] [i_2] |= ((arr_19 [i_2] [i_3 + 2]) | ((((arr_7 [8] [i_3 + 1]) ? (arr_11 [i_2] [i_3]) : -28))));
            }
        }
        var_24 |= ((-(arr_7 [i_2] [i_2])));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            arr_28 [i_7] [i_7] = var_12;
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            var_25 = (min(var_25, (((var_6 ? (arr_16 [i_10] [11] [11]) : ((7404308453006930544 ? var_10 : 26913)))))));
                            var_26 *= (((arr_25 [i_8] [i_7] [i_2]) >= 3299065360));
                            arr_37 [i_2] [i_8] [i_8] [i_9] [i_10] |= var_2;
                            var_27 = ((var_5 & (arr_19 [i_2] [i_2])));
                            arr_38 [i_10] |= (((arr_10 [i_7] [i_2]) ? (arr_35 [i_2] [i_2] [i_8] [12] [i_10]) : (arr_32 [i_10] [i_7] [i_10] [i_9] [i_9] [i_10])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    {
                        var_28 |= (((arr_34 [i_2] [i_7] [i_12]) ? (arr_30 [i_12] [i_12] [i_12]) : var_5));
                        var_29 = 43268;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 21;i_13 += 1)
        {
            var_30 -= ((arr_15 [i_13 + 4] [i_13 + 1] [i_13 + 2] [i_13 - 1]) ? (arr_15 [i_13 + 4] [i_13 + 2] [i_13 + 4] [i_13 + 4]) : (arr_15 [i_13 + 4] [i_13 + 2] [i_13 + 3] [i_13 + 1]));
            arr_45 [i_2] [i_13] = (arr_16 [i_2] [i_13 - 1] [15]);
        }
    }
    var_31 = ((-((max(var_9, var_6)))));
    var_32 -= ((var_10 ? 18288 : var_3));
    var_33 |= var_2;
    #pragma endscop
}
