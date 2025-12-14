/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((min((min(-828206562, var_17)), ((max(var_3, var_12))))) + 2147483647)) << (((var_14 * var_16) - 1519560755))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_21 += (((!828206585) - (((((var_7 && (arr_0 [i_0]))) && (-828206562 >= 1))))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_22 = (((((828206590 + 2147483647) << (((var_5 & var_10) - 1)))) - (((!(~var_4))))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_23 = (max((~var_8), (!45955)));
                        var_24 += ((4294967292 + (min(-1, (var_10 & -828206562)))));
                    }

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_25 = (min(var_15, (max(828206546, var_12))));

                        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                        {
                            var_26 = 828206596;
                            var_27 = ((((~45949) / ((~(arr_9 [i_2] [15] [23] [i_4] [i_5]))))));
                            var_28 = 828206559;
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                        {
                            var_29 = (((var_4 ? var_15 : (arr_4 [i_1] [i_2]))));
                            var_30 = max((arr_2 [i_0] [i_1] [i_0]), ((-(arr_2 [24] [i_2] [i_6]))));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                        {
                            var_31 = (((~var_8) + (max((arr_17 [i_7] [i_1] [i_2]), var_9))));
                            var_32 *= (((((var_12 << (828206581 - 828206560))) << ((var_5 >> (-22 + 33))))));
                            var_33 = ((((((((max(var_4, (arr_1 [i_1] [i_0]))))) % (min(2932785712, (arr_19 [i_7] [i_7] [i_7] [i_7] [11])))))) != (arr_9 [4] [i_1] [i_2] [i_1] [i_7])));
                            var_34 = ((1362181584 ? (arr_19 [i_0] [i_0] [i_2] [i_4] [7]) : (((var_16 - var_15) % ((27858 ? var_10 : 36105))))));
                            var_35 = 11941;
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_36 = (min(var_36, 828206575));
                            var_37 = (((((arr_11 [i_8] [i_2] [i_1] [i_0]) + var_2)) - (((828206585 >= (arr_11 [i_0] [i_1] [i_2] [i_8]))))));
                        }
                        var_38 = (((max(var_17, ((-(arr_1 [i_2] [i_4])))))) && (((~(arr_23 [i_4] [i_4] [i_2] [22] [i_1] [i_1] [7])))));
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                    {
                        var_39 = (min(var_39, ((!((((arr_27 [i_9] [i_0] [i_1] [i_1] [i_0] [i_0]) << (var_14 && var_18))))))));
                        var_40 = (((((arr_16 [i_2] [i_0] [i_0]) & (arr_9 [i_0] [4] [20] [i_9] [19]))) % ((var_10 ^ (arr_9 [3] [i_1] [i_2] [i_9] [i_9])))));
                        var_41 = (((((min((828206581 + var_7), var_2)) + 2147483647)) >> ((((-(-127 - 1))) - 102))));
                        var_42 = var_13;
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                    {

                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            var_43 = 828206568;
                            var_44 = var_17;
                            var_45 = ((~(arr_27 [i_11] [i_10] [6] [i_1] [i_1] [i_0])));
                        }
                        for (int i_12 = 2; i_12 < 21;i_12 += 1)
                        {
                            var_46 = (-828206574 & var_0);
                            var_47 = (((((arr_15 [i_12 + 4]) + 2147483647)) << (var_16 - 2623293785)));
                            var_48 |= ((!(arr_23 [i_12 - 2] [13] [i_12 + 4] [i_12] [i_12 + 1] [i_12 + 1] [i_12 + 2])));
                            var_49 *= (((arr_34 [i_0] [i_12 + 4] [i_12 + 4] [i_10] [i_10]) && 4166405524));
                            var_50 = ((var_12 % (arr_20 [i_12 - 1] [i_12] [i_12 + 1] [i_12 + 2] [i_12 + 4] [i_12 + 2])));
                        }
                        var_51 = (!828206598);
                    }
                    var_52 = (min(245, 15));
                }
                var_53 = ((max(var_7, var_10)) ^ ((((arr_16 [21] [22] [i_0]) - (arr_16 [i_1] [i_1] [i_0])))));
                var_54 *= ((!(var_15 || var_0)));
            }
        }
    }
    #pragma endscop
}
