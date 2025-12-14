/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] = (arr_3 [i_0] [0]);

                /* vectorizable */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        arr_14 [i_0] = var_9;

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            arr_19 [i_0] [i_1] = ((((arr_6 [i_0] [i_1] [i_3 - 1]) ? var_10 : (arr_2 [i_0]))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] = ((var_0 < (arr_2 [i_0])));
                            var_12 = (max(var_12, (((~(~67624247))))));
                        }
                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            arr_24 [i_0] [i_0] [i_2 + 1] [i_3 + 1] [i_5] = var_3;
                            var_13 = ((~((var_1 ? -8647802238297785653 : (arr_8 [10] [i_2 + 1] [10] [i_5 - 2])))));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_14 = ((!(arr_11 [i_0] [i_3 - 1] [i_2 + 1] [i_0] [i_0])));
                            arr_28 [i_0] [i_0] [9] [i_2] [i_0] [i_6] = (arr_5 [i_2 + 1] [i_2] [i_0]);
                            var_15 = (min(var_15, (4294967276 > var_7)));
                            var_16 = ((966584584605824341 ? 67624227 : 32809));
                            arr_29 [i_6] [i_0] [i_0] [i_0] = (!var_8);
                        }
                        arr_30 [i_0] [i_1] [i_2] [i_0] [i_2] [i_3 + 1] = arr_26 [6] [i_1] [i_0] [i_2] [8];
                        arr_31 [i_0] [i_1] [i_0] |= 116;

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            arr_34 [i_0] [i_2] [i_0] = (18675 <= var_8);
                            var_17 &= var_2;
                            var_18 = (min(var_18, (((-13 ^ (~-20989))))));
                            arr_35 [i_7] [i_0] = ((var_6 ? var_10 : (arr_9 [i_0] [i_0])));
                            arr_36 [11] [2] [i_0] [i_1] [i_0] [i_0 + 1] [i_0 + 1] = -112;
                        }
                    }

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_40 [i_0] [i_1] [i_1] [i_1] = (((arr_33 [i_0] [i_8]) < var_4));

                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_19 = (((arr_8 [i_0 + 1] [i_0 - 2] [i_2 + 1] [i_2 - 1]) ? (arr_26 [i_0 - 1] [i_2 - 1] [i_0] [i_8] [7]) : var_10));
                            arr_43 [i_0] = var_1;
                            arr_44 [i_1] |= (-var_0 + var_11);
                            arr_45 [i_0] [8] [i_0] [i_2] [i_2 + 1] [i_8] [i_9] = -2027760857;
                            var_20 = (((arr_17 [i_9] [i_8] [i_0] [i_1] [i_0]) ? -var_1 : (arr_12 [i_0] [i_0] [7])));
                        }
                    }
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        arr_49 [i_0] [i_1] [i_0] [2] = (((arr_13 [i_0] [i_1] [i_0] [i_10 + 1]) > -8647802238297785652));
                        var_21 -= (arr_12 [i_1] [i_1] [i_10]);
                        var_22 = ((~(arr_27 [i_0] [i_1] [i_0] [i_10] [i_2 + 1] [i_2 - 1])));
                    }
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        var_23 = (var_3 + -20989);
                        var_24 = (-27166 / -116);
                        arr_53 [i_0] [i_0] [i_0] [i_0 - 1] = var_7;
                        arr_54 [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_2 + 1] [i_0 - 2] [i_0 - 2]);
                    }
                    var_25 = 0;

                    for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                    {
                        arr_57 [i_0] [i_0 + 1] [i_0] [2] [i_1] = (8647802238297785658 <= var_2);
                        arr_58 [i_0] = ((var_10 ? var_10 : var_7));
                    }
                    for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
                    {
                        var_26 *= (~var_9);
                        var_27 = (((arr_21 [i_0] [i_1] [i_1] [i_2 + 1] [i_2] [i_13]) && var_4));
                        var_28 = var_4;
                        var_29 = var_1;
                    }
                    for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
                    {
                        arr_64 [i_0 - 2] [i_0] [i_0] [i_0] = (0 < var_9);
                        var_30 = var_7;

                        for (int i_15 = 0; i_15 < 21;i_15 += 1)
                        {
                            arr_67 [i_0 - 1] [i_0] [i_2 + 1] [i_14] [i_0] = var_3;
                            arr_68 [i_0] = (((((var_0 == (arr_51 [i_0] [i_0] [i_0])))) << (17621951132494209906 - 17621951132494209894)));
                            var_31 = (max(var_31, (~-30348)));
                            var_32 = (4849805092702987022 & 10294803739397840306);
                        }
                        for (int i_16 = 0; i_16 < 21;i_16 += 1)
                        {
                            var_33 *= ((var_10 <= (arr_26 [i_2 - 1] [i_2 - 1] [i_14] [i_2] [i_2])));
                            arr_73 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = ((9223372036854775807 >> (((arr_48 [i_14]) - 5197))));
                        }
                        for (int i_17 = 0; i_17 < 21;i_17 += 1)
                        {
                            arr_76 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_1 [i_0]);
                            arr_77 [i_17] [i_17] [i_0] [i_17] [i_0] [i_17] [i_17] = var_9;
                        }
                    }
                }
                var_34 = (arr_39 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 21;i_18 += 1)
                {
                    for (int i_19 = 3; i_19 < 20;i_19 += 1)
                    {
                        {
                            arr_82 [i_0 - 2] [i_0 - 2] [i_1] [i_18] [i_0] = (min(-var_6, 27165));
                            var_35 = (arr_10 [i_0]);
                            var_36 = ((((min((arr_27 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_19] [i_19 - 2]), var_1))) ? (10294803739397840312 % 46) : var_2));
                        }
                    }
                }
                var_37 = ((min((var_5 ^ 123804467652577562), 32761)) * (arr_70 [i_0] [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 1]));
            }
        }
    }
    var_38 ^= ((~((~(var_4 && 4294967295)))));
    var_39 *= (var_11 ? (((-((var_9 ? var_5 : -27))))) : (var_1 & var_6));
    var_40 = var_7;
    #pragma endscop
}
