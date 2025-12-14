/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_1 ? var_2 : var_7));
    var_20 ^= (min(121, 12707391677373501730));
    var_21 = var_9;
    var_22 = var_16;

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_23 = var_2;
        arr_2 [i_0] = var_7;
        var_24 = (max(var_24, (((((max((arr_0 [i_0 + 2]), (arr_1 [i_0])))) ? (((arr_0 [i_0 + 2]) ? var_6 : var_18)) : (((var_14 ? var_12 : 7377052093640153295))))))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (((((((var_14 ? 19889 : var_16))) ? var_0 : 45647))) ? var_9 : (arr_4 [i_1 - 1]));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_25 = (max(var_25, var_16));
            var_26 = var_10;
        }
        var_27 = (max(var_27, ((min(((var_18 ? (arr_6 [i_1 + 1] [i_1 + 1]) : (arr_6 [i_1 + 1] [i_1 + 1]))), (arr_6 [i_1] [i_1 + 2]))))));
        arr_10 [i_1] = var_9;

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_28 = (max(var_0, var_16));
            arr_13 [i_1 - 1] = var_5;
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_18 [14] = ((var_6 ? (((((-7377052093640153290 ? var_9 : (arr_1 [i_1])))) ? var_18 : ((((arr_8 [i_1] [i_4]) ? var_0 : var_2))))) : var_5));
            var_29 = (max((max((arr_1 [i_1 - 1]), 4807441169204147991)), var_17));
            arr_19 [i_1] [i_1] [i_4] = var_3;
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            arr_22 [i_5] [i_1 + 2] = var_18;
            arr_23 [i_5] = var_13;
        }
    }
    for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] = ((var_13 & (arr_0 [i_6])));
        arr_27 [i_6] [i_6] = (max(((var_9 ? var_5 : (arr_24 [i_6]))), (arr_21 [15] [i_6] [i_6 + 2])));
    }
    for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
    {
        arr_30 [i_7] [i_7] = (((arr_14 [i_7 - 1]) & var_6));
        arr_31 [i_7] [i_7] = var_11;
        var_30 += (arr_6 [i_7] [i_7]);
    }
    #pragma endscop
}
