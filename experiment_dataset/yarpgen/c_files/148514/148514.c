/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((~var_4), var_0));
    var_18 = var_10;
    var_19 |= -109;
    var_20 = var_11;

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_21 = (min(((var_2 ? ((min(49, (arr_1 [i_0 + 1])))) : (((arr_1 [i_0]) + (arr_0 [i_0] [i_0]))))), (((((arr_0 [i_0 + 2] [i_0]) ? 8191 : 1))))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_22 = ((40 + (arr_4 [i_0 - 1] [i_0])));
            var_23 ^= 1;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    {
                        var_24 = ((1402 ? var_13 : (arr_4 [i_1] [i_3 - 2])));

                        for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_1] [1] [i_2] [i_1] [i_1] = (arr_5 [i_2 + 2] [i_1] [i_1]);
                            var_25 = 1;
                        }
                        for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_26 = (max(var_26, var_4));
                            var_27 *= ((var_13 ? ((-(arr_3 [6] [i_1]))) : ((64121 >> (var_12 - 141461548)))));
                            arr_18 [i_3 + 1] [13] [9] [i_0 - 1] [i_5] [i_1] [i_1] = (~64141);
                            var_28 = (((~1) & (~1)));
                        }
                        var_29 = (((arr_7 [i_1] [i_3 + 1] [i_2] [i_2]) ? ((((arr_16 [i_0] [i_0 + 1] [i_1 - 1] [i_2] [i_3 - 3]) >= (arr_9 [i_1])))) : 16384));
                    }
                }
            }
        }
        for (int i_6 = 2; i_6 < 15;i_6 += 1) /* same iter space */
        {
            var_30 = 9404654279366626999;
            var_31 = (((((~(arr_6 [6] [i_0] [6])))) ? 27360 : (((arr_5 [i_0] [8] [i_6]) % 1))));
        }
        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            var_32 = (min(var_32, (!1399)));
            var_33 = (max(((-(arr_4 [i_0 + 2] [i_0]))), (arr_4 [i_0 + 2] [i_0])));
            var_34 = ((!((((!0) ? (arr_20 [i_0 - 1]) : (arr_0 [i_0] [i_7]))))));
        }
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 16;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 1; i_9 < 17;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        arr_33 [i_8] [i_9 + 1] [i_8] [i_11] = (arr_17 [i_8] [i_8] [i_10 - 1]);
                        arr_34 [13] [i_8] [i_8] [i_8] = (arr_6 [i_8 + 2] [i_9] [i_8]);
                    }
                }
            }
            arr_35 [i_8] = -var_16;

            for (int i_12 = 1; i_12 < 17;i_12 += 1)
            {
                var_35 |= -1;

                for (int i_13 = 1; i_13 < 16;i_13 += 1)
                {

                    for (int i_14 = 3; i_14 < 16;i_14 += 1) /* same iter space */
                    {
                        var_36 = ((35230 ? (-127 - 1) : -11366));
                        var_37 = ((!(arr_12 [i_8] [i_8 + 2] [i_12 + 1] [i_14 - 1])));
                        arr_43 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_8] = ((var_0 >> (-6860 + 6903)));
                    }
                    for (int i_15 = 3; i_15 < 16;i_15 += 1) /* same iter space */
                    {
                        arr_47 [i_8] = (((arr_10 [i_13 - 1] [i_13] [i_13 + 1] [i_13]) + 1));
                        var_38 = ((64134 ? (arr_36 [i_9 - 1] [i_12 + 1] [i_12] [i_13 + 2]) : (arr_26 [i_8])));
                        var_39 = (max(var_39, ((((((var_16 ? 3861458390 : 1402))) ? ((11789 >> (var_3 - 1641))) : ((-(arr_10 [i_8] [i_12] [i_13 + 1] [i_15]))))))));
                        arr_48 [i_8 - 1] [i_9 + 1] [i_8] [i_13] [i_8 - 1] = var_2;
                    }
                    var_40 = -64;
                }
                var_41 |= var_15;
                arr_49 [i_8 - 1] [i_9 + 1] [8] [i_12 - 1] |= (~var_6);
            }
            for (int i_16 = 1; i_16 < 15;i_16 += 1)
            {
                var_42 = 1;
                /* LoopNest 2 */
                for (int i_17 = 3; i_17 < 15;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 17;i_18 += 1)
                    {
                        {
                            arr_60 [i_8] [i_18] [i_16 + 3] [i_16 + 3] [1] [i_8] = (((arr_26 [i_8]) / (arr_26 [i_8])));
                            arr_61 [i_8] [i_8 + 2] [i_8] [i_8] [3] [i_8] = ((-(arr_57 [i_18 + 1] [7] [i_9])));
                            var_43 = (arr_30 [i_17] [i_18 + 1]);
                        }
                    }
                }
            }
            for (int i_19 = 4; i_19 < 16;i_19 += 1)
            {
                arr_64 [i_8] [i_8] [i_8] = (var_0 != var_1);
                var_44 = (arr_57 [i_8 + 1] [i_9] [i_9]);
                arr_65 [i_8] [i_9] [i_8] [i_19] = ((var_15 ? 0 : (9404654279366626999 > var_3)));
            }
        }
        for (int i_20 = 2; i_20 < 17;i_20 += 1)
        {
            var_45 = (((-113 + 2147483647) >> (((-32767 - 1) + 32780))));
            /* LoopNest 2 */
            for (int i_21 = 3; i_21 < 17;i_21 += 1)
            {
                for (int i_22 = 2; i_22 < 16;i_22 += 1)
                {
                    {

                        for (int i_23 = 1; i_23 < 17;i_23 += 1) /* same iter space */
                        {
                            arr_76 [i_8] [i_22] [12] [i_20] [i_8] = (((!-11388) <= ((1 ? (arr_36 [i_23 + 1] [i_22] [i_21 - 2] [i_8]) : 6))));
                            arr_77 [i_8] [i_8] [i_8 + 1] [i_8] [i_8] = (((var_7 + 1) <= ((((var_4 < (arr_26 [i_8])))))));
                        }
                        for (int i_24 = 1; i_24 < 17;i_24 += 1) /* same iter space */
                        {
                            var_46 = ((0 - (arr_23 [i_24 + 1])));
                            arr_81 [i_20 - 2] [i_20 + 1] [i_24] [i_22] [i_8] = (((((arr_26 [i_8]) ? 3 : (arr_53 [i_8] [i_20] [i_21] [i_22]))) & var_6));
                            var_47 = 11365;
                        }

                        for (int i_25 = 1; i_25 < 16;i_25 += 1)
                        {
                            var_48 = (((var_16 ? 1644389642 : 6)));
                            var_49 ^= var_5;
                            var_50 = (((arr_78 [i_22] [i_22 + 2] [i_22 + 1] [i_22 - 2] [i_22 - 1]) + var_15));
                        }
                        for (int i_26 = 3; i_26 < 15;i_26 += 1)
                        {
                            arr_89 [i_8] [i_8] [i_22] = 9404654279366626999;
                            var_51 = (-1725044765 <= -1725044776);
                        }
                    }
                }
            }
            var_52 |= ((~(arr_78 [i_20 + 1] [i_20] [i_20] [i_8] [i_8 + 1])));
            var_53 = ((-((var_14 ? var_16 : (arr_1 [i_8])))));
        }
        var_54 = (((arr_57 [i_8 - 1] [i_8 + 1] [i_8]) ? (arr_57 [i_8 + 2] [i_8] [i_8]) : (arr_57 [i_8 + 2] [i_8] [i_8 + 2])));
        arr_90 [i_8] [i_8 + 1] = -10;
        arr_91 [14] [14] |= (!(arr_21 [i_8] [i_8]));
    }
    /* vectorizable */
    for (int i_27 = 1; i_27 < 16;i_27 += 1) /* same iter space */
    {
        var_55 *= ((-477593229 ? (!1725044764) : 1210081645852914980));
        var_56 = ((var_15 & (!258750058)));
    }
    for (int i_28 = 1; i_28 < 16;i_28 += 1) /* same iter space */
    {
        arr_98 [i_28] |= (((((-(arr_75 [i_28 - 1] [i_28] [10] [i_28] [10] [12] [i_28])))) <= (((var_11 > var_6) / (arr_92 [14])))));
        arr_99 [i_28] = (min(((min((0 <= var_6), (arr_73 [i_28] [10] [i_28] [i_28])))), 1725044764));
        var_57 = (min(var_57, var_9));
    }
    #pragma endscop
}
