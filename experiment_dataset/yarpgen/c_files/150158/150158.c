/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((~(max(-3801, (!var_3))))))));
    var_14 = ((((min(var_5, ((var_3 ? var_8 : -108))))) ? (((min(1, 1)))) : (min(var_12, var_2))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_15 *= -var_0;

                    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_16 *= (arr_6 [i_1] [i_2] [i_3] [i_4]);
                            var_17 = -1;
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_19 [i_0] [i_0 + 3] [i_0 + 3] [i_2] [i_3] [4] [i_5] = (min(((4095 ? var_12 : 3211190852)), var_5));
                            var_18 = (max(var_18, (((((~(arr_1 [i_5] [i_0 + 3]))) < var_10)))));
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_5] = arr_9 [i_3];
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = var_9;
                            arr_24 [i_6] [i_6] = ((~(arr_22 [i_0 + 2] [i_6 + 2] [i_6] [i_6] [i_6 + 1] [i_6 + 3])));
                        }
                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            var_19 = 23826;
                            var_20 = var_10;
                        }
                        var_21 ^= -58;
                        arr_28 [i_0] [i_0 - 1] = (arr_4 [i_0] [i_1] [i_2]);
                        arr_29 [i_0] [i_0 + 3] [5] [i_0 + 2] [5] [5] = 1;
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                    {
                        arr_33 [i_0] [i_0 + 3] [i_0] = ((~(arr_13 [i_0 + 1])));
                        var_22 &= 1;
                    }
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    var_23 = ((((-1 ? 65527 : 1)) << (((arr_0 [i_0 + 1] [i_1]) - 584658946))));

                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        arr_39 [i_9] [i_9] [i_9] [i_1] [i_9] = ((var_8 ? ((-(arr_12 [i_9] [i_1] [i_9] [i_9] [i_10 + 1] [i_9] [i_0]))) : var_10));

                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            var_24 = arr_40 [i_0] [i_1] [i_9] [i_0] [i_11];
                            var_25 *= (arr_3 [i_11] [i_0]);
                        }
                    }
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {

                        for (int i_13 = 2; i_13 < 17;i_13 += 1)
                        {
                            arr_51 [1] [i_9] [1] [i_9] [i_0] = (~9);
                            arr_52 [i_0 - 1] [i_9] [i_13] [i_12] = -0;
                        }
                        var_26 *= (arr_42 [i_1]);
                        var_27 = (arr_9 [i_0]);
                        var_28 = (((((~(arr_8 [12] [i_1] [i_9] [i_12])))) ? var_7 : 0));
                    }
                    var_29 = arr_47 [i_0 - 1] [i_1];
                    var_30 ^= (arr_47 [i_0 + 2] [i_1]);
                }
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 17;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        {
                            var_31 = (((((arr_31 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]) ? var_9 : (((arr_12 [i_0] [i_1] [i_1] [i_1] [i_14] [i_15] [i_15]) ? (arr_1 [i_15] [i_1]) : var_3))))) ? (((arr_21 [i_0 - 1]) ? 0 : var_4)) : ((var_10 ? ((1 ? (arr_21 [i_14]) : (arr_42 [i_15]))) : (arr_55 [i_1]))));
                            var_32 = ((-(((arr_59 [i_0 + 3] [i_0] [i_1] [5] [i_15]) ? 1 : var_4))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 18;i_17 += 1)
                    {
                        {
                            var_33 = ((max((arr_56 [i_0 + 1] [i_0 + 1] [i_1]), (min((arr_27 [i_17] [i_17] [i_17] [i_17] [1]), 1073479680)))));
                            arr_65 [i_16] [i_16] [i_16] = var_1;
                            arr_66 [i_17] [i_16] [i_16] [i_0 + 3] = var_5;
                            var_34 = (arr_44 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]);
                        }
                    }
                }
                var_35 = ((-(arr_18 [i_0 + 1] [12] [i_1] [i_1] [i_0])));
            }
        }
    }
    #pragma endscop
}
