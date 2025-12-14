/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [17] [11] = (((!(((var_6 ? var_8 : var_9))))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 = (arr_7 [16] [i_2] [i_1] [i_0]);
                                var_13 = (min(var_9, ((min(-111, (arr_11 [i_0] [2] [i_3] [i_4]))))));
                                arr_15 [0] [i_1] [0] [i_3] [i_4] = (~110);
                                var_14 = (min(var_14, (((arr_5 [i_4]) ? 18270053537443169355 : (arr_11 [18] [i_3] [i_1] [i_0])))));
                            }
                        }
                    }
                    var_15 = (~var_0);
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_16 = (min(var_16, var_8));
                                var_17 = arr_23 [i_0] [i_1] [18] [3] [19];
                                arr_25 [i_1] = ((((max((arr_23 [i_7 - 1] [i_7] [i_7] [8] [i_7]), 96))) ? ((~(arr_23 [i_7 - 2] [i_7] [i_7] [11] [i_7]))) : (arr_23 [i_7 + 1] [1] [16] [i_7] [9])));
                            }
                        }
                    }
                    arr_26 [i_0] [i_1] [i_5] = ((((!(arr_24 [20] [10] [i_0] [i_0]))) ? ((var_2 ? var_3 : var_8)) : ((max((arr_19 [i_0] [i_0]), (arr_24 [1] [17] [i_5] [4]))))));
                    arr_27 [i_0] [i_1] [1] [6] = ((((((arr_1 [i_0] [12]) ? 18446744073709551605 : (arr_16 [i_0] [i_0] [i_1] [14])))) ? ((111 ? ((0 ? 53610 : -1)) : 192)) : (arr_12 [i_0] [19] [i_0] [i_0] [i_0])));
                    var_18 = ((0 ? var_3 : 198));
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                {
                    var_19 ^= ((((arr_2 [i_0]) && (((var_5 ? (arr_19 [i_0] [i_1]) : (arr_14 [i_0] [1] [i_1] [2] [17])))))));
                    var_20 = arr_18 [i_1];
                }
            }
        }
    }
    #pragma endscop
}
