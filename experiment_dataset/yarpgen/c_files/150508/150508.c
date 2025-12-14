/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = (~var_11);
    var_16 *= var_7;
    var_17 = (~var_13);

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_18 = var_0;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            var_19 = (arr_4 [i_2 - 3]);
            arr_7 [2] [7] [7] = ((-var_7 ? -var_13 : (arr_5 [i_2 - 1] [i_2 - 3] [i_1])));
        }
        arr_8 [i_1] = (min(var_10, ((min(var_1, var_9)))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] [i_3] = (max(-15, -3963861706848392896));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    arr_20 [i_4] [i_5] = var_3;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_25 [i_4] [i_4] [i_4] [i_4] = ((max((arr_12 [i_6 - 1] [i_4]), (var_7 / var_0))));
                                var_20 = (~((~((-(arr_15 [i_5] [i_4] [i_3]))))));
                                var_21 = (max(var_12, (arr_22 [0] [i_4] [0] [0])));
                                arr_26 [i_3] [i_3] [i_5] [i_5] [i_5] [10] |= (arr_23 [i_7] [i_7] [i_6 - 1] [i_6 - 1] [i_6]);
                            }
                        }
                    }
                    arr_27 [i_4] = (((((-(arr_9 [i_3])))) ? 0 : (arr_19 [i_3] [i_3] [i_3])));
                }
            }
        }
        var_22 ^= -var_5;
        arr_28 [i_3] = ((!((min((arr_17 [i_3] [i_3] [i_3] [13]), (arr_1 [3]))))));
        arr_29 [i_3] = (arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [13]);
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_23 = (max(((-(((arr_9 [i_8]) % var_7)))), (((var_2 ? var_6 : var_2)))));
        arr_32 [i_8] = ((((min((arr_16 [i_8] [i_8] [i_8]), (arr_16 [6] [7] [i_8])))) | (arr_1 [i_8])));
        arr_33 [i_8] = ((((((!(arr_24 [1] [i_8] [i_8] [i_8] [i_8]))))) == (min(58, 2187196504))));
    }
    #pragma endscop
}
