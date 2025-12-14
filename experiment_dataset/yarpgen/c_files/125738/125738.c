/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((!((max(var_10, 3248117494167929351))))) ? ((var_0 ? var_11 : (max(var_5, 17867464553885220071)))) : var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_15 -= -192;
        var_16 = ((((((arr_0 [i_0] [i_0]) - 204))) ? (((arr_0 [i_0] [12]) ? (arr_0 [i_0] [i_0]) : (arr_3 [i_0]))) : var_9));
        var_17 = 1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_18 = (((arr_1 [i_1]) ? ((var_4 & (arr_0 [4] [i_1]))) : var_8));
        var_19 = (min(var_19, -2));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_20 = (((arr_5 [i_1]) ^ 255));
            var_21 = ((-((var_6 ? 229 : var_11))));
            var_22 -= ((arr_7 [i_1] [i_2]) ? 67 : (arr_7 [i_1] [i_2]));
            var_23 = (min(var_23, (((var_0 ? ((1 >> (((arr_0 [i_1] [i_2]) - 3436954255312139151)))) : (arr_4 [i_1] [i_2]))))));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_11 [i_3] [i_3] = (-27754 * (arr_9 [i_3] [i_3]));
            arr_12 [i_3] = -23;
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 12;i_5 += 1)
                {
                    {
                        arr_19 [i_4] [i_3] [i_3] = (((var_7 + 2147483647) >> ((~(arr_17 [i_4])))));
                        arr_20 [i_3] [i_5] [i_4] [i_5] = var_4;
                    }
                }
            }
        }
        for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_24 &= var_9;
            var_25 = (-1591100450 ? (arr_9 [2] [i_1]) : ((var_5 ? (arr_3 [i_6]) : -27727)));
            var_26 = 254;
        }
        for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_27 = (arr_8 [10] [10]);

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                arr_30 [i_8] = (arr_16 [2] [0] [0] [i_1]);
                arr_31 [i_8] [i_8] [i_8] [i_8] = (((arr_10 [i_1] [i_7 + 3]) > 173));
            }
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                arr_34 [i_1] [i_9] = (arr_16 [i_7] [i_9] [i_7] [i_1]);
                var_28 = ((arr_22 [i_1] [i_7 + 2]) - (arr_5 [i_7 + 2]));
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
    {
        arr_37 [1] [1] = ((var_2 % ((~(arr_27 [i_10] [i_10])))));

        for (int i_11 = 2; i_11 < 12;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 3; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        {
                            arr_49 [i_14] = ((~(arr_28 [i_11] [i_11] [i_11])));
                            var_29 -= (((arr_32 [i_12] [i_13] [i_14]) >> ((((arr_48 [1] [2] [1] [14] [1] [i_12 - 2]) <= (arr_44 [i_10] [i_10]))))));
                            var_30 = (arr_28 [i_13] [i_12 + 2] [i_11 - 1]);
                            var_31 ^= ((arr_48 [i_11 - 1] [i_11 - 2] [i_12 - 3] [5] [i_13] [i_11 + 3]) ? (arr_48 [i_11 - 1] [i_13] [i_12 - 3] [i_10] [i_13] [i_13]) : (arr_48 [i_11 - 2] [i_11 - 2] [i_12 + 4] [i_12 + 4] [i_14] [i_11]));
                            arr_50 [i_13] [i_11 + 1] [i_14] = (arr_40 [4]);
                        }
                    }
                }
            }
            var_32 = (min(var_32, -27758));

            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                var_33 ^= var_5;

                for (int i_16 = 0; i_16 < 0;i_16 += 1)
                {
                    arr_56 [i_10] [i_10] [i_15] [i_15] [i_15] [i_16 + 1] = (arr_43 [i_10]);
                    arr_57 [i_16] [i_15] [i_15] [i_15] [i_10] [0] = ((var_3 ? (arr_45 [i_16 + 1] [i_11] [i_15] [i_16]) : ((var_10 ? (arr_22 [i_10] [11]) : var_7))));
                    var_34 = (~var_3);
                    var_35 = var_0;
                }
                for (int i_17 = 1; i_17 < 14;i_17 += 1) /* same iter space */
                {
                    var_36 = (-127 - 1);
                    arr_60 [i_10] [i_15] [12] [i_17 + 1] = (arr_35 [i_10]);
                    var_37 ^= ((var_0 ? (arr_41 [i_10] [i_11] [i_15] [i_17]) : (arr_3 [i_11])));
                }
                for (int i_18 = 1; i_18 < 14;i_18 += 1) /* same iter space */
                {
                    arr_64 [i_18] [i_15] [i_10] = ((-5 ? 1950570928 : -1903520040));
                    var_38 = (var_0 != var_5);
                }
            }
        }
        for (int i_19 = 1; i_19 < 13;i_19 += 1)
        {
            var_39 = (((~var_2) ? (((arr_15 [i_10] [i_19] [i_10] [i_10]) ? 12515 : (-32767 - 1))) : (!var_3)));
            var_40 = (((arr_45 [i_19] [i_19 - 1] [i_19 + 2] [i_19 - 1]) ? (arr_45 [i_19] [i_19] [i_19 + 1] [i_19 + 1]) : (arr_36 [i_19 + 2])));
            var_41 = (arr_61 [i_10] [i_19] [i_19] [i_19 + 1]);
            var_42 &= (27727 ^ (arr_41 [i_19 - 1] [i_19 + 2] [i_19] [i_19 + 2]));
            var_43 = (min(var_43, (~-27711)));
        }
        for (int i_20 = 4; i_20 < 14;i_20 += 1)
        {
            arr_69 [i_20] [i_20] = var_0;
            var_44 -= (-27754 || 27754);
        }
        arr_70 [i_10] = (((((1 >> (((arr_27 [i_10] [i_10]) - 5723657238927901095))))) && (arr_55 [i_10] [i_10] [14])));
    }
    var_45 = ((~(min(var_11, -911163069))));
    var_46 = var_7;
    var_47 = (-181365712 ? 20135 : var_9);
    #pragma endscop
}
