/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 += -var_9;
                    var_15 = (max(var_15, (((-(arr_3 [i_0] [i_0 - 1] [i_2 + 1]))))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {

            for (int i_4 = 3; i_4 < 18;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_16 = (arr_9 [i_0 - 3] [i_0 - 3]);
                    var_17 = (--768);
                }
                var_18 *= (-(arr_5 [i_0]));
                arr_18 [i_0] [i_3] [i_3] [i_4 - 3] = (arr_13 [i_0 - 1] [i_0 - 1] [i_3]);
                arr_19 [i_0 + 2] [i_3] [i_0 + 2] [i_0] = (0 ? var_10 : 3840);
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_19 = (min(var_19, 766));
                    var_20 = (~0);
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    var_21 |= (!9223372036854775808);
                    var_22 = (-var_6 ? (arr_27 [i_0 - 1]) : (arr_15 [i_0] [i_0] [i_0 - 3] [i_0] [i_0] [i_0]));
                    var_23 = (min(var_23, (((arr_21 [i_0 - 3] [i_0 - 2] [i_0]) ? var_9 : (~var_9)))));
                    var_24 = (max(var_24, (arr_26 [i_8] [i_0 - 4] [i_6] [i_8] [i_0 - 2])));
                    arr_28 [i_3] = (((((0 ? -770 : var_8))) ? (arr_3 [i_3] [i_6] [i_3]) : (arr_9 [i_0 + 1] [i_0 + 1])));
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    var_25 = ((-752 ? (!0) : (arr_16 [i_0] [i_0 - 3] [i_0 - 2] [i_0 - 3] [i_0 - 4])));
                    arr_32 [i_3] [i_3] [i_3] [i_3] = ((var_11 ? (arr_5 [i_9]) : var_5));
                    var_26 ^= var_8;
                }
                for (int i_10 = 1; i_10 < 18;i_10 += 1)
                {
                    arr_37 [i_10] [i_10] [i_0] [i_10] [i_10] [i_10] &= (!-780);
                    arr_38 [i_0] [i_0] [i_3] [i_6] [i_6] [i_10] = var_3;
                    arr_39 [i_0] [i_10] |= (arr_29 [i_3] [i_6]);
                }
                var_27 = (max(var_27, (arr_15 [i_6] [i_6] [i_6] [i_3] [i_3] [i_0 - 2])));
            }
            for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
            {
                var_28 = (arr_15 [i_0 - 3] [i_0 - 2] [i_0 - 2] [i_0] [i_0 + 2] [i_0]);
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            arr_47 [i_3] = (((arr_9 [i_0 - 1] [i_0]) ? 1 : var_4));
                            var_29 = var_0;
                            var_30 = (max(var_30, 18446744073709551597));
                        }
                    }
                }
                var_31 += 0;
            }

            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                var_32 = (arr_17 [i_0 - 1] [i_0 - 3] [i_0 - 1] [i_14] [i_14]);
                var_33 += 1;
                arr_51 [i_3] [i_3] = (((arr_22 [i_0 - 4] [i_0] [i_3]) * -29));
                arr_52 [i_3] [i_3] [i_14] [i_14] = (!800);
            }
            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                var_34 = (min(var_34, ((var_13 ? (arr_5 [i_0 + 1]) : (arr_43 [i_0 + 2] [i_0 - 4] [i_15] [i_0 + 2])))));
                var_35 *= var_2;
            }
        }
        for (int i_16 = 1; i_16 < 19;i_16 += 1)
        {
            var_36 = (!var_10);
            var_37 *= ((var_2 || (arr_24 [i_0])));
        }
        var_38 = (max(var_38, (((-(arr_43 [i_0] [i_0] [i_0 + 2] [i_0 - 2]))))));

        for (int i_17 = 0; i_17 < 20;i_17 += 1)
        {
            arr_60 [i_0] [i_17] = 18446744073709551606;
            var_39 ^= (arr_31 [i_0 + 1]);
        }
        for (int i_18 = 0; i_18 < 20;i_18 += 1)
        {

            for (int i_19 = 2; i_19 < 19;i_19 += 1)
            {
                var_40 = (max(var_40, (arr_54 [i_0 + 1] [i_0])));
                var_41 *= 65520;
                var_42 = ((-1 ? 773 : (arr_1 [i_19 - 2] [i_19 - 2])));

                for (int i_20 = 2; i_20 < 19;i_20 += 1)
                {
                    arr_69 [i_20 - 1] [i_20] [i_20] [i_20] [i_20] [i_20 - 1] = -0;
                    var_43 = (min(var_43, (~-787)));
                }
                for (int i_21 = 1; i_21 < 17;i_21 += 1)
                {
                    var_44 = (max(var_44, (arr_45 [i_21] [i_21 + 2] [i_21 + 2] [i_19] [i_21])));
                    var_45 *= var_3;
                    var_46 *= (18 || 800);
                    arr_72 [i_0 - 4] [i_0 + 1] = 2143289344;
                }
                for (int i_22 = 3; i_22 < 18;i_22 += 1)
                {
                    var_47 |= ((var_8 ? (((18446744073709551596 ? 507904 : (arr_27 [i_19])))) : 18446744073709551615));
                    arr_77 [i_0 + 1] [i_0] = var_13;
                }
            }
            arr_78 [i_0 - 2] [i_0] [i_18] |= var_6;
        }
        for (int i_23 = 0; i_23 < 20;i_23 += 1)
        {
            arr_82 [i_0] [i_0 - 2] [i_0] = (+-0);
            var_48 |= ((-(arr_21 [i_0 - 3] [i_0 - 3] [i_0])));
        }
    }
    var_49 = var_6;
    #pragma endscop
}
