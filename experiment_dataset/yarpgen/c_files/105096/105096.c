/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (max(2797, var_5));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_1] = max((arr_7 [14] [i_1] [i_1] [i_1 - 1] [i_1]), ((((2797 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : 1)))));
                        var_17 ^= ((59 ? (arr_2 [i_1 + 1]) : (var_3 == var_8)));
                        arr_11 [i_0] [i_0] [i_0] [i_3] = (((((max(2793, 28924)))) - ((((var_4 % (arr_6 [i_0] [i_1 + 1] [i_2] [i_3]))) ^ (((max(var_9, -2797))))))));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_18 = (max((arr_5 [11] [i_0]), (((((arr_15 [i_4] [i_2] [i_2] [13] [i_1] [13]) ? (arr_5 [i_0] [i_0]) : var_0)) + ((max(0, -121)))))));

                        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_4] [i_5] [i_0] [i_4] = (((268433408 & (arr_6 [i_0] [i_2] [i_4] [i_5]))));
                            arr_20 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = -50;
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            var_19 = ((59 ? 42 : (arr_2 [i_2])));
                            var_20 = (max(((max((arr_5 [i_2 - 3] [i_1]), (max(-25951, (arr_22 [i_0 - 1] [i_1] [i_2] [i_4] [i_1])))))), (((arr_12 [i_0] [i_2 - 1] [i_4] [i_6]) ? (((arr_12 [i_0] [i_2 - 2] [i_4] [i_6]) ? -267895169 : -1)) : (arr_3 [i_0 - 1])))));
                            arr_25 [i_0] [i_0] [i_6] [i_0] [i_0] = ((+(max(((((arr_24 [i_6] [i_4] [i_4] [i_2] [i_1 - 1] [i_0]) || 1610612736))), -1004093255))));
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            arr_30 [i_0] [i_1] [i_7] [i_4] [i_4] = (max(var_13, -18462));
                            var_21 = 85;
                            var_22 = 32760;
                            arr_31 [i_7] = var_9;
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            arr_34 [i_8] [i_4] [i_2] [i_0] [i_8] = (~1668414576177236815);
                            arr_35 [i_1] [i_1 + 1] [i_8] [i_1] [i_8] [i_1 - 1] = (arr_23 [i_2] [i_2 - 2] [i_2] [i_2]);
                            var_23 = (((((arr_0 [i_0 - 1]) ? 7741 : (arr_22 [i_0] [i_1] [i_2] [i_4] [i_8])))) ? var_11 : (arr_2 [i_4]));
                            var_24 *= (max(((var_5 < (arr_8 [i_0 - 1]))), (!var_0)));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_25 ^= (arr_38 [i_0] [i_1] [i_2] [i_9 + 1] [i_10]);
                                arr_41 [i_9] [i_9] [i_2 - 3] [i_1] [i_9] = 7741;
                                var_26 = (min(var_26, ((((((4096 <= (max(var_10, 121))))) + ((((arr_36 [10] [i_2] [i_1 + 1] [i_0]) || (!var_12)))))))));
                                arr_42 [i_10] [i_9] [i_2] [i_2] [i_1] [i_9] [i_0] = 0;
                                arr_43 [i_0] [i_2] [i_9] [i_9 + 1] [i_10] = ((-((((((((arr_7 [i_0] [i_0] [11] [i_0 - 1] [i_0 - 1]) == (arr_1 [i_0] [i_0]))))) >= (arr_21 [i_0 - 1] [i_1 + 1] [i_9] [i_0 - 1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            {
                                arr_49 [i_0] [i_1 - 1] [i_2] [i_11] [i_11] = max(((max((arr_16 [i_0 - 1] [i_1]), (arr_16 [i_1 - 1] [i_11])))), (max((arr_1 [i_0] [i_0 - 1]), -2788)));
                                var_27 = var_1;
                                var_28 = (arr_48 [i_2] [i_2] [i_2] [i_2] [i_2]);
                                var_29 = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
