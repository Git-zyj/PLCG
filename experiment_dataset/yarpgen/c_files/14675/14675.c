/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_17 = (((1722548483 - -83) != var_11));
            var_18 = (min(var_18, 1));
            var_19 = (min(var_19, (60 >= 750839244)));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_20 = (!-57);
            var_21 += var_3;
            arr_8 [i_2] [i_2] [i_0] = -60;
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {
            var_22 = var_9;
            var_23 = ((-(arr_1 [i_0])));
            var_24 += (((((arr_3 [i_0]) ? 262143 : -20)) >> (var_8 - 20)));
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_25 ^= var_13;
                            var_26 = (-123 - var_11);
                        }
                    }
                }
            }
            var_27 = -60;
            var_28 = (max(var_28, var_6));
        }
        var_29 = (max(var_29, 79));
        arr_24 [i_0] = ((4294967295 ? ((13723949499994029318 >> (((arr_13 [i_0]) + 685141650)))) : (var_11 | 1603448238998542256)));
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] = var_10;
        var_30 = (max(var_30, var_5));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
    {
        var_31 *= (((1 <= 1) * ((var_16 ? 3758096384 : 7180377364265519609))));
        var_32 = (max(var_32, (11266366709444032020 < 0)));
        arr_31 [i_9] = var_1;
        arr_32 [i_9] [i_9] = var_16;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
    {
        arr_35 [i_10] = var_15;

        for (int i_11 = 2; i_11 < 9;i_11 += 1)
        {
            var_33 *= (var_7 % (arr_18 [i_10] [i_11]));
            var_34 += (!var_14);
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 11;i_14 += 1)
                    {
                        {
                            arr_46 [i_10] [i_10] [10] [6] [i_13] [i_13] [i_14 - 2] = (~7180377364265519628);
                            var_35 = ((var_12 >> (var_15 > var_14)));
                            arr_47 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((-3749202503635457585 ^ (-119 != 3552859493)));
                        }
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 12;i_15 += 1)
        {
            var_36 = (123 | var_4);
            var_37 = (var_12 == 3150953487);
        }
        var_38 = (min(var_38, (((~(var_10 / var_9))))));
    }
    var_39 = ((((50 ? 7180377364265519628 : 10))));

    for (int i_16 = 0; i_16 < 14;i_16 += 1)
    {
        var_40 += (max(((var_7 ? (14121 ^ var_3) : (var_12 | 7180377364265519614))), (((arr_50 [i_16] [i_16]) / (min(var_9, var_7))))));
        var_41 = (max(var_41, (((-61 ? ((1 & (~79))) : 14121)))));
        arr_53 [i_16] = ((((var_2 << (3552859493 - 3552859483))) >= (~-64)));
        arr_54 [i_16] [i_16] = (max((min(-6721285847300072573, 63)), -10499));
    }
    for (int i_17 = 0; i_17 < 14;i_17 += 1)
    {
        arr_57 [i_17] = ((!(((((7180377364265519628 > (arr_55 [i_17])))) > ((-373843436 ? 60 : var_15))))));
        arr_58 [4] [i_17] = ((!((-18102 < (!102)))));
        var_42 = var_14;
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 14;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 14;i_19 += 1)
            {
                {
                    arr_65 [4] [i_18] [i_18] [i_17] = ((((((1 ? 18866 : (arr_60 [i_18]))))) < var_9));
                    var_43 = ((((var_4 ? var_8 : var_0)) + (var_6 * var_6)));
                }
            }
        }
    }
    for (int i_20 = 0; i_20 < 14;i_20 += 1)
    {
        var_44 += (~-18097);
        /* LoopNest 3 */
        for (int i_21 = 2; i_21 < 12;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 14;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 14;i_23 += 1)
                {
                    {
                        var_45 = (((1 ? var_14 : ((13386 ? 1084457243 : var_2)))));
                        var_46 *= (((((arr_50 [i_21 - 2] [i_21 - 2]) != (((-32767 - 1) - 0)))) ? -475310457 : (((max(18446744073709551609, var_16)) ^ (arr_71 [i_23] [i_21 + 2] [i_21 - 1])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 14;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 14;i_25 += 1)
            {
                {
                    arr_80 [i_24] [i_24] [i_20] = ((var_5 << (((((var_11 ? var_16 : -120)) <= (var_14 >= 16247))))));
                    arr_81 [i_24] = ((((var_11 ? var_10 : var_4)) & 1));
                }
            }
        }
    }
    for (int i_26 = 0; i_26 < 22;i_26 += 1)
    {
        arr_84 [i_26] = min((min(58, (1 + 51415))), -19209149);
        arr_85 [i_26] [i_26] = (max(16173620400125054605, (1 == var_1)));
        var_47 = ((((((((0 ? var_15 : var_3)) + 2147483647)) >> (((min(var_8, 11712246132078421264)) - 10)))) << ((-(var_15 & var_11)))));
    }
    #pragma endscop
}
