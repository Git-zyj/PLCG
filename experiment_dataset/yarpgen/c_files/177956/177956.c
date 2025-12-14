/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = (arr_0 [i_0]);
        var_16 = (min(var_16, ((((((var_12 ? (arr_1 [i_0] [i_0]) : 7850460264751139455))) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            arr_4 [i_1] |= arr_1 [i_0] [i_0];
            var_17 = (arr_3 [i_0] [i_1] [i_1]);
            var_18 = var_9;
            var_19 = (18446744073709551615 ^ (arr_1 [i_0] [i_1]));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] = var_2;
            var_20 = (((arr_7 [i_0]) ? ((7850460264751139455 ? var_14 : (arr_0 [i_2]))) : var_8));
            var_21 ^= (arr_0 [i_0]);
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 23;i_4 += 1)
                {
                    {
                        var_22 ^= ((((arr_0 [10]) ? -7850460264751139456 : var_7)));
                        var_23 = var_9;
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        arr_16 [i_5] [i_5] = -7850460264751139455;
        var_24 += ((max(var_11, (max(0, 0)))));
        arr_17 [i_5] [i_5 - 1] |= (~((((!(arr_2 [i_5] [i_5] [i_5]))) ? (arr_7 [20]) : (arr_3 [i_5] [i_5 + 1] [i_5]))));
    }
    var_25 = (min(var_25, ((max(var_9, var_5)))));
    var_26 = (min((var_3 - var_6), var_9));
    var_27 = var_8;
    var_28 = ((-7850460264751139456 != (min(var_7, ((var_8 ? var_4 : var_9))))));
    #pragma endscop
}
