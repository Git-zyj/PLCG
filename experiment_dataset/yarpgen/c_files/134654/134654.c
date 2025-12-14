/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-4323 ? (var_15 && 47) : var_0));
    var_21 = var_11;
    var_22 = 4301;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_23 = var_9;
        arr_3 [i_0] = ((((((((4322 ? -4323 : (arr_0 [i_0] [i_0])))) ? var_12 : ((max(-4321, 60391)))))) || (((var_11 * (((arr_2 [i_0] [i_0]) ^ 7381919605374004495)))))));
        arr_4 [i_0] [i_0] = 4343;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_24 -= (arr_0 [i_1] [i_1]);
        var_25 = var_6;

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_26 = ((!((min(-4360, -116)))));
            var_27 += ((max((arr_5 [i_1]), (arr_7 [i_1] [i_2] [i_2]))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_21 [i_2] [i_4] [i_4] [i_3] [i_2] [i_2] = -116;
                            arr_22 [i_2] [i_2] = (arr_2 [i_1] [18]);
                        }
                    }
                }
            }

            for (int i_6 = 3; i_6 < 20;i_6 += 1) /* same iter space */
            {
                var_28 *= ((-269626672 ^ ((((12 ? var_7 : 41312)) & (((32767 && (-32767 - 1))))))));
                var_29 ^= ((((max(4333, (max(41312, 14325))))) == ((((arr_14 [i_6 + 3] [i_6 + 1] [i_6 - 2] [i_6 - 3]) > (arr_14 [i_6 + 1] [i_6 - 3] [i_6 + 3] [i_6 - 1]))))));
                var_30 = (min((max(-31907, ((12241 ? var_2 : (arr_6 [i_6] [19]))))), (arr_15 [i_1] [i_2] [i_6])));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_31 = (min(var_31, (((18 ? ((max((arr_11 [16] [i_2]), 51211))) : (arr_6 [i_7] [i_1]))))));
                            var_32 = var_17;
                            var_33 = (min(var_3, (((((var_1 ? 0 : 3))) ? ((max(52598, var_1))) : (arr_28 [i_2] [i_6 - 1] [i_6 - 1] [i_6 - 1])))));
                        }
                    }
                }
            }
            for (int i_9 = 3; i_9 < 20;i_9 += 1) /* same iter space */
            {
                var_34 = ((20952 ? -4323 : 47180));
                arr_35 [i_1] [i_2] [i_9 - 3] = ((((((arr_33 [i_1] [i_1] [i_2]) ? (-92 >= 81) : (var_12 <= var_1)))) && (arr_11 [i_2] [i_1])));
                var_35 = max((var_0 && var_11), var_7);
                var_36 = var_0;
            }
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        {
                            var_37 = 52598;
                            var_38 = var_14;
                            var_39 = ((var_0 ? ((((var_11 + -1388954859) >= ((((arr_19 [i_1] [i_2] [i_10] [i_11] [i_12]) >= 42787)))))) : ((max(32767, var_16)))));
                            var_40 = var_6;
                        }
                    }
                }
                var_41 = (var_12 ? (((-17107 + 2147483647) << (((-95 + 121) - 26)))) : (max(var_17, var_3)));
                var_42 = (max(var_42, ((min(21292, (min((min(var_3, var_2)), ((max(14329, 65272))))))))));
            }
        }
        for (int i_13 = 2; i_13 < 22;i_13 += 1) /* same iter space */
        {
            arr_45 [i_1] = -26552;
            var_43 = (min(var_43, (((((((arr_29 [i_13] [i_13 - 2] [i_13 - 2] [i_13 - 1] [i_13 - 2]) + (arr_2 [i_1] [i_13 - 2])))) ? ((-14 ? var_2 : 2000146582)) : (min(6, (arr_29 [i_13 + 1] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 2]))))))));
        }
        for (int i_14 = 2; i_14 < 22;i_14 += 1) /* same iter space */
        {
            var_44 = (25984 * -99);
            var_45 |= (((((arr_24 [i_1]) ? (arr_24 [i_14]) : (arr_24 [i_14]))) | ((var_18 ? var_3 : (arr_24 [i_14])))));
            arr_48 [i_1] [i_1] = (((((((max(19100, 22568))) ? (((arr_13 [i_1] [15] [i_1]) ? (arr_16 [i_1]) : var_5)) : var_16))) ? (min(1332366699, ((var_8 ? var_11 : (arr_37 [i_1]))))) : (arr_30 [i_1] [i_1] [9])));
            arr_49 [i_1] [i_14] = 98;
            var_46 = -61;
        }
    }
    for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 23;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 20;i_19 += 1)
                    {
                        {
                            arr_67 [i_19] [i_16] [i_17] [i_18] [i_18] [i_19] = var_7;
                            var_47 = (((arr_65 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19 + 1]) ? (~var_17) : var_19));
                        }
                    }
                }
            }
            var_48 = var_0;
            var_49 = 96;
            var_50 = (((var_17 + 2147483647) << (((arr_41 [i_15] [i_15] [i_16] [i_16] [i_16] [i_16] [i_16]) - 24338))));
        }
        arr_68 [i_15] = (arr_66 [i_15] [i_15] [i_15] [7] [i_15]);
    }
    var_51 |= 96;
    #pragma endscop
}
