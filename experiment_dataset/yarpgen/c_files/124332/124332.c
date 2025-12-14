/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        var_15 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_13 [i_3] [i_3] = ((-1 ? 5531169454445427934 : 1390729543667764009));
                    var_16 *= (arr_10 [12] [i_2 - 1] [12]);
                }
            }
        }
        var_17 = (-1390729543667764009 ? (((arr_9 [i_1] [i_1] [i_1]) ? (arr_9 [i_1] [i_1] [i_1]) : (arr_11 [i_1] [10]))) : (((max(95, 749)))));
        var_18 *= (arr_1 [i_1]);
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {
            var_19 = 9314;
            var_20 = (max((~1), (max((arr_15 [i_5]), var_4))));
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
        {
            var_21 -= (!((((38 || var_4) ? (((var_0 ? (arr_0 [i_6]) : var_12))) : 1499864755131000076))));
            var_22 *= max((max(((843807179156924261 ? -63846848 : (arr_2 [i_6]))), 230)), ((max(8524770218559389315, var_3))));
            arr_23 [i_4] [i_4] = (max(5496, (max(((1 ? var_1 : 1901155470)), (((arr_16 [i_4]) ? 0 : var_13))))));
        }
        var_23 = (max(var_23, (((max(var_11, (max(5496, 8388607))))))));
    }
    #pragma endscop
}
