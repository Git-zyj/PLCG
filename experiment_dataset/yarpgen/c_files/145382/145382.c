/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((-3735289228602878412 > 1556113451276506631) == var_3));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = var_12;

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_14 [i_4] [i_0] [i_2] [i_0] [i_0] = arr_1 [i_0 - 1];
                            var_15 -= ((-3735289228602878436 ? (arr_12 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 1]) : (arr_5 [i_4])));
                        }
                    }
                }
            }
            var_16 = var_10;
            var_17 = var_1;
            var_18 += (((1 != 50) ? 22077 : (arr_13 [i_0] [i_0] [11] [i_1] [i_1] [i_0] [i_1])));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
        {
            var_19 = var_11;

            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                var_20 -= ((~(arr_11 [4] [11] [i_0 + 2] [5] [i_6 + 1] [i_0 + 2])));
                var_21 = (max(var_21, ((((arr_4 [i_0 + 1]) ? (arr_7 [2] [i_5] [i_6 + 1]) : (arr_4 [i_0]))))));
                var_22 = (min(var_22, var_11));
                var_23 = (((((arr_18 [i_0] [i_0] [10]) ? var_0 : (arr_6 [i_0] [i_5]))) << (((((arr_7 [8] [i_5] [i_0]) | var_8)) + 7199))));
                var_24 += (252 < 52693);
            }
            var_25 |= (((arr_8 [11] [i_0 + 1] [1] [10]) ? -19 : -1));
            arr_19 [i_0 - 1] [i_0] = (-5381585289090909662 < (31477 > var_3));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            arr_22 [i_0 + 1] [i_0] [i_7] = (((12913 ^ 32640) ? var_9 : var_11));
            var_26 = ((((((arr_6 [i_7] [7]) ? var_7 : (arr_8 [i_0 + 2] [i_7] [i_7] [i_7])))) ? (arr_16 [8] [7]) : (arr_15 [1] [i_7] [i_7])));
            arr_23 [i_0] [i_7] [i_7] = ((1750329665 ? 31 : 2030048185703951097));
        }
        arr_24 [2] [12] |= (arr_6 [i_0 + 1] [i_0 + 1]);
        var_27 = ((((var_10 ? var_5 : -39)) + ((3735289228602878412 ? 37 : 1))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_28 = (((arr_26 [18]) ? (arr_26 [i_8]) : (arr_26 [i_8])));
        arr_29 [i_8] [i_8] = 2831633382;
        var_29 = (((arr_26 [i_8]) ? (arr_26 [i_8]) : (arr_26 [20])));
        var_30 *= (((4194303 < 1750329660) ? (arr_26 [i_8]) : (((var_2 >= (arr_25 [i_8] [i_8]))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        var_31 = (arr_26 [10]);
        var_32 ^= var_1;
    }
    var_33 = var_10;
    #pragma endscop
}
