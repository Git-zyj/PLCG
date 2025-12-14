/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 -= (((((3646544981 ? 143 : 31))) << (((arr_0 [i_0 - 1] [i_0 - 1]) - 10))));
        arr_2 [i_0 - 1] [1] |= max(246, (arr_0 [i_0 - 1] [i_0 - 1]));
        var_19 &= 62623;
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 + 1] &= arr_5 [i_1 + 1];
        var_20 = -145;

        /* vectorizable */
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            arr_9 [i_1 + 1] [i_2] = 1;
            var_21 = var_11;
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            arr_12 [i_1 + 1] = (!110);
            var_22 = 2209661215;
            var_23 = 60906;
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_24 = (max((arr_4 [i_1 + 1]), 45));
            arr_15 [i_4] [i_4] [i_1 - 1] = ((var_17 ^ ((min(4294967295, var_15)))));
        }
        arr_16 [i_1 - 1] = (arr_3 [i_1 + 1]);
    }
    for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_25 = (max(var_25, (((113 ? ((-((min(1, 1))))) : ((~(((arr_10 [i_5 - 1] [i_5 + 1]) & var_4)))))))));
        arr_19 [i_5 + 1] [i_5 - 1] = var_12;
        arr_20 [i_5 - 1] = ((((min(-451212848500210898, var_9))) ? (2912 <= 3434362003) : ((min(1, 31)))));
        arr_21 [i_5 - 1] = ((62624 ? (max(((2741193854 ? (arr_5 [i_5 - 1]) : (arr_0 [i_5 + 1] [i_5 + 1]))), ((((arr_14 [i_5 + 1] [i_5 + 1]) <= var_13))))) : ((-(((arr_11 [i_5 + 1] [i_5 - 1]) ? var_11 : var_11))))));
        arr_22 [i_5 - 1] = (~-22104);
    }
    var_26 = (-((~((var_6 ? var_12 : 1)))));
    var_27 = var_14;
    var_28 = var_10;
    #pragma endscop
}
