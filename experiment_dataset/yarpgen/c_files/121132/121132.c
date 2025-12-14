/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 = (min(var_12, ((min(1774982742, (((((80 ? (-127 - 1) : var_8))) ? (~var_6) : var_7)))))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_13 = (((((max(var_10, var_9))) ? var_5 : (min(var_7, 8)))));
        var_14 ^= (((((max(-81, 82))) ? ((24364 ? var_2 : var_5)) : ((var_1 ? var_3 : var_5)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [7] [7] = (max(var_9, (((var_1 ? -80 : (arr_6 [i_0 - 1] [i_1] [i_2]))))));
                    var_15 = (((((~(max(65535, 631129884491050527))))) ? -5915 : (((~17317308137472) & 631129884491050538))));
                    var_16 = var_3;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 24;i_5 += 1)
            {
                arr_14 [1] [i_3] [i_5] [i_3] = var_3;
                arr_15 [i_3] [i_4] [i_5] = (arr_13 [i_5 - 1] [i_5 + 1] [i_5 + 1]);
            }
            for (int i_6 = 1; i_6 < 24;i_6 += 1)
            {
                var_17 = ((!(arr_12 [i_3] [21] [i_3] [20])));
                var_18 = (max(var_18, (((((var_10 ? var_1 : (arr_17 [i_3] [i_3]))) >> (-17317308137469 - 18446726756401414084))))));
            }

            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                var_19 = (var_8 % ((((arr_9 [13]) != 18446744073709551615))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            arr_25 [i_3] [i_3] [i_3] [i_3] [7] |= ((var_8 ? var_3 : ((17317308137472 ? (arr_18 [17] [17] [17] [17]) : (arr_24 [i_3] [i_3] [i_7] [i_7] [i_7])))));
                            arr_26 [i_9] [i_4] [i_8] [i_7] [i_4] [i_3] = (arr_23 [8] [i_8 + 2] [i_7] [i_7] [i_4] [i_3]);
                        }
                    }
                }
                var_20 += (arr_17 [i_3] [15]);
                var_21 = var_9;
            }
            var_22 = ((-69 / (arr_17 [i_3] [23])));
            arr_27 [i_4] = (((arr_9 [1]) - (((arr_13 [i_3] [18] [i_4]) ? (arr_10 [i_4]) : var_8))));
        }
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            var_23 = ((((-(arr_16 [i_3]))) - (max(((-(arr_9 [i_3]))), (arr_8 [i_3])))));
            arr_31 [9] [i_10] = (min((((((((((arr_17 [i_3] [i_3]) + 2147483647)) >> (var_3 - 1596088906)))) ? (!85) : var_1))), ((50798 ? ((18446726481523507200 ? 103732956621143133 : var_4)) : (min(var_4, 13))))));
        }
        var_24 = ((-((~(arr_9 [i_3])))));
    }
    #pragma endscop
}
