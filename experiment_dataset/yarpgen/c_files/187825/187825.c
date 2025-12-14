/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (max((((((var_2 ? var_5 : var_4))) ? (var_5 || var_0) : (min(var_9, var_9)))), (((max(var_7, var_0))))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0 - 1] = ((~(((var_5 != ((min(var_4, var_5))))))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_1] [i_1 - 1] = ((((max(var_4, ((var_4 ? var_9 : var_4))))) ? (min((min(18446744073709551615, 3)), (!32750))) : var_2));
            var_11 = (763085771 && 0);
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                var_12 = ((((1 ? 1 : 0)) * 0));

                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    var_13 = (((var_5 == var_4) ? (((var_1 ? var_8 : var_8))) : ((112 ? -2891562597440170533 : 67))));
                    var_14 = ((((var_1 ? var_9 : var_3)) != (var_9 & var_5)));

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_17 [i_5] [i_4 - 1] [i_3 + 2] [i_2 + 2] [i_0 - 1] = ((((var_7 ? var_9 : var_2)) < ((var_8 ? var_1 : var_3))));
                        arr_18 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3] = (((((var_0 ? var_6 : var_0))) ? var_6 : var_0));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_15 = var_6;
                        var_16 = (max(var_16, (var_5 * var_2)));
                        var_17 ^= (((((var_3 ? var_3 : var_9))) ? (var_6 <= var_2) : var_9));
                    }

                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        var_18 = (1 - 1);
                        arr_23 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] = (((var_6 & var_8) ? (!var_9) : ((var_5 ? var_4 : var_8))));
                        var_19 = (max(var_19, (1 | var_3)));
                    }
                    for (int i_8 = 4; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        var_20 *= 18446744073709551606;
                        arr_26 [i_0 - 1] [i_0] [i_4 - 2] [i_2 + 1] [i_8 - 3] = (((var_3 + 9223372036854775807) << ((((var_9 ? var_7 : var_8)) - 3446488165905536757))));
                        var_21 = ((((var_0 ? var_9 : var_5)) % var_0));
                    }
                    for (int i_9 = 4; i_9 < 12;i_9 += 1) /* same iter space */
                    {
                        arr_30 [i_9 - 2] [i_9 - 3] [i_4 - 2] [i_4] [i_3] [i_2 - 2] [i_0 + 1] = (((~var_3) + (((var_5 ? var_4 : var_6)))));
                        var_22 = ((6674 ? 1 : 1));
                        var_23 ^= (var_0 ? ((var_9 ? var_3 : var_2)) : (((var_7 ? var_2 : var_5))));
                        var_24 = (~1016970803);
                        arr_31 [i_0 + 1] [i_2 + 2] [i_3 + 1] = ((1 ? (((var_9 ? var_2 : var_1))) : ((41415 ? 1 : var_9))));
                    }
                }
            }
            for (int i_10 = 1; i_10 < 14;i_10 += 1) /* same iter space */
            {
                var_25 &= (!8269900030070666848);
                arr_34 [i_10] = (((~95) != ((1 ? 1 : 1))));
            }
            for (int i_11 = 1; i_11 < 14;i_11 += 1) /* same iter space */
            {

                for (int i_12 = 1; i_12 < 14;i_12 += 1)
                {
                    var_26 = (var_1 ^ var_8);
                    var_27 ^= ((!(1 && 138)));
                    var_28 = (min(var_28, (((-((var_9 ? var_5 : var_1)))))));

                    for (int i_13 = 1; i_13 < 14;i_13 += 1)
                    {
                        var_29 = (min(var_29, (var_3 * var_4)));
                        var_30 ^= (var_2 * var_5);
                    }
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        var_31 = var_5;
                        arr_45 [i_0] [i_2 - 2] [i_11 + 1] = var_3;
                        var_32 = ((!(-32741 * 95)));
                        var_33 = (var_9 ? (~var_7) : (var_9 % var_5));
                    }
                    for (int i_15 = 1; i_15 < 14;i_15 += 1)
                    {
                        var_34 = ((var_6 ? (((var_8 ? var_6 : var_1))) : ((var_6 ? var_3 : var_9))));
                        var_35 = (min(var_35, (((var_3 <= (((var_4 ? var_5 : var_8))))))));
                        var_36 = ((var_8 ? var_3 : (var_5 >= var_0)));
                        arr_48 [i_11] [i_11] [i_11 - 1] [i_11] [i_11] [i_11 - 1] [i_11] = ((var_8 ? (((var_0 ? var_8 : var_5))) : ((var_7 ? var_7 : var_9))));
                        var_37 += ((11442 ? 1 : 4225073046));
                    }

                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        arr_52 [i_0 + 1] [i_2 - 1] [i_11] [i_12 + 1] [i_16] = (var_5 ^ var_7);
                        arr_53 [i_11 + 1] [i_0 - 1] [i_11] [i_12 - 1] [i_16] [i_12] = ((var_1 ? -var_5 : var_6));
                        var_38 = (min(var_38, (((var_8 ? (var_4 ^ var_2) : (!1))))));
                        var_39 = (min(var_39, var_3));
                    }
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        var_40 ^= ((var_4 ? -var_2 : var_4));
                        var_41 = (min(var_41, (((var_1 % (1 ^ 36567))))));
                        var_42 = (((((1 ? 65523 : 1))) ? (var_2 * var_5) : ((var_8 ? var_7 : var_7))));
                    }
                }
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    var_43 = ((var_6 % ((var_8 ? var_0 : var_6))));
                    var_44 = -var_2;
                }
                var_45 = (var_1 - var_7);
                var_46 *= (var_8 >= var_4);
                arr_60 [i_0 + 1] [i_2 + 2] [i_2] [i_11] = (91 ? 132 : 3759765508);
                arr_61 [i_11 - 1] [i_2 - 1] [i_0 - 1] = (var_1 != var_4);
            }
            for (int i_19 = 1; i_19 < 14;i_19 += 1) /* same iter space */
            {
                arr_64 [i_0 - 1] [i_2 + 2] [i_19] = var_7;
                arr_65 [i_0 - 1] [i_2 + 2] = (((((7 ? 1 : 1))) & ((var_4 ? var_6 : var_3))));
            }
            var_47 = (min(var_47, var_0));
            arr_66 [i_0] = var_5;
        }
        /* LoopNest 2 */
        for (int i_20 = 4; i_20 < 11;i_20 += 1)
        {
            for (int i_21 = 2; i_21 < 12;i_21 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_22 = 0; i_22 < 15;i_22 += 1)
                    {
                        var_48 = (((((9 ? 139 : 65529))) ? (((var_7 ? var_3 : var_4))) : var_9));
                        arr_75 [i_22] [i_22] = ((var_5 ? var_1 : var_8));
                    }
                    var_49 = (max((!228), (!var_2)));
                }
            }
        }
        var_50 = var_0;
        var_51 = ((-var_1 ? (((max(47, 255)))) : ((((min(var_1, var_0))) ? (min(var_3, var_6)) : (max(var_9, var_0))))));
    }
    var_52 = ((!((max(((var_1 ? var_2 : var_4)), ((max(1, 33472))))))));
    #pragma endscop
}
