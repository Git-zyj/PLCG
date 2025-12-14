/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(var_6 - 9223372036854775807)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_20 *= (((!var_10) > (((((min((arr_6 [i_0] [i_1 + 1] [2]), var_4)) == (((arr_8 [i_0]) - var_3))))))));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                            {
                                var_21 = ((max(var_13, 22492)));
                                arr_14 [i_0] [19] [i_2] [0] [i_3] [i_4] [i_2] = (((arr_13 [i_1 - 1] [i_1 + 1] [i_2]) + ((~(!var_2)))));
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                            {
                                arr_17 [i_2] [i_5] [i_3] [i_2] [i_1] [i_2] = (~var_16);
                                arr_18 [i_0] [i_1] [i_2] [i_2] [2] = (min(var_6, (((-(((-9223372036854775807 - 1) / var_1)))))));
                            }
                            arr_19 [i_2] = ((!(((~(arr_3 [3] [i_3]))))));
                        }
                    }
                }
                arr_20 [i_0] = (max(var_3, var_2));

                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    var_22 = (max((((max(var_16, var_16)) << ((((max((arr_3 [i_0] [i_1]), (arr_12 [i_0] [i_0] [i_6] [i_1 + 1] [i_1 - 1] [i_6] [i_6 - 2])))) - 27437)))), ((max((arr_12 [i_0] [i_1 + 1] [i_6] [i_6 - 1] [i_1] [14] [i_6 + 1]), ((~(arr_6 [16] [i_1 + 1] [i_6]))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_23 = ((!((min((arr_1 [i_8 + 1] [4]), var_17)))));
                                var_24 = (!13330028612282908586);
                                var_25 = (max(var_25, (~4294959104)));
                                arr_28 [i_6] [i_1 + 1] [i_6] [18] = ((max((var_15 / var_8), (~var_0))));
                                var_26 ^= (((((-(arr_1 [i_0] [1]))))) ? 9223372036854775807 : (~1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 19;i_10 += 1)
                        {
                            {
                                arr_33 [i_0] [i_0] [i_6 - 1] [i_9] [i_10 - 1] &= var_4;
                                var_27 = (!4294967295);
                            }
                        }
                    }
                    var_28 = ((-((((((arr_26 [i_6]) ? var_1 : var_18)) >= (max(3141162872, 16271881743673408685)))))));
                    arr_34 [i_0] [i_1] [i_6] [i_6] = (((~var_9) / (arr_30 [i_0] [14] [i_0] [i_0] [i_0] [2])));
                }
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    arr_37 [i_11] [i_1] [6] = (var_6 || -11077);
                    var_29 = ((!((max(((var_9 ? var_17 : var_13)), ((((arr_26 [i_11]) >= var_6))))))));
                }
                /* vectorizable */
                for (int i_12 = 1; i_12 < 16;i_12 += 1)
                {
                    var_30 = -2089059405;
                    arr_41 [i_12] [i_12] = (var_7 - var_10);
                    arr_42 [i_0] [i_12] = var_3;
                }
                var_31 ^= var_6;
            }
        }
    }
    #pragma endscop
}
