/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(((0 ? (-2147483647 - 1) : 1)))));
    var_11 = var_3;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                        {
                            arr_16 [i_4] [i_1 + 1] [i_2] [i_2] [i_0] = ((var_8 | (min(-50, 5283959354226164763))));
                            arr_17 [i_3] [i_3] [i_3] = ((~(~-1415185773)));
                            arr_18 [i_0] [i_1 + 2] [i_0] [i_3] [i_3] = var_6;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            var_12 += (((arr_20 [0] [i_2 + 1] [i_3 + 1] [i_3 + 1] [i_3]) | var_1));
                            arr_23 [13] [i_2] [i_5] [i_5] = ((var_7 || (arr_2 [i_1 + 1] [i_2 + 1])));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_1] [i_2 + 1] [i_3] [i_3] [i_6] = (arr_6 [i_3] [i_0]);
                            var_13 += (min((arr_20 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_1 + 2]), (!var_2)));
                        }
                        var_14 |= var_0;
                    }
                }
            }
        }
        var_15 = (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        arr_27 [i_0] = (((((-(arr_25 [i_0])))) ? (min(((1 ? var_0 : 7262885195536974411)), (((var_4 ? 17600 : (arr_6 [i_0] [i_0])))))) : (max((arr_8 [i_0] [i_0] [i_0] [i_0]), 18446744073709551615))));
        arr_28 [i_0] = ((((var_8 & (arr_7 [i_0] [i_0]))) ^ (max(var_3, (arr_9 [14] [i_0] [14] [i_0] [i_0] [i_0])))));
        arr_29 [i_0] [5] = ((7931177477980910977 ? 1 : 65535));
    }
    #pragma endscop
}
