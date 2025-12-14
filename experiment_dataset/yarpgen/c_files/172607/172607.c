/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (var_10 || var_5);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = (3810 && -3132365132480691783);
        arr_3 [i_0] = (((((arr_0 [i_0]) ? var_4 : var_7)) / ((-var_2 ? var_9 : var_0))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            var_16 -= (arr_4 [4] [i_0]);
            var_17 |= arr_0 [i_0];
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_2] [i_2] = ((((min(((var_8 ? var_7 : (arr_7 [i_0] [i_0] [i_2]))), var_3))) ? var_2 : (((arr_2 [i_0]) >> (11976582779574264428 - 11976582779574264410)))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_16 [4] [i_4] [21] [i_2] [i_0] = ((max((arr_15 [i_0] [i_3] [i_3] [i_4] [i_3] [i_0] [i_4]), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            var_18 = (max(var_18, var_4));
                        }
                    }
                }
            }
            arr_17 [i_0] = ((min(var_10, ((min(var_1, var_1))))));
            arr_18 [i_0] [i_0] = (((((150 ? var_11 : var_7))) * (((arr_15 [i_0] [20] [i_2] [i_2] [i_2] [7] [i_2]) ? (arr_15 [20] [3] [12] [i_0] [i_2] [i_2] [i_0]) : var_11))));
            arr_19 [i_0] [i_0] = ((var_5 ? (((-3132365132480691770 / 255) & (arr_14 [i_2] [7] [i_2] [7] [i_2] [i_2]))) : var_9));
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 23;i_8 += 1)
                {
                    {
                        var_19 = (((arr_2 [i_0]) <= (((((var_1 ? (arr_4 [i_0] [i_7]) : var_13))) ? var_12 : var_5))));
                        arr_29 [14] [14] [i_7] [18] = ((-(((arr_6 [i_8 - 4]) ? var_6 : (arr_6 [i_8 - 1])))));
                        arr_30 [i_0] [i_0] [i_0] [i_7] [i_0] [15] = ((!((((arr_9 [i_0] [i_0] [i_0]) ? (arr_24 [13] [i_7] [i_7]) : (((arr_15 [i_0] [i_6] [i_0] [20] [8] [i_8] [i_7]) / var_3)))))));
                    }
                }
            }
            arr_31 [i_0] [i_0] = ((!((min(var_5, var_12)))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            arr_36 [i_0] [i_9] |= (((((-(arr_34 [i_0] [i_0])))) ? (arr_2 [i_0]) : ((var_7 ? 57944 : 255))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    {
                        arr_42 [2] [i_11] [i_11] = ((!(arr_4 [i_0] [i_9])));
                        var_20 = (var_5 > var_11);
                        var_21 = ((var_1 ? (arr_21 [i_10] [i_10] [i_0]) : var_4));
                    }
                }
            }
            var_22 = (((((var_1 ? (arr_1 [i_0]) : var_10))) ? var_5 : ((var_11 ? var_8 : var_8))));
        }
    }
    #pragma endscop
}
