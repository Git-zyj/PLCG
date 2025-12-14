/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= 1;
    var_21 = var_1;
    var_22 = var_17;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((var_18 * (1984 || 92)));
        var_23 = var_19;
        var_24 *= (1983 ? (~var_18) : (!var_16));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_8 [i_0] = var_15;

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_25 = (((63543 <= var_0) ? (arr_0 [i_0] [i_1]) : 160));
                        var_26 = ((((((7680 ? var_5 : (arr_17 [17] [17] [2] [i_3] [i_4]))) + 2147483647)) >> ((((var_19 ? 65535 : var_1)) - 19422))));
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_13 ? (((arr_19 [i_0] [i_0] [i_0] [i_0]) ? 26304 : -29644)) : -var_14));
                        var_27 = var_1;
                        arr_21 [i_0] [i_1] [i_3] [i_3] [i_3] = ((7684 == (arr_11 [i_2])));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        var_28 = (((arr_18 [i_0] [i_1] [i_1] [i_5]) >> ((((7674 ? -1177964267 : 3974566198)) - 3117002969))));
                        var_29 = var_3;
                        var_30 = (!12);
                        var_31 = var_17;
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        var_32 -= var_19;
                        var_33 += ((-(2009 > 32750)));
                        var_34 += var_9;
                        arr_28 [i_0] [i_0] [i_2] [i_0] [i_6] = ((var_1 ? ((255 ? var_2 : var_19)) : var_16));
                    }

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_31 [i_0] [18] [i_0] [i_3] [18] [i_7] = (((arr_6 [i_1]) ? (arr_15 [i_0] [i_1] [i_7] [i_3]) : 23962));
                        var_35 |= var_8;
                        var_36 = var_7;
                    }
                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        var_37 &= (((arr_22 [i_0] [i_1] [19] [i_8 + 1] [i_8]) - 1298308667));
                        arr_34 [i_2] [i_0] = ((var_6 ^ (-9223372036854775807 - 1)));
                    }
                    var_38 = var_1;
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {

                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        var_39 *= (((((0 ? var_12 : var_14))) | (((arr_29 [i_10] [i_1] [i_2] [i_1]) ? var_7 : var_18))));
                        arr_42 [i_0] [i_1] [i_2] [i_2] [i_1] [i_10 + 2] = (arr_19 [i_0] [i_1] [i_1] [i_9]);
                    }
                    arr_43 [5] [5] [i_1] [i_2] [14] [i_1] = ((~(arr_40 [i_0] [i_1] [10] [i_9])));
                    var_40 = (var_17 ? (((4294967287 ? 14805 : var_14))) : ((65527 ? var_10 : -28172)));
                }
                var_41 *= ((var_5 ? var_6 : (arr_3 [i_0])));
            }

            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        var_42 ^= ((~(arr_52 [i_0] [i_0] [i_11] [i_12] [i_13])));
                        arr_53 [4] [i_12] [i_11] [i_1] [i_0] = ((~(arr_19 [i_0] [i_0] [i_0] [i_0])));
                    }
                    for (int i_14 = 1; i_14 < 19;i_14 += 1)
                    {
                        arr_58 [i_1] [i_12] [i_12] [i_11] [i_1] [i_0] = ((9524 ? var_16 : 2147483647));
                        var_43 += (!var_1);
                        var_44 ^= ((-((((arr_6 [i_1]) || var_17)))));
                        var_45 = ((((((arr_0 [i_0] [i_1]) ? var_18 : (arr_24 [i_0] [i_1] [i_1] [i_1] [13] [9])))) + (arr_39 [i_0] [i_1] [i_14])));
                    }
                    arr_59 [i_1] = (var_8 && var_13);
                }

                for (int i_15 = 4; i_15 < 20;i_15 += 1) /* same iter space */
                {
                    arr_63 [i_0] [i_1] [i_11] [i_15] [i_0] [i_1] = (63565 <= var_6);

                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        arr_66 [i_15] = (!var_16);
                        var_46 = ((-(arr_46 [i_15 - 1] [i_15] [i_15 - 4] [i_15 + 1])));
                        var_47 = (!4294967273);
                    }
                }
                for (int i_17 = 4; i_17 < 20;i_17 += 1) /* same iter space */
                {

                    for (int i_18 = 3; i_18 < 20;i_18 += 1)
                    {
                        var_48 = var_5;
                        arr_71 [i_1] [i_18] [i_18] = (32767 < 0);
                    }
                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        var_49 += ((-32743 ? (32748 && -268435456) : var_10));
                        arr_76 [i_0] [17] [i_11] [i_19] [i_19] = var_6;
                    }
                    for (int i_20 = 0; i_20 < 22;i_20 += 1)
                    {
                        arr_79 [10] [i_11] [i_17 + 1] [i_11] [i_11] [i_1] [i_0] = 12288;
                        var_50 &= (6483 <= var_2);
                        arr_80 [i_1] [3] [i_20] |= ((~(arr_68 [i_0] [i_1] [i_11] [i_17 - 1])));
                        arr_81 [i_0] [i_1] [i_11] [i_17] [i_20] = (!var_10);
                        var_51 &= var_11;
                    }
                    arr_82 [i_0] [8] [i_11] [i_17] [i_0] = (var_19 & var_9);
                    var_52 = var_6;
                }
            }
        }
    }
    for (int i_21 = 0; i_21 < 22;i_21 += 1) /* same iter space */
    {
        arr_86 [i_21] = max(var_15, ((((((arr_67 [i_21] [19] [0] [i_21] [i_21]) << (var_18 - 1093647145))) < (var_0 ^ var_14)))));
        arr_87 [i_21] = ((!(((-29536 ? (arr_32 [i_21] [i_21] [i_21] [1] [i_21]) : (arr_32 [i_21] [i_21] [i_21] [i_21] [i_21]))))));
        var_53 = ((-268435447 ? (((arr_29 [i_21] [i_21] [i_21] [i_21]) ? var_19 : -29764)) : (var_16 <= var_7)));
        arr_88 [i_21] = (min((4294967287 > 144), var_16));
        var_54 = var_9;
    }
    #pragma endscop
}
