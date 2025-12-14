/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_10 = (max(var_10, (arr_2 [i_0])));
                arr_5 [i_0] [i_0] = ((1277229849 ? 2636816022 : 221));
                var_11 = (!var_0);
                var_12 *= (max(3017737447, 1277229849));
                var_13 = var_9;
            }
        }
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_10 [i_2] [i_2] = (max(var_9, ((((((arr_8 [12] [i_3] [i_2]) | var_2))) ? (((-127 - 1) ? 1807482951 : 12)) : (arr_8 [i_2] [i_2] [i_3])))));
            var_14 = (max((((~var_6) ? ((-(arr_6 [15]))) : (3017737452 != 14))), (arr_8 [i_2] [i_2] [i_2])));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_15 -= (arr_12 [i_2] [i_3] [i_4] [i_5]);
                        var_16 = (max((arr_11 [i_2] [i_2] [i_5]), (((((var_2 ? (arr_7 [i_2]) : var_8)) == var_8)))));
                        var_17 = (((arr_6 [i_2]) >= ((-(min(var_8, (arr_15 [i_2] [i_2] [i_4] [i_4] [i_5])))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            var_18 = ((0 ? -863372545 : 65535));
            var_19 = (((arr_15 [i_2] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 + 1]) & var_3));
        }
        for (int i_7 = 2; i_7 < 17;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
            {
                var_20 -= (((((arr_18 [i_7] [i_7] [i_7 - 2]) | (arr_18 [i_7] [i_7] [i_7 - 2]))) % (max((((var_5 ? var_2 : (arr_25 [i_2] [i_7] [i_8] [i_8])))), (arr_18 [i_2] [i_7 - 2] [i_8])))));
                arr_26 [i_2] [i_8] = (var_9 != var_5);
                arr_27 [5] [i_7] = (((((((var_2 || (arr_14 [i_2] [i_2] [i_8]))) ? var_5 : (arr_12 [i_2] [i_7] [i_7 + 1] [i_8])))) ? (((arr_25 [i_2] [i_2] [i_7 - 1] [i_8]) ? (arr_25 [i_7] [i_7] [i_7 + 1] [i_7]) : (arr_25 [i_2] [i_7] [i_7 + 2] [i_8]))) : (arr_6 [2])));
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
            {
                var_21 = (max(var_21, 0));

                /* vectorizable */
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    var_22 = (((-2147483647 - 1) < var_0));
                    arr_33 [i_2] [i_7] [i_9] [i_10] = (((!var_9) ? ((((arr_32 [i_2] [i_7 - 2] [i_9] [i_10]) ? (arr_12 [i_2] [i_2] [i_9] [i_10]) : var_2))) : -var_4));
                }
            }
            var_23 = (arr_23 [i_2] [i_2]);
        }
        arr_34 [i_2] [i_2] = (39 ? 1 : 33);
    }
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        var_24 = ((-((~(-10 | var_2)))));

        /* vectorizable */
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {

            for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
            {
                arr_43 [i_13] [i_13] [i_11] [i_11] = 65531;
                var_25 -= -66;
                var_26 = (((arr_15 [i_11] [i_12] [i_12] [i_12] [i_13]) != (arr_15 [i_11] [i_12] [i_13] [i_11] [i_12])));
            }
            for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        {
                            var_27 = var_0;
                            var_28 = (((arr_36 [i_11]) ? 0 : (arr_14 [i_11] [i_12] [i_14])));
                        }
                    }
                }
                arr_52 [1] [1] = (arr_51 [i_12] [i_12] [i_14] [i_12] [i_12]);
                var_29 = (min(var_29, (((-(!var_0))))));
                arr_53 [11] = (arr_45 [i_11] [i_12] [i_14] [i_14]);
            }
            var_30 = ((~(!-26)));
            arr_54 [i_12] [i_12] [i_11] = (((arr_50 [i_11]) & ((-39 * (arr_23 [i_11] [i_11])))));

            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                var_31 += arr_46 [i_12];
                var_32 = (max(var_32, ((~(arr_12 [18] [i_11] [i_12] [i_17])))));
            }
        }
        arr_58 [i_11] = arr_8 [1] [i_11] [i_11];
        var_33 = var_2;
        var_34 = (arr_35 [i_11]);
    }
    for (int i_18 = 0; i_18 < 25;i_18 += 1)
    {
        var_35 *= ((~(((arr_60 [i_18]) << (arr_60 [23])))));
        var_36 = (max(-var_2, ((min((arr_60 [i_18]), (arr_60 [i_18]))))));
        var_37 = ((!(max((((arr_61 [i_18]) && (arr_61 [i_18]))), (arr_60 [i_18])))));
        var_38 = (max(var_38, (48 & 0)));
        var_39 = ((~(((((max(var_7, (arr_60 [i_18]))))) ^ (((arr_59 [20] [i_18]) ? (arr_60 [13]) : var_4))))));
    }
    for (int i_19 = 2; i_19 < 22;i_19 += 1)
    {
        var_40 = (((((-((min(var_5, (arr_63 [i_19]))))))) ? (((-1277229861 ? ((-(arr_65 [i_19]))) : (~7)))) : (((((~(arr_59 [i_19] [i_19])))) ? (arr_62 [i_19 + 2]) : var_9))));
        arr_66 [i_19] = -1;
    }
    #pragma endscop
}
