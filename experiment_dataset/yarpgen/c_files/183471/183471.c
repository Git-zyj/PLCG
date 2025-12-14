/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] = var_1;
                        var_10 *= ((-(arr_6 [i_1] [i_2] [i_3 - 1])));
                    }
                }
            }
        }
        arr_11 [i_0] = var_3;
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_11 *= (((arr_0 [i_4] [i_4]) ? 12667 : (arr_14 [i_4] [i_5] [i_5])));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    {
                        var_12 = ((((min(239, 249))) ? (arr_15 [10]) : (arr_20 [6] [16] [16] [i_7])));
                        var_13 += ((((min(var_8, (max(16885590564576647840, (arr_4 [i_5] [i_6] [i_7 - 1])))))) ? (((arr_3 [i_4]) ? ((-(arr_1 [5]))) : 239)) : var_4));
                        var_14 = (max(((43 ? 255 : (arr_21 [i_7 + 1] [i_4] [i_7 - 1] [i_7 - 1]))), (arr_21 [i_7 + 2] [i_4] [i_7 + 2] [i_7])));
                    }
                }
            }
            var_15 = (min(186, 3321683941320992191));

            /* vectorizable */
            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                arr_25 [i_4] [8] [8] [i_4] = (arr_20 [i_4] [i_4] [i_4] [i_4]);
                var_16 = (max(var_16, (((arr_15 [1]) ? (arr_15 [12]) : var_0))));
            }
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                arr_30 [i_9] [i_5] [i_9] |= 239;
                var_17 = (arr_3 [i_5]);
                arr_31 [i_4] [i_4] [i_9] [i_9] |= 32;
                var_18 = (min(var_18, (((-(arr_21 [i_4] [i_9] [i_5] [i_4]))))));
            }
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 15;i_12 += 1)
                    {
                        {
                            var_19 = (((((6700361760707919717 ? var_4 : 106))) ? (((-5717171133906785513 ^ -117) ? ((1561153509132903773 ? 4 : 1304633660946984881)) : (arr_20 [i_4] [i_12 - 1] [i_12 - 3] [i_12]))) : (arr_19 [i_11] [i_4] [i_10] [15] [0] [i_4])));
                            arr_38 [i_11] [i_11] [i_10] [i_11] [i_4] = min((arr_6 [i_12 - 2] [i_12 + 1] [i_12 - 1]), var_0);
                            var_20 = (min(var_20, 42411));
                        }
                    }
                }
                arr_39 [i_4] [i_5] [6] [i_4] = ((+(((arr_8 [i_4] [i_4] [i_4] [i_5] [i_10]) ? (arr_8 [i_4] [i_4] [i_4] [i_4] [13]) : -106))));
                var_21 = 1561153509132903769;
            }

            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                arr_43 [i_4] [i_4] [i_13] [i_13] = -1561153509132903764;
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    for (int i_15 = 3; i_15 < 16;i_15 += 1)
                    {
                        {
                            var_22 = (max(var_22, -4086));
                            var_23 = (var_8 < 225432989);
                            var_24 = var_3;
                        }
                    }
                }
            }
        }
        arr_48 [i_4] = var_7;
        var_25 |= min((((((239 ? (arr_42 [i_4]) : 22057))) ? (-113 % var_2) : ((((arr_28 [i_4] [i_4] [i_4]) ? 48654 : (arr_23 [i_4] [i_4] [4])))))), var_5);
        var_26 |= -234;
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 17;i_16 += 1) /* same iter space */
    {
        var_27 *= (-127 - 1);
        var_28 = (((arr_50 [i_16]) << (18 - 18)));
    }
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        var_29 = (max(-2014310010, 0));
        var_30 = 12;
        var_31 = (((!-11) ? (min((((~(-2147483647 - 1)))), (~var_2))) : var_8));
    }
    /* LoopNest 2 */
    for (int i_18 = 1; i_18 < 12;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 15;i_19 += 1)
        {
            {
                arr_61 [i_18] [i_18] = 11;
                var_32 = min((min(189817565, 13621)), ((min(var_8, (arr_23 [i_18] [i_18] [i_18])))));
                var_33 = (max(var_33, (max(((-(arr_19 [i_18] [i_18] [6] [2] [i_18] [14]))), (min(((var_2 ? (-2147483647 - 1) : -13601)), ((var_8 ? var_9 : (arr_29 [i_18] [i_18 - 1] [i_18 + 2] [14])))))))));
                /* LoopNest 3 */
                for (int i_20 = 0; i_20 < 15;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 15;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 15;i_22 += 1)
                        {
                            {
                                arr_68 [i_18] = -123;
                                arr_69 [i_18] [1] [9] [i_18] [1] [i_18] = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
