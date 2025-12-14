/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((max(var_10, 15798))), (min(var_4, (min(var_5, var_9))))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_12 = (min(13814983068647400790, -16));
        var_13 = var_3;
        var_14 |= ((max(var_8, (arr_0 [i_0] [2]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 12;i_3 += 1)
            {
                var_15 ^= ((((2251799813685232 ? var_10 : var_3))) ? var_3 : -82);
                var_16 *= -0;
                var_17 = ((~(arr_5 [i_3 + 2])));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_18 ^= var_0;
                            var_19 = (~var_5);
                            var_20 = ((var_5 ? 17734421593824315906 : (arr_8 [i_2 + 1] [i_1] [6])));
                        }
                    }
                }
                var_21 = (arr_11 [i_2 - 1] [i_3 - 2] [i_3 - 2]);
            }
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                var_22 = (arr_4 [i_1] [i_1]);
                var_23 &= (!var_10);
            }
            var_24 = -var_5;
            var_25 = (!(arr_6 [i_1] [i_1] [i_1]));
        }
        for (int i_7 = 2; i_7 < 12;i_7 += 1) /* same iter space */
        {
            var_26 = var_6;
            var_27 *= (~1);
        }
        for (int i_8 = 2; i_8 < 12;i_8 += 1) /* same iter space */
        {
            var_28 = (((arr_10 [i_1] [i_1]) ? var_7 : (arr_7 [i_8 - 2] [i_1])));
            var_29 &= ((!(((68 ? 0 : var_10)))));
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_30 |= (((arr_22 [i_1]) ? (arr_22 [i_1]) : -1605220249));
                            var_31 = (var_7 && var_1);
                        }
                    }
                }
            }
        }
        var_32 = var_5;
        var_33 = (min(var_33, var_1));
    }
    for (int i_12 = 0; i_12 < 21;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 4; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        var_34 &= (min(18446744073709551615, ((max((~-1504704500), (var_1 == 137438953471))))));
                        var_35 = (min((((-(!var_10)))), 843097456807196943));
                        var_36 -= var_9;
                    }
                }
            }
        }
        var_37 |= var_5;
        var_38 = (max((min((arr_36 [i_12]), 11986073366910492746)), (((!(arr_36 [i_12]))))));
    }
    var_39 = min(var_2, (max(var_1, var_0)));
    var_40 = (((~((var_7 ? var_8 : var_9)))));
    #pragma endscop
}
