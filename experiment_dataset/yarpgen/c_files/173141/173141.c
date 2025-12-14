/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (min(10736752954304507031, 3725430910));
        var_16 = ((~(!var_9)));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_17 = (((arr_3 [i_1 + 1] [i_1 + 1]) ? ((min((arr_4 [i_1 - 1] [i_1 + 1]), var_9))) : 14173798475877049113));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_18 -= (((min(var_10, (arr_5 [i_4] [i_3 + 2] [i_1 - 2]))) ? (((!((min((-2147483647 - 1), 48)))))) : var_5));
                        var_19 = (max(var_14, ((min(31, (arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                        arr_11 [i_1] [i_1] [i_2] [i_4] = (min((min(0, (arr_3 [6] [i_2]))), ((min((arr_4 [i_1 + 1] [i_1 + 1]), (arr_6 [i_1 - 2] [4] [4]))))));
                    }
                }
            }
        }
        arr_12 [i_1] = (arr_1 [i_1 + 1]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    arr_21 [i_1] [5] [i_1] = var_3;
                    var_20 = (arr_19 [i_1 - 1] [i_5]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_28 [i_1] [i_1] [i_1] = (arr_23 [i_1 + 1] [i_5] [i_6] [i_7]);
                                var_21 = (min((((~(~var_12)))), (((arr_7 [i_1 - 2] [i_1]) ? (arr_26 [i_1 - 1] [i_1 - 2]) : (arr_7 [i_1 + 1] [i_1])))));
                                var_22 = (min(var_22, var_3));
                                arr_29 [i_1 + 1] [i_5] [i_6] [i_1 + 1] [i_7] [i_1 + 1] [i_8] = ((~(min((!-914430661), 12))));
                            }
                        }
                    }
                    arr_30 [i_6] [i_6] [2] = -var_15;
                }
            }
        }
        arr_31 [i_1] = ((((min((arr_26 [i_1 - 2] [i_1 - 1]), 127))) - var_14));
    }
    var_23 ^= max(var_15, 4294967280);
    var_24 = var_5;
    var_25 = var_12;

    for (int i_9 = 3; i_9 < 23;i_9 += 1)
    {
        var_26 = (max(var_26, (((((((~(arr_32 [i_9])))) ? (max(var_7, (arr_33 [i_9]))) : (min(var_11, 18119319698085648536))))))));
        var_27 = 129;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
    {
        var_28 = (((arr_36 [i_10] [i_10]) & (arr_36 [i_10] [i_10])));
        var_29 = (!var_1);
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                {
                    arr_44 [i_10] [i_11] [i_12] = (arr_0 [i_11]);

                    for (int i_13 = 3; i_13 < 12;i_13 += 1)
                    {
                        var_30 = (((arr_0 [i_13 + 2]) ? (arr_0 [i_13 - 2]) : (arr_0 [i_13 + 1])));
                        arr_47 [i_13] = var_13;
                    }
                    for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                    {
                        var_31 = (arr_42 [i_10] [i_10] [i_10]);
                        var_32 = 1;
                    }
                    for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
                    {
                        var_33 = (arr_42 [i_10] [i_10] [i_12]);
                        var_34 = var_13;

                        for (int i_16 = 0; i_16 < 14;i_16 += 1) /* same iter space */
                        {
                            arr_54 [i_10] [i_10] [i_11] [i_10] = (arr_38 [i_10] [i_10]);
                            arr_55 [i_16] [i_10] [i_10] [3] [i_10] = (((arr_34 [i_15] [i_15]) ? (arr_53 [i_10] [i_11] [i_10] [i_12] [i_15] [i_10] [i_16]) : (arr_34 [i_10] [i_10])));
                            var_35 = (arr_37 [i_10] [i_10]);
                            var_36 &= ((-20415 ? (arr_38 [i_10] [i_11]) : var_15));
                        }
                        for (int i_17 = 0; i_17 < 14;i_17 += 1) /* same iter space */
                        {
                            var_37 = (min(var_37, (arr_42 [i_10] [i_10] [i_10])));
                            var_38 = -2147483633;
                            var_39 += (-(arr_58 [i_10] [i_11] [i_12] [i_15] [11]));
                        }
                        var_40 = (((arr_56 [i_11] [i_11] [i_11] [i_11] [i_11]) <= (arr_45 [i_10] [3] [i_12] [i_10])));
                    }
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 14;i_18 += 1) /* same iter space */
    {

        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            var_41 *= (arr_50 [i_18] [i_18] [i_18] [i_19]);

            for (int i_20 = 0; i_20 < 14;i_20 += 1) /* same iter space */
            {
                arr_67 [i_20] [i_19] [i_18] = var_3;
                arr_68 [i_18] [i_18] [i_18] [i_18] = (min(((min((arr_32 [i_18]), var_9))), (max((max((arr_35 [i_18] [i_18]), 4294967295)), (arr_59 [i_19])))));
                var_42 = max(((((arr_62 [i_18]) ? -6846934459661057663 : (arr_40 [i_18] [i_18])))), (((!(arr_40 [i_20] [i_18])))));
            }
            /* vectorizable */
            for (int i_21 = 0; i_21 < 14;i_21 += 1) /* same iter space */
            {
                var_43 = (min(var_43, var_11));
                arr_71 [i_18] [i_18] [i_21] [i_21] |= (((arr_43 [i_19] [i_21]) ? (arr_43 [i_21] [i_18]) : (arr_43 [i_21] [i_19])));
                var_44 = 542518742;
            }
        }
        arr_72 [i_18] = (min((arr_52 [i_18] [i_18] [i_18] [i_18] [i_18]), ((min(-29086, -35)))));
        var_45 = (min((min((arr_53 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]), (arr_40 [i_18] [i_18]))), (arr_40 [i_18] [i_18])));
        arr_73 [i_18] [i_18] |= (arr_59 [i_18]);
    }
    #pragma endscop
}
