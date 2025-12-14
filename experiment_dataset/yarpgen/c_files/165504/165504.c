/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (3451936279 != 1)));
    var_13 = var_4;
    var_14 = (min(var_14, ((min(var_2, var_7)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_15 = (((((var_11 || (arr_1 [i_0])))) - ((var_5 ? 8 : var_6))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_0] = ((var_2 ? var_5 : ((((arr_1 [i_1]) || 138)))));
            arr_5 [21] [i_0] = var_0;
        }
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            var_16 = (max(var_16, var_6));
            var_17 = ((~(((arr_2 [15] [i_0] [i_2]) & var_9))));
        }
        var_18 |= (199890579 | 18446744073709551613);
        var_19 = var_2;
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_10 [i_3] [i_3] = (((((((var_6 ? var_10 : var_5))) ? (var_8 ^ var_3) : ((var_9 >> (((arr_8 [i_3]) - 10423)))))) | (((((var_3 + 2147483647) << (((var_0 + 32351) - 24)))) << ((10 ? var_1 : var_0))))));
        arr_11 [i_3] = min((arr_1 [i_3]), var_11);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            var_20 = var_10;
            var_21 = (-1 - var_6);
        }
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            arr_20 [i_4] = var_9;
            var_22 = ((arr_19 [i_6 - 2] [i_6 - 1]) + var_3);
            var_23 = ((1 == ((-23627 ? var_1 : (arr_18 [i_6])))));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 16;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_28 [i_4] = (arr_2 [10] [i_9] [i_9]);
                            var_24 = (~var_11);
                            arr_29 [i_4] [i_4] [i_6] [i_4] [i_8] [i_9] = (((1 | var_4) >= (arr_27 [i_4] [i_4] [i_4] [i_4] [i_4])));
                        }
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            arr_32 [i_4] [i_4] [i_4] [i_4] [i_4] = (arr_30 [i_6 - 1] [1] [i_6 + 1] [8] [3] [i_6 - 2]);
                            var_25 = ((var_8 / ((((arr_23 [i_4]) || var_1)))));
                            var_26 -= arr_22 [i_4] [i_7] [i_8 - 3];
                            var_27 += 92;
                        }
                        var_28 = (min(var_28, (~var_9)));
                        var_29 *= ((arr_31 [i_4] [i_4] [i_6 - 2] [i_7 - 1] [i_6 - 2] [i_8 + 2] [5]) && 31935);
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            arr_35 [i_4] = ((var_2 ? (arr_33 [i_11]) : var_2));

            for (int i_12 = 2; i_12 < 17;i_12 += 1) /* same iter space */
            {
                var_30 = (((((var_0 | (arr_6 [i_4] [i_4])))) ? var_3 : ((var_5 ? var_10 : var_2))));
                var_31 |= (((arr_25 [i_12 - 1] [i_12 + 2] [i_11] [i_11] [i_4] [18] [i_4]) ? var_11 : (var_7 | var_9)));
                arr_39 [i_12] [i_4] [i_4] = (((((var_2 ? var_1 : (arr_7 [i_4] [i_4])))) ? var_3 : (arr_13 [i_12 + 2] [i_11])));
                var_32 = var_9;
            }
            for (int i_13 = 2; i_13 < 17;i_13 += 1) /* same iter space */
            {
                arr_43 [i_4] [i_4] [10] [i_13] = (((arr_38 [i_11] [i_11] [i_13 - 2] [i_13 - 1]) > (arr_38 [i_11] [i_11] [i_13 - 2] [0])));
                var_33 = (min(var_33, ((1 % ((var_4 ? (arr_33 [15]) : var_2))))));
                var_34 = ((32 ? var_2 : (arr_36 [i_4] [i_11] [i_11] [i_13 - 1])));
            }
            for (int i_14 = 2; i_14 < 17;i_14 += 1) /* same iter space */
            {
                var_35 += 1089486760;

                for (int i_15 = 1; i_15 < 18;i_15 += 1)
                {

                    for (int i_16 = 4; i_16 < 18;i_16 += 1)
                    {
                        var_36 = (min(var_36, ((((30972 > 1) >= 34072)))));
                        arr_52 [i_4] [i_4] [i_15 + 1] [i_14] [i_16] [i_14] [16] = (arr_30 [i_4] [i_15] [i_15 - 1] [i_14 - 1] [i_4] [i_4]);
                    }
                    var_37 = ((arr_31 [i_14 - 2] [i_11] [i_15 - 1] [i_15 - 1] [i_14] [i_14 - 2] [i_15 - 1]) ^ ((var_2 ? var_6 : (arr_21 [i_4]))));
                }
                for (int i_17 = 2; i_17 < 16;i_17 += 1)
                {

                    for (int i_18 = 0; i_18 < 19;i_18 += 1)
                    {
                        var_38 = (min(var_38, (arr_47 [i_4] [i_4] [i_4] [13] [i_4] [i_4])));
                        var_39 = (min(var_39, var_10));
                        arr_58 [i_4] = (((var_3 + var_9) ^ (var_6 >= var_7)));
                        var_40 = arr_1 [i_17 + 1];
                    }
                    arr_59 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = (((arr_41 [13] [8] [i_14 + 1]) > var_7));
                    arr_60 [i_4] [i_4] [i_11] [i_11] [i_17 + 2] |= (((211 % 2811104252) % var_10));
                    var_41 = arr_42 [i_4] [i_4] [i_4];
                }
                var_42 = (min(var_42, ((((arr_36 [i_14] [i_14 + 1] [i_14 + 2] [i_14 - 1]) ? (arr_17 [i_4] [i_11] [i_4]) : var_8)))));
            }
            var_43 = var_2;
            arr_61 [i_4] [i_11] [1] |= var_8;
        }
        for (int i_19 = 0; i_19 < 19;i_19 += 1)
        {
            var_44 = (arr_30 [i_4] [i_19] [i_4] [i_4] [i_4] [i_4]);
            var_45 = (((var_8 & -1) ? (((var_0 ? var_0 : (arr_7 [8] [8])))) : 4558589672319274992));
            /* LoopNest 2 */
            for (int i_20 = 2; i_20 < 17;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 19;i_21 += 1)
                {
                    {
                        var_46 = (((arr_47 [i_4] [11] [11] [i_20] [17] [i_21]) != (((((arr_51 [i_4] [i_4] [i_4] [i_4] [i_4]) == (arr_17 [i_4] [i_4] [i_4])))))));
                        var_47 = (((arr_68 [i_4] [i_20 + 2] [15] [i_21]) > var_7));
                    }
                }
            }
        }
        var_48 |= ((arr_57 [i_4] [i_4] [i_4] [i_4] [i_4]) / (arr_57 [i_4] [i_4] [i_4] [i_4] [i_4]));
        var_49 = (max(var_49, var_8));
    }
    #pragma endscop
}
