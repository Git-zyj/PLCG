/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_11 = (max(var_11, (-1 / 16349327518855238922)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            arr_8 [10] [10] [i_1] |= (arr_3 [i_1] [i_2]);
            var_12 = (min(var_12, (((var_2 ? 0 : ((64 ? -24 : (arr_7 [i_1]))))))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_13 = (max(var_13, ((((!var_7) << (((((var_1 + 2147483647) << (((-46100717 + 46100748) - 28)))) - 1517869848)))))));
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_14 = (min(var_14, ((((var_2 <= var_3) ? (arr_16 [i_3] [i_5] [i_5] [i_3]) : (arr_14 [i_6 - 1] [i_1] [i_1] [i_1]))))));
                            var_15 -= ((-(arr_15 [i_4 + 2] [i_5] [i_1] [i_5] [i_1])));
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_1 - 1] = (!var_10);
                        }
                    }
                }
            }
            arr_18 [i_1] [i_1] = ((!(arr_6 [i_1] [i_1])));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_16 = (((arr_12 [i_1] [i_7] [i_1] [i_1 - 1]) + (arr_6 [i_1] [i_1])));
            var_17 = (min(var_17, (((~((var_1 % (arr_4 [i_1]))))))));
            var_18 = 31729;
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            arr_25 [i_1] = ((!((((arr_21 [i_1]) ^ (-9223372036854775807 - 1))))));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            arr_33 [i_1] [i_8] [i_9] [i_8] [i_9] = (-9223372036854775807 - 1);
                            arr_34 [i_11] [i_1] [i_1] [i_1] = ((arr_12 [i_10] [i_8] [i_1] [i_10]) == (arr_12 [i_10] [i_11] [i_1] [i_8]));
                            var_19 = (min(var_19, (((((~(arr_27 [i_8] [i_10]))) == var_10)))));
                            var_20 -= ((var_5 ? var_10 : (((arr_7 [i_11]) + 127))));
                        }
                    }
                }
            }
            var_21 = (min(var_21, (arr_11 [i_1 - 2] [i_1] [i_1 + 1] [i_1 - 1])));
        }
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 12;i_13 += 1)
            {
                {
                    arr_41 [i_1] = ((-(arr_15 [i_13 + 1] [i_1] [i_1] [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            {
                                var_22 ^= ((var_3 ? (arr_38 [i_1] [i_12] [i_13 + 3] [i_14]) : 24));
                                arr_47 [i_1] [i_13] [i_1] [i_15] = var_7;
                            }
                        }
                    }
                    var_23 = -60;
                }
            }
        }
        var_24 -= (arr_7 [i_1 - 2]);
        arr_48 [i_1] = (((arr_31 [i_1] [i_1] [i_1] [i_1] [i_1 - 2]) * (arr_26 [i_1] [i_1 - 2] [i_1])));
    }
    for (int i_16 = 0; i_16 < 25;i_16 += 1)
    {
        var_25 = (min(var_25, 0));
        var_26 = (max(var_26, ((min((((arr_50 [i_16]) ? (arr_49 [i_16]) : (min(12842408662465701292, 140600049401856)))), ((((~-1) ? (arr_49 [i_16]) : (arr_50 [i_16])))))))));
        var_27 = (max(var_27, (((min(12, var_6))))));
    }
    var_28 = var_5;
    var_29 -= var_8;
    var_30 = var_5;
    #pragma endscop
}
