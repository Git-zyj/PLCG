/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_20 ^= (((arr_2 [i_1]) ? (var_18 == var_10) : var_4));
            var_21 &= ((var_0 ? (arr_1 [i_1]) : (arr_2 [i_1])));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_22 = (!27910);
            arr_9 [i_0] [i_0] [16] |= ((7038 ? (arr_8 [4] [i_2]) : (arr_0 [i_0] [i_2])));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_12 [i_0] [i_0] [i_3] = ((7038 || (29 == 2282819989)));

            for (int i_4 = 4; i_4 < 17;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    arr_17 [i_0] [i_0] [i_3] [i_3] [i_0] = (((var_6 + var_2) ? var_10 : (!-3447)));
                    var_23 ^= ((arr_14 [i_4] [i_4 - 1] [i_4]) != 2147483636);
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_24 += var_13;

                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        var_25 = ((arr_14 [i_4] [i_4] [i_4 - 1]) ? ((var_1 ^ (arr_4 [i_4]))) : (arr_11 [i_4]));
                        var_26 = var_1;
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = -23812;
                    }
                    arr_27 [i_0] [i_3] [i_0] [i_0] [i_3] = 7116;
                }
                var_27 = (arr_21 [i_0] [i_0]);
                var_28 = (((((arr_19 [i_0] [i_3] [i_0] [i_4] [i_4]) ^ 52)) >> ((((25 ? (-32767 - 1) : 216)) + 32769))));
            }
            for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 16;i_10 += 1)
                    {
                        {
                            arr_35 [i_0] [i_3] [i_0] [i_0] [i_3] [i_10 - 1] = (var_11 * (arr_23 [i_10] [i_10 + 1] [i_10 + 1] [i_0] [i_10 + 1]));
                            var_29 = (var_15 == 1);
                            arr_36 [i_0] [i_0] [i_0] [i_8] [i_8] [i_9] [i_8] = 221;
                        }
                    }
                }
                var_30 = ((-200 * (!var_5)));

                for (int i_11 = 2; i_11 < 17;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        var_31 = (((-21237 <= 204) < (arr_2 [i_0])));
                        arr_43 [i_0] [i_0] [i_8] [i_0] [i_12] = 284194404;
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_48 [i_0] [i_0] [i_0] [i_0] [i_13] = ((-((7038 ? var_13 : var_12))));
                        arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] = (~202);
                    }
                    for (int i_14 = 4; i_14 < 17;i_14 += 1)
                    {
                        arr_53 [i_0] [i_0] [i_0] [i_0] = -55;
                        arr_54 [i_0] [i_11] [i_0] [i_3] [i_0] = ((-var_5 == (arr_6 [i_0] [i_14 - 2])));
                    }
                    arr_55 [i_8] [i_3] [i_8] [i_11 - 1] [i_8] [i_0] = (((arr_11 [i_0]) == var_4));

                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        arr_58 [i_0] [i_3] [i_8] [i_11] [i_0] = var_2;
                        arr_59 [i_0] [i_0] [i_0] [i_11] [i_15] = var_4;
                        var_32 *= ((!(((284194395 ? var_16 : var_8)))));
                        var_33 = var_15;
                    }
                }
                for (int i_16 = 1; i_16 < 17;i_16 += 1)
                {
                    var_34 -= ((1 >= (!var_4)));
                    arr_62 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = (arr_32 [i_0] [i_16 + 1] [i_16 + 1]);
                }
                var_35 *= ((75 ? var_15 : ((var_3 ? (arr_10 [i_0] [6]) : (arr_22 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0] [i_8])))));
            }
            for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
            {
                arr_67 [i_0] [i_0] [i_17] [i_17] = (((arr_38 [i_0] [i_0] [i_0]) >= 1));
                var_36 = ((-27910 < (arr_1 [i_0])));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 18;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 18;i_19 += 1)
                    {
                        {
                            arr_74 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_13;
                            var_37 ^= (0 <= 7029);
                            var_38 = (arr_5 [i_0] [i_3]);
                        }
                    }
                }
                var_39 = ((arr_50 [i_0] [i_3]) ? (arr_50 [i_0] [i_0]) : 3759627859);
                arr_75 [i_3] [i_0] = (arr_41 [i_0] [i_3] [i_17] [i_17]);
            }
            arr_76 [2] [2] [i_0] |= ((var_10 != (arr_44 [i_0] [i_3] [i_0] [i_0] [i_3])));
            arr_77 [i_0] = (~var_12);
        }
        arr_78 [i_0] [i_0] = var_8;
    }
    var_40 = (--var_5);
    var_41 = var_16;
    #pragma endscop
}
