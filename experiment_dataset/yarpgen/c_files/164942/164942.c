/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = ((!(113 == 122)));
    var_14 = (((((min(var_8, 1))) && var_5)));

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_15 = var_2;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_16 = (max(var_6, (arr_0 [i_0])));
            var_17 = (min(((7 ? -460880294 : 18446744073709551609)), (arr_2 [i_0])));

            /* vectorizable */
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                var_18 = ((11 > ((18446744073709551609 ? 18446744073709551615 : var_2))));
                arr_8 [i_0] = var_4;
                var_19 = (min(var_19, (((var_9 & 0) != (arr_6 [i_0] [i_1])))));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_20 ^= (arr_0 [i_1]);
                var_21 = var_0;
            }
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_22 = (!var_10);
                var_23 = (max(var_23, -1001727845));
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_24 = (arr_0 [6]);

        for (int i_6 = 3; i_6 < 19;i_6 += 1) /* same iter space */
        {
            var_25 -= ((1 << (-109 + 110)));
            arr_19 [i_6] = ((-(-32767 - 1)));

            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                arr_22 [i_6] [13] [i_7] = (~1);
                var_26 = 965674485;
                var_27 &= ((var_11 < (arr_10 [i_5 + 1] [i_5 - 1] [i_5 - 1])));

                for (int i_8 = 4; i_8 < 17;i_8 += 1)
                {
                    var_28 = (max(var_28, (~-1)));
                    arr_26 [0] [i_6] [i_7] [i_6] [i_6] [i_5] = 1;
                    var_29 += (((arr_3 [16]) <= 134217720));
                }
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    var_30 = arr_16 [i_6] [i_6];

                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        var_31 ^= ((-(arr_21 [i_5 - 1] [14] [i_5])));
                        var_32 = ((var_1 && (arr_11 [i_6 + 2] [i_5 + 1])));
                    }
                    arr_32 [i_6] [i_6] [i_7] = ((-(arr_5 [19] [i_7] [i_6])));
                    var_33 = var_4;
                }
                arr_33 [i_6] [i_6] [i_6 - 1] = ((!(var_0 - var_3)));
            }
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                arr_38 [i_6] [19] = (((arr_34 [i_6 - 3] [i_6 - 1] [i_6] [i_6 + 2]) < (arr_34 [i_6 - 2] [i_6 - 2] [i_6] [i_6 - 1])));
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_34 = ((var_1 | (-32767 - 1)));
                            var_35 = (((var_8 + 18446744073709551615) + (arr_36 [1] [i_6 - 1] [i_11])));
                        }
                    }
                }
                var_36 -= var_8;
            }
            arr_45 [i_6] = (((((arr_44 [i_5] [i_6] [i_6] [i_6] [i_6]) == (arr_12 [i_6] [i_6]))) ? (64 & var_1) : (((~(arr_41 [i_6 + 2] [2]))))));
        }
        for (int i_14 = 3; i_14 < 19;i_14 += 1) /* same iter space */
        {

            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                arr_52 [i_5] [i_5] [i_15] [i_14] = (((((7 ? (arr_20 [i_15] [18]) : (arr_10 [i_15] [12] [12])))) || (arr_44 [i_5] [i_14] [12] [i_15] [12])));
                var_37 = (max(var_37, ((((arr_12 [i_15] [i_15]) > (arr_12 [i_15] [i_15]))))));
                var_38 = (min(var_38, var_11));
                arr_53 [i_5] [i_14] [i_15] [i_15] = (0 * -32763);
            }

            for (int i_16 = 0; i_16 < 21;i_16 += 1) /* same iter space */
            {
                arr_57 [i_14] [i_16] = (((arr_10 [i_14 - 2] [i_5 + 3] [i_5 - 1]) ? 1 : (arr_10 [i_14 - 2] [i_5 + 3] [i_5])));
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 20;i_17 += 1)
                {
                    for (int i_18 = 4; i_18 < 19;i_18 += 1)
                    {
                        {
                            arr_63 [i_5] [i_5] [i_5] [1] [i_5] [i_5] [i_5] = (arr_39 [i_16] [i_14]);
                            var_39 = (~var_1);
                            var_40 = ((var_8 ? (((arr_17 [i_16] [i_17] [i_16]) | 268435454)) : (arr_47 [15])));
                        }
                    }
                }
            }
            for (int i_19 = 0; i_19 < 21;i_19 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 21;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 21;i_21 += 1)
                    {
                        {
                            arr_71 [i_5 + 1] [16] [i_14] [16] [i_20] [i_20] = ((-(arr_68 [4] [i_5 + 1] [i_19] [i_20] [i_14 + 2])));
                            var_41 += ((-(arr_54 [i_19] [16] [i_5 + 3])));
                            var_42 = (((-(arr_55 [i_5 - 1] [16] [i_19]))) == 1);
                            var_43 = 49152;
                        }
                    }
                }
                var_44 = (arr_20 [i_19] [i_14 + 1]);
            }
            var_45 = var_3;
        }
        var_46 = var_5;

        for (int i_22 = 0; i_22 < 1;i_22 += 1)
        {
            arr_74 [i_22] [i_5] &= 511;
            var_47 = 268435455;
        }
        for (int i_23 = 0; i_23 < 21;i_23 += 1)
        {

            for (int i_24 = 1; i_24 < 19;i_24 += 1)
            {
                var_48 = var_5;

                for (int i_25 = 0; i_25 < 21;i_25 += 1)
                {
                    var_49 = var_9;
                    var_50 ^= var_0;
                }
                for (int i_26 = 0; i_26 < 21;i_26 += 1)
                {
                    var_51 = (-2147483647 - 1);
                    var_52 = var_10;
                    var_53 = (65535 - 1);
                    var_54 = 0;
                }
                var_55 = 6;
                var_56 = (arr_61 [i_5] [11] [i_24] [i_5] [4]);
                var_57 &= var_9;
            }
            var_58 *= 1;
            var_59 = (max(var_59, (((((var_1 ? 4026531842 : (arr_88 [i_5 + 2]))) == (4026531841 & 33))))));
        }
    }
    for (int i_27 = 1; i_27 < 18;i_27 += 1) /* same iter space */
    {
        arr_92 [i_27] = (max(18446744073709551615, (((!(0 == var_10))))));

        for (int i_28 = 2; i_28 < 20;i_28 += 1) /* same iter space */
        {
            var_60 = (max(var_60, (4026531841 | 16135547581574258749)));
            var_61 = 2147483647;
        }
        for (int i_29 = 2; i_29 < 20;i_29 += 1) /* same iter space */
        {

            for (int i_30 = 0; i_30 < 1;i_30 += 1)
            {
                var_62 = (max(var_62, ((((min((arr_10 [i_27 + 3] [i_27 - 1] [i_29 - 1]), (arr_29 [i_29 - 1] [1] [1] [i_27 + 2]))) >= (((~(arr_29 [i_29 - 2] [6] [6] [i_27 + 3])))))))));
                var_63 = arr_67 [i_27];
                var_64 = (min(var_64, (((-var_7 > (arr_31 [i_27 + 3] [i_29] [i_30] [16] [i_30] [i_30]))))));
                var_65 = (max(var_65, (!var_11)));
            }
            for (int i_31 = 3; i_31 < 18;i_31 += 1)
            {
                var_66 |= (~((~(arr_97 [i_27 + 2]))));
                var_67 = ((15 - ((((-1 != (max(2147483647, var_0))))))));
            }
            var_68 = ((((-(max(2147483647, -1)))) == (((-59 != 0) >> (((~268435454) - 4026531812))))));
            var_69 = 1;
        }
    }
    #pragma endscop
}
