/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_15 *= ((((max(var_2, ((((arr_1 [i_0 - 1] [i_1]) ? 1 : var_8)))))) || ((max((!var_12), ((-(arr_4 [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {

                            for (int i_4 = 4; i_4 < 18;i_4 += 1)
                            {
                                var_16 = (max(var_16, (((-((((~-22272) || -6844637267419330238))))))));
                                var_17 = (max((var_11 != var_10), (arr_10 [i_3 + 3] [i_1 + 3] [i_0] [i_3 + 1])));
                                arr_13 [i_0] [8] [i_0] [i_3] [i_4] = (!-28840);
                            }
                            for (int i_5 = 0; i_5 < 19;i_5 += 1)
                            {
                                var_18 = ((((((arr_1 [i_1 - 2] [i_1]) ? (arr_9 [i_0] [i_0 + 1] [i_0 - 1] [i_2 - 2] [i_0] [i_0 - 1]) : (arr_15 [i_0 + 1] [i_1 - 1] [i_2] [i_2 + 1] [i_2] [i_0 - 1])))) ? ((max(var_12, (arr_15 [i_0] [i_1] [i_1] [i_2 - 2] [i_2 - 2] [i_0 - 1])))) : ((((arr_9 [i_0 - 1] [i_0 + 1] [i_0 - 1] [8] [i_0] [i_0 - 1]) < var_9)))));
                                arr_17 [i_0] [1] = ((((((arr_0 [i_0 + 1]) ? var_3 : var_2))) ? ((var_7 ? var_6 : (arr_0 [i_0 + 1]))) : ((min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1]))))));
                            }
                            var_19 *= -var_10;

                            for (int i_6 = 0; i_6 < 0;i_6 += 1)
                            {
                                var_20 = ((39199 ? 13011 : -30671));
                                var_21 = (~49878);
                            }
                            var_22 = ((((-6844637267419330235 + 3420413021) & 1)) < (((((max(24719, var_6))) ? (max(var_5, var_3)) : (((-28829 ? (arr_15 [i_0] [i_1] [i_2] [i_3 - 1] [i_3] [i_3]) : 1)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_23 = var_10;
                            arr_26 [i_0] = (((((var_7 ? (arr_15 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1]) : 35335))) ? (~-var_2) : (((arr_3 [i_8] [i_7] [i_0]) ^ ((16130 ? (arr_19 [i_0] [i_0] [i_1] [i_0] [i_0] [i_8] [i_8]) : -28840))))));
                            arr_27 [i_8] [i_7 - 1] [i_8] [i_8] [i_0] [i_0] |= (!var_7);
                            var_24 *= (max(((var_13 * (!28840))), -6844637267419330253));
                        }
                    }
                }
                var_25 = ((~((-(arr_12 [1] [3] [11] [i_1 + 2] [i_1 - 2])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 17;i_9 += 1)
    {
        for (int i_10 = 4; i_10 < 17;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_26 = ((+((max((arr_39 [i_9]), (arr_39 [i_9]))))));
                            var_27 = ((!(((-((var_0 ? 12462 : 30671)))))));
                            var_28 = (min(var_28, (((!((((arr_29 [i_10]) * (arr_30 [i_10])))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        {
                            arr_46 [10] [i_9] [i_9] [i_9] = (max(((max((max(var_13, 426)), var_0))), ((var_14 ? (-6844637267419330231 < var_0) : (arr_32 [i_14] [i_13])))));

                            /* vectorizable */
                            for (int i_15 = 0; i_15 < 20;i_15 += 1)
                            {
                                arr_49 [i_9] [i_9] [i_9] [i_14] [i_15] [0] = -var_12;
                                var_29 = ((-(arr_44 [i_9 + 1] [i_9 + 1] [i_9] [i_9])));
                            }
                            for (int i_16 = 1; i_16 < 17;i_16 += 1)
                            {
                                var_30 = 0;
                                var_31 = (max(var_31, ((min((((var_14 ? -7533 : (arr_41 [i_9] [i_9 + 2] [i_9] [i_9 - 1])))), (((~-8) | (arr_51 [i_9] [i_16 + 3] [1] [i_14] [i_10 + 1] [i_9 + 2]))))))));
                                var_32 = (min(((-((min(var_7, 1))))), (arr_42 [i_9 + 1] [i_9 + 1] [i_10])));
                            }
                        }
                    }
                }
                arr_52 [i_9] [i_9] = ((((((arr_39 [i_9]) ? var_5 : var_3))) ? (((arr_44 [i_10] [i_9 + 3] [i_10 - 2] [i_9 + 3]) ? 2334129137 : var_10)) : (arr_39 [i_9])));
                arr_53 [i_10] |= 43111;
            }
        }
    }
    #pragma endscop
}
