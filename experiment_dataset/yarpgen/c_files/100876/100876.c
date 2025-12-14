/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_18 = 805;
                                var_19 += (((arr_9 [i_0] [i_1 + 2]) ? (arr_14 [i_0]) : (arr_9 [i_0] [i_1 - 1])));
                                arr_15 [2] [2] [2] [i_3] [i_4] &= (((1 * var_12) ? var_15 : -var_4));
                                arr_16 [i_0] [i_0] [i_2] [i_3 - 1] [i_4] = var_2;
                            }
                            for (int i_5 = 3; i_5 < 18;i_5 += 1)
                            {
                                var_20 = (+((((!-2776021147201327195) <= (var_3 * 0)))));
                                var_21 = ((var_0 ? -12429 : (min((((arr_3 [i_0] [i_0]) / var_14)), (arr_18 [i_1 + 2] [i_1] [1] [i_2] [i_5 + 2] [i_0] [i_3 + 3])))));
                                var_22 |= (min(((min((max(var_4, var_2)), (!var_9)))), (((min(var_2, var_1)) * var_15))));
                                var_23 = ((+((((var_11 && -13562) && var_7)))));
                                var_24 = 17014319362467180058;
                            }
                            arr_19 [i_0] [i_0] [i_2] = (((((var_4 ? var_3 : 3131868296))) ? (var_12 != var_14) : -var_15));

                            for (int i_6 = 3; i_6 < 19;i_6 += 1)
                            {
                                var_25 = -114;
                                arr_23 [i_1] [i_3] = (min((min(((var_13 ? var_0 : var_10)), (~var_12))), (!1)));
                            }
                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                arr_26 [i_0] [i_0] = (~(!var_14));
                                var_26 += (arr_22 [i_3 + 1] [i_3] [i_3 + 2] [i_3] [i_3 + 3] [i_3 + 1]);
                                arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = 1023313356;
                                var_27 += (((max(-var_16, (0 % var_5))) > (~-var_10)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_28 = (arr_24 [i_1 + 2]);

                            for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                            {
                                var_29 += (((((arr_9 [i_1 - 1] [i_8 + 2]) ? (arr_9 [i_1 + 2] [i_8 + 2]) : var_1)) < ((min((arr_9 [i_1 + 1] [i_8 + 2]), var_2)))));
                                var_30 = ((~(min(((min((arr_35 [i_0] [i_1 + 1] [i_8 + 1] [i_0] [i_8 + 1] [i_8 + 1]), var_8))), (~0)))));
                                var_31 &= (min((((-(~-16)))), var_10));
                            }
                            for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                            {
                                var_32 = (min((((var_9 * (!var_12)))), ((-((var_12 ? (arr_17 [i_0] [i_0]) : var_4))))));
                                var_33 = (((var_5 ? ((var_12 ? 40 : 2710880926)) : (!-5669645602487308384))));
                                var_34 ^= ((((max(5106929319094186639, 8301518789586741435))) ? (!var_16) : (min(var_8, var_2))));
                            }
                            for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                            {
                                var_35 = ((((min((~var_15), ((var_7 ? 46510 : 1))))) ? ((((!(arr_37 [i_8] [i_8]))))) : (((!var_13) ? (max(var_11, 8)) : (10145225284122810181 & 25587)))));
                                var_36 |= (((!var_13) * ((~(arr_41 [i_1 + 2] [i_1 + 1] [i_0] [i_1] [i_8 + 1])))));
                                var_37 = ((((arr_40 [i_8 + 2] [i_8] [i_8] [i_8 - 1] [1] [i_0] [i_0]) ? ((var_7 ? var_8 : var_13)) : var_11)));
                                arr_42 [i_8] = ((-123 ? (0 != 1489464394) : var_6));
                            }
                            var_38 |= -113;
                        }
                    }
                }
                var_39 = (min(var_39, (((884762501 ? var_3 : (max(var_5, (arr_4 [i_0] [i_1] [i_1 + 2]))))))));
            }
        }
    }
    var_40 *= var_0;
    var_41 -= (((~-var_3) ? (((((var_11 || var_9) && (((var_5 ? var_3 : var_6))))))) : ((var_8 ? (((5 ? var_16 : var_12))) : (var_12 + var_14)))));
    #pragma endscop
}
