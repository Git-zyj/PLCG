/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = var_3;
                    arr_6 [i_2] [i_0] [i_0] [i_2] = (max(0, 1));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, ((min(var_1, (((!var_4) ? ((max(var_2, 134217727))) : (max((arr_8 [i_2] [i_0] [i_0]), var_5)))))))));
                                arr_12 [i_4] [i_4] [i_3] [i_2] [i_4] = ((((min(2147483647, 1))) ? (((~548682072064) ? -23 : (arr_8 [i_2 - 1] [i_3 + 3] [i_2 - 2]))) : (((arr_11 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] [i_3 + 2]) ? (arr_11 [i_0] [i_1] [i_1] [i_3] [i_1] [i_3]) : (arr_8 [i_3 - 3] [i_2 - 2] [i_1])))));
                                var_17 *= -2147483647;
                            }
                        }
                    }
                    arr_13 [i_0] [i_2] [i_0] [i_2 + 1] = ((var_3 ? var_10 : (min(314932807, 1))));
                }
            }
        }
    }
    var_18 = var_9;

    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_19 &= (118 << 18);

        for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
        {
            var_20 *= (arr_2 [i_6 + 1] [i_5]);
            var_21 = ((1 ? (arr_5 [i_5] [i_6 + 1] [i_6 - 1] [i_5]) : 24393));
            var_22 += ((var_5 ? (6373441430336374984 ^ var_12) : 1));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        var_23 = -1;
                        arr_25 [i_8] [i_6 - 2] [i_6] &= 1244188867;
                        var_24 |= (arr_8 [i_5] [i_6] [i_7]);
                        arr_26 [i_8] [i_7] [i_6] [i_8] = ((32643 ? 56 : 15243863926213430057));
                    }
                }
            }
        }
        for (int i_9 = 2; i_9 < 14;i_9 += 1) /* same iter space */
        {
            arr_29 [i_5] &= (arr_27 [i_9 - 2]);
            var_25 = (arr_28 [i_9 + 1] [i_9 - 2] [i_9 + 1]);

            for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
            {
                arr_33 [i_10] [i_10] [i_9] [i_5] = (1 ? 25474 : 2796);
                var_26 = 1;
            }
            for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
            {

                for (int i_12 = 3; i_12 < 12;i_12 += 1) /* same iter space */
                {
                    var_27 = (4294967295 ? 262143 : 1);
                    var_28 = ((-2147483647 ? (var_12 | 32073) : (var_5 || var_8)));
                    var_29 = (!var_2);
                    var_30 = 32073;
                }
                for (int i_13 = 3; i_13 < 12;i_13 += 1) /* same iter space */
                {
                    var_31 = ((~((340015791 ? 0 : 7526869347546799602))));
                    var_32 = (max(var_32, (((arr_37 [i_13 - 3] [i_13 - 3] [i_9 - 1] [i_5]) / ((124576920 ? 11035220358618728843 : var_2))))));
                    var_33 = var_9;
                    var_34 = ((~(arr_2 [i_13 + 1] [i_9 - 1])));
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 14;i_15 += 1)
                    {
                        {
                            var_35 = 32767;
                            var_36 |= 2147483647;
                            var_37 = ((-((9428854923823778057 ? 968449917 : var_14))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        {
                            arr_52 [i_5] [i_9] [i_11] [i_11] [i_11] [i_16] [i_17] = (0 != var_5);
                            arr_53 [i_5] [i_9] [i_11] [i_16] [i_5] [i_11] [i_11] = var_14;
                        }
                    }
                }
                var_38 = var_10;
                arr_54 [i_11] [i_11] [i_9] [i_11] = (((arr_10 [i_11] [i_9 + 1] [i_9 - 1] [i_5] [i_5]) <= -57));
            }
            for (int i_18 = 0; i_18 < 15;i_18 += 1) /* same iter space */
            {
                var_39 *= ((var_2 ? 56121 : var_1));
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        {
                            arr_62 [i_20] [i_5] [i_5] [i_19] [i_5] [i_5] [i_5] = -var_9;
                            var_40 = ((29 ? 10676920170175010734 : var_14));
                        }
                    }
                }
            }
            for (int i_21 = 0; i_21 < 15;i_21 += 1)
            {
                var_41 = 10991;
                arr_65 [i_9 + 1] = -var_10;
            }
            var_42 = (min(var_42, ((((1 ? -65 : var_8))))));

            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                var_43 = var_13;
                var_44 = ((var_8 ? ((970245522 ? 33448 : (arr_43 [i_5]))) : ((var_2 ? 19 : 32748))));
            }
        }
        for (int i_23 = 0; i_23 < 15;i_23 += 1)
        {
            arr_72 [i_23] = -42;
            var_45 = var_3;
            var_46 = ((2147483630 ? (!1) : 64709));
        }
        var_47 = var_2;
        var_48 ^= ((1 >= (((arr_59 [i_5] [i_5] [i_5]) ? var_6 : 32073))));
    }
    #pragma endscop
}
