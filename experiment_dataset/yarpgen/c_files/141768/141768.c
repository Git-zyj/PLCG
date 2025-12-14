/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 129;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_16 = 0;
        var_17 = (min(var_17, (((var_9 ? (var_5 / 83) : (1 && 50))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_18 += ((var_14 ? var_0 : 1));
                        var_19 = ((var_1 ? ((var_5 ? var_11 : var_12)) : var_1));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_20 = (min(var_20, var_4));
        arr_15 [i_4] = (min((((1441204439 ? 1 : 1))), 1632929047276032723));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_21 = (min(var_21, ((max((((min(var_10, var_2)) + var_12)), (((var_14 ? var_8 : var_9))))))));
        var_22 = max(((max(var_6, (1 % 1)))), (min(((25581 ? 2418668785 : 61)), var_13)));
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        arr_30 [7] [2] [i_6] [i_7] [i_8] [i_8] = 46053;
                        var_23 = (min(var_23, (((var_1 ? (min(var_14, (((-9223372036854775807 - 1) ? var_14 : var_7)))) : ((max(((262143 ? var_5 : var_13)), var_10))))))));
                        var_24 = (max((var_8 / 1), ((var_2 ? 229 : var_4))));
                    }
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        var_25 = 1;
        arr_33 [i_9] &= (max((((-45 + 2147483647) << (180 - 180))), var_1));
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        var_26 = (min(var_26, (((var_5 ? var_12 : ((1 ? 1 : 1682323272)))))));
        var_27 = ((var_1 % (min(var_12, var_2))));
    }
    #pragma endscop
}
