/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = var_11;
                    var_15 = ((((((((-5 ? (-9223372036854775807 - 1) : 131))) ? ((((arr_1 [i_0 - 1]) ? (arr_2 [i_1]) : var_14))) : (~6263642396137261579)))) ? (((var_4 ? 18446744073709551615 : var_10))) : (arr_4 [i_2] [i_2 + 1] [i_2 + 1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [7] [i_1] [i_2] [i_3] [7] = -13;
                                var_16 = ((-(arr_4 [i_0 + 2] [i_2] [i_2 + 1] [i_4 + 2])));
                            }
                        }
                    }
                    var_17 = (max(var_17, (arr_0 [i_0])));
                }
            }
        }
    }
    var_18 = var_2;
    var_19 = 116;
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_20 = ((-(((((-8 ? (arr_14 [1]) : 3386497566664597793))) ? (max(var_13, (arr_12 [i_5] [i_6] [i_5] [10] [i_8]))) : (var_12 / 112)))));
                            var_21 &= (((((arr_2 [i_5 + 4]) - (arr_2 [i_5 + 4])))) ^ (((3386497566664597803 * 4294967295) + var_2)));
                            arr_24 [i_7] = ((433958181 ? (((-106 * var_6) ? var_12 : var_8)) : var_8));
                            var_22 = (max(var_22, (((var_5 ? ((((((arr_6 [i_8] [i_7] [i_7]) ? 1 : var_1))))) : var_5)))));
                        }
                    }
                }
                var_23 = (min(var_23, ((((((-(arr_4 [i_5] [i_5] [i_5 + 2] [i_5 + 3])))) ? (((((((-1026324185 % (arr_11 [i_5] [i_5] [14] [1] [14])))) && var_0)))) : 7185764522288486786)))));
                var_24 = ((-((-9223372036854775784 ? var_9 : (((arr_16 [8] [i_5]) ? -106 : 112))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 3; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 23;i_10 += 1)
        {
            {
                arr_32 [i_9] [i_9] [i_10] = (~((var_0 ? (min(var_9, var_0)) : 101)));
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 24;i_12 += 1)
                    {
                        {
                            arr_37 [i_11] [i_10] = ((((-106 ? 552562955 : var_13))));
                            arr_38 [i_11] [i_11] = (36 & -1559473328);
                        }
                    }
                }
                arr_39 [i_10] = ((((var_10 ? var_9 : 1))) ? var_13 : (arr_31 [i_10 + 2] [i_10]));
                var_25 = ((~(arr_26 [i_10 - 1] [i_9])));
            }
        }
    }
    #pragma endscop
}
