/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [9] = ((var_4 ? (arr_1 [i_0]) : (~var_15)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = (arr_1 [i_0]);
                    var_18 = (-20021 | var_4);
                    var_19 |= ((((((var_11 ? (arr_6 [i_2] [i_0] [i_0]) : 110173121)) + 2147483647)) << ((((((100 ? (arr_7 [i_0] [i_0] [i_1] [i_2 - 1]) : (arr_5 [i_0] [i_0] [i_0]))) + 4908031316118758091)) - 26))));
                }
            }
        }
        arr_8 [i_0] = (var_9 * (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_6 [i_0] [i_0] [i_0]))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_22 [i_4] = (arr_9 [i_6]);
                        arr_23 [i_4] [i_6] = ((((min((arr_6 [i_5 + 1] [i_5] [i_5 - 2]), (arr_15 [i_5 + 1] [i_5] [i_5 - 1])))) ? (arr_17 [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 2]) : (((arr_15 [i_5 - 1] [i_5] [i_5 - 1]) ? var_0 : var_13))));
                    }
                }
            }
        }
        var_20 = 20013;
        arr_24 [i_3] [i_3] = (max((max(((20013 ? var_12 : 20002)), (arr_16 [i_3]))), 255));

        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            arr_28 [i_3] [i_7] [i_3] = (var_14 & var_11);
            var_21 = -2940548456256943388;
            var_22 = -20021;
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            var_23 = (((arr_11 [i_8 + 2]) ? (arr_31 [i_8 - 1] [i_8 + 1] [i_8 - 1]) : 1));
            var_24 = ((var_8 ? var_2 : (arr_14 [i_3])));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_36 [i_9] [i_9] [i_9] = (((((min(9223372036854775807, var_2))) ? (-20038 + var_0) : var_9)));
            arr_37 [i_3] [i_9] = (max((max((775569223 || var_12), ((1 ? (arr_14 [i_3]) : var_13)))), (~31177)));
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            var_25 = (max(var_25, ((((!var_1) || (((arr_32 [1] [1] [i_10]) || var_3)))))));
            arr_40 [i_3] [i_3] |= max((arr_26 [i_3]), var_13);
            var_26 = ((((arr_17 [i_3] [i_3] [i_3] [i_10]) || 1)));
        }
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
    {
        arr_45 [i_11] = 1;
        var_27 = (max(3693475565565636137, (((~(var_16 < 9223372036854775807))))));
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 7;i_12 += 1)
    {
        var_28 = (((arr_41 [i_12]) ? -2147483626 : (arr_41 [i_12 + 3])));
        var_29 = ((~(arr_46 [i_12])));
        var_30 = ((var_9 ? (arr_19 [i_12 + 3]) : (arr_19 [0])));
    }
    var_31 = var_16;
    var_32 = (max((max((((var_7 ? var_8 : 175))), var_13)), var_0));
    var_33 = var_15;
    #pragma endscop
}
