/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                var_15 -= 90;
                                arr_11 [18] [1] [1] [1] [8] [i_2] = (max((((var_2 & var_12) | (arr_6 [9] [23] [4] [14] [1]))), ((min(0, (arr_2 [i_0 - 2] [i_3 + 1]))))));
                                arr_12 [1] [6] [1] [13] [i_2] = var_4;
                            }
                            for (int i_5 = 1; i_5 < 1;i_5 += 1)
                            {
                                arr_15 [14] [7] [8] [i_2] [6] [15] = ((~((max(54447, var_3)))));
                                var_16 = (min(0, 14448739796833790977));
                            }
                            for (int i_6 = 1; i_6 < 1;i_6 += 1)
                            {
                                var_17 = ((1 << ((min(1, 202)))));
                                arr_19 [10] [23] [i_2] [1] [12] [1] = (((((arr_18 [i_0 - 1] [0]) ? 0 : (arr_18 [1] [i_3 - 1]))) <= (((arr_18 [i_3 + 2] [i_1]) % 11789413968244497973))));
                                arr_20 [11] [i_2] = (((arr_10 [18]) ? var_5 : 32767));
                                arr_21 [12] [16] [i_1] [1] [1] |= var_9;
                            }
                            arr_22 [i_0] |= (((max(((var_9 ? 1 : (arr_13 [1] [1] [20] [0] [13]))), ((max(2, 1))))) & (((38774 + 137) & (arr_0 [1])))));
                            arr_23 [i_2] [i_2] = (18446744073709551615 / 18446744073709551609);
                            var_18 = (max(var_18, ((min((min((~18446744073709551615), 255)), ((~(max(var_2, var_1)))))))));
                        }
                    }
                }
                var_19 -= (min((arr_9 [15] [14] [2] [3] [10] [1]), 1));
            }
        }
    }
    var_20 = var_12;
    #pragma endscop
}
