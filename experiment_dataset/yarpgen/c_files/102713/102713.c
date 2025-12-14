/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = 2147483647;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    {
                        var_20 |= var_9;
                        arr_13 [i_1] [20] [i_3 + 1] = (((79 != (arr_12 [i_3 - 1] [i_3 + 2] [i_3 + 3] [i_3 + 1]))) ? (((arr_12 [i_3 + 2] [i_3 + 2] [i_3 + 1] [i_3 - 2]) & (-2147483647 - 1))) : (((arr_12 [i_3 + 1] [i_3 - 3] [i_3 - 2] [i_3 - 2]) + (arr_12 [i_3 + 2] [i_3 + 2] [i_3 + 3] [i_3 + 2]))));
                        arr_14 [i_0] [i_1] [i_0] [16] [i_0] [i_0] = max(2147483647, ((2147483647 ? -3 : 177)));
                        var_21 = (max(9, ((-(arr_9 [i_1] [i_3 - 3] [i_3 + 1] [i_3])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 23;i_5 += 1)
            {
                {
                    arr_19 [i_0] [i_0] [i_0] = arr_11 [8];
                    arr_20 [i_0] [19] [i_5] = (arr_17 [i_0] [17] [18]);
                    var_22 = (((((-(((arr_0 [i_0]) ? (arr_1 [i_0]) : var_7))))) ? (min(var_5, ((-109 ? var_13 : var_17)))) : (((((max(var_2, 25239))) - (108 - var_4))))));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_23 = (min(var_23, ((216 ? (18446744073709551613 >= var_3) : var_7))));
                                arr_26 [i_6] [13] [8] [i_6 + 3] = var_13;
                            }
                        }
                    }
                    arr_27 [i_0] [9] [20] [20] = (arr_21 [i_0]);
                }
            }
        }
        var_24 = 18446744073709551613;
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        arr_30 [i_8] = (min((min((arr_29 [i_8] [i_8]), (arr_8 [i_8]))), 1066053528));
        var_25 = ((((9223372036854775792 / ((((arr_1 [i_8]) * (arr_9 [i_8] [i_8] [21] [i_8]))))))) ? var_11 : (((!var_10) - var_10)));
        var_26 = (max(-96, ((20 ? -4366 : -32763))));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 13;i_9 += 1)
    {
        var_27 = (((arr_31 [i_9 + 1]) ? (arr_31 [i_9 + 2]) : 3007848064303229584));
        arr_33 [i_9] [i_9] = var_17;
        var_28 = (((arr_32 [i_9 + 2]) ? (arr_21 [i_9 + 1]) : (arr_21 [i_9 + 3])));
    }
    var_29 = var_5;
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 21;i_11 += 1)
        {
            {
                var_30 = ((var_9 ? (((min(748816453, (arr_17 [i_10] [i_10] [7]))))) : (((var_11 && (arr_37 [i_11] [i_10]))))));
                var_31 = var_4;
                var_32 *= ((!((((min(var_10, 96))) && var_2))));
            }
        }
    }
    #pragma endscop
}
