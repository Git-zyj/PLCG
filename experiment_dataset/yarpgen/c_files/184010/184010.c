/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_0 ? ((((min(var_19, 15))) + ((-21124 ? var_9 : var_10)))) : var_3));
    var_21 = (min(var_21, ((((((9223372036854775807 ? (max(var_17, -1)) : -2))) ? ((min((var_12 * var_19), (((var_16 ? var_9 : -116)))))) : (max(12, ((4 ? var_15 : 15069753338421228729)))))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_22 = (min((min(-9175997180602869584, var_3)), (((-(-5 / var_4))))));
            var_23 = min(((var_7 / (-9175997180602869564 + var_0))), ((max((var_14 * var_16), (((arr_0 [i_0]) ? var_7 : var_1))))));
        }
        for (int i_2 = 1; i_2 < 7;i_2 += 1)
        {
            arr_8 [7] [7] [i_0] |= (~(((arr_1 [i_2 + 1] [i_2 - 1]) ? (~206) : (var_5 == var_14))));
            arr_9 [i_0] = ((((-3405096905 ? var_9 : (max(-42, 1099511627775))))) ? var_5 : var_16);
            var_24 = (min(var_24, (((67108863 ? 2 : 1)))));
            var_25 = (((((min(var_11, var_14)))) ? var_6 : ((-var_18 ? ((var_5 + (arr_3 [i_2]))) : var_3))));
        }
        var_26 = ((230 ? 1 : 2147483647));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_15 [i_3] [i_3] = (0 * var_4);
                    arr_16 [i_0] [i_0] &= (((var_9 ? 16320 : (arr_0 [i_4]))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 23;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5 - 3] = var_1;
        arr_20 [i_5 - 3] [i_5] = -1099511627776;

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                arr_25 [i_5] [i_7] = var_0;
                var_27 *= (((((var_8 ? var_16 : var_6))) ? (var_11 + var_5) : var_15));
            }
            for (int i_8 = 1; i_8 < 23;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            arr_32 [i_5] &= ((9175997180602869585 ? (arr_30 [i_5 - 3] [i_5 - 1] [i_8 + 1] [i_8 + 1] [i_10]) : 736836197));
                            var_28 = var_15;
                        }
                    }
                }
                arr_33 [i_5] [i_6] [i_8 - 1] [i_8] = (var_10 != var_19);
                var_29 = (((arr_30 [i_8] [i_8] [i_8 - 1] [i_8 - 1] [i_6]) ? (arr_30 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_6]) : -89));

                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    var_30 += var_1;

                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        var_31 = ((var_2 ? var_7 : var_9));
                        arr_39 [i_5] [i_11] [i_8] [i_5] = ((-(arr_26 [i_6] [i_11])));
                        var_32 = -var_6;
                        var_33 = 18298;
                    }
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        arr_44 [i_5] [i_5] [i_8] [i_5] [i_5] [i_6] = (-32758 / 7);
                        arr_45 [i_11] [i_6] [i_6] [i_11] [i_8] [i_6] = (((arr_26 [i_5 - 3] [i_5]) + var_9));
                        var_34 = (~var_8);
                        var_35 |= (((arr_38 [i_8] [i_8] [i_8 + 1]) ? (arr_38 [i_5] [i_5] [i_8 + 1]) : (arr_38 [i_8 - 1] [i_8 - 1] [i_8 + 1])));
                        var_36 = (max(var_36, ((((arr_35 [i_5] [i_5 - 1] [i_5 - 1]) ? var_11 : (arr_23 [i_5 - 3] [i_5 - 3] [i_5 - 1]))))));
                    }
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        arr_48 [i_11] [i_5 - 2] = var_9;
                        var_37 = ((arr_21 [i_5 - 3] [i_5 - 3] [i_8 + 1]) ? -26 : (arr_37 [i_5] [i_5] [i_5 - 1] [i_5] [i_5 + 1] [i_5] [i_8 + 1]));
                        var_38 = (((((var_6 ? var_19 : (arr_29 [i_11] [i_11] [i_11])))) ? -1099511627776 : var_8));
                    }
                    for (int i_15 = 2; i_15 < 20;i_15 += 1)
                    {
                        var_39 = (max(var_39, (((2179563470 ? (((-6282632666461972597 ? var_18 : var_9))) : ((var_2 ? 65526 : var_5)))))));
                        var_40 = ((-92 ? var_13 : ((var_19 ? var_5 : var_3))));
                    }
                    var_41 += (!8335858064230767724);
                }
            }
            var_42 = ((var_0 ? var_15 : ((18 ? var_18 : var_4))));
        }
    }
    /* vectorizable */
    for (int i_16 = 3; i_16 < 23;i_16 += 1) /* same iter space */
    {
        arr_55 [i_16] [i_16 - 2] = ((var_6 ? (206 % var_4) : (arr_28 [i_16 - 3])));
        arr_56 [i_16 - 2] |= ((~((922122243 ? var_13 : -93))));
    }
    var_43 = (min(8328819841463139169, 1));
    var_44 = ((-0 * (!1)));
    #pragma endscop
}
