/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 &= (arr_2 [i_0] [i_2 - 1]);

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_20 = (min(var_20, ((((((((((arr_6 [i_1]) >> (var_10 - 48)))) ? (arr_9 [12] [i_3] [12] [0] [i_1] [12]) : (max((arr_1 [i_0] [i_0]), var_11))))) ? (((arr_9 [14] [14] [i_2 + 1] [i_2 - 1] [i_2 - 1] [14]) * (arr_3 [i_2] [i_2 - 1] [i_2 - 1]))) : (max(var_8, 3839)))))));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_21 ^= ((((((!(~var_8))))) * ((-64 ? (max(var_6, (arr_5 [i_1] [i_2]))) : (arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_4] [i_4])))));
                            arr_14 [i_0] [i_0] [i_4] [i_0] [i_0] &= var_15;
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [i_1] [i_5] [i_0] [i_5] &= var_11;
                            var_22 ^= ((~(((var_13 > 0) ? (arr_7 [i_0] [i_5] [i_2 + 1]) : var_10))));
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            var_23 = (min(var_23, var_7));
                            var_24 = (min((((!(arr_13 [i_2 - 1] [i_2] [i_2] [i_2 + 1])))), ((3840 ? (arr_13 [i_2 + 1] [i_2] [i_2] [i_2 - 1]) : var_18))));
                            arr_20 [i_2] [i_1] [i_2] [i_3] [i_2] = ((((max(-47, (arr_5 [i_2 - 1] [i_2 - 1])))) && ((max((arr_5 [i_2 + 1] [i_2 - 1]), (arr_5 [i_2 - 1] [i_2 - 1]))))));
                        }
                        var_25 = (((!4294967283) ? (((((arr_3 [i_2 - 1] [i_2 + 1] [i_2 + 1]) > (arr_18 [3] [i_1] [i_2] [5] [i_3] [i_2] [i_3]))))) : (((!var_11) ? (arr_1 [i_0] [i_1]) : var_7))));
                        var_26 = (arr_19 [i_0] [14] [i_0] [i_0] [i_0] [1] [i_0]);
                    }

                    for (int i_7 = 3; i_7 < 15;i_7 += 1)
                    {
                        var_27 += (max((((248 ? 7 : -4))), (((arr_11 [i_0] [i_1] [i_2 - 1] [i_2 + 1] [i_7 + 1] [14] [i_7]) ^ (arr_11 [i_1] [i_2] [i_1] [i_2 + 1] [i_7] [4] [i_7 + 2])))));
                        var_28 = (arr_7 [i_0] [i_2] [i_7 - 1]);
                        var_29 = (max(((-(arr_15 [i_2]))), 61695));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_30 = ((((((((0 >> (var_7 - 2689061589)))) ? (arr_16 [14] [2] [i_2] [i_2] [14]) : var_2))) ? (arr_10 [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) : ((-(arr_3 [i_8] [15] [15])))));
                        var_31 = ((arr_5 [i_0] [i_8]) ? ((~((var_17 ? var_16 : var_0)))) : 1426293938);
                        var_32 += (arr_5 [i_0] [i_0]);
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_33 = ((var_4 ? (arr_13 [i_0] [i_2] [i_1] [i_2 + 1]) : (arr_25 [i_0] [i_1] [i_2])));
                        var_34 = (arr_26 [i_0] [i_1] [i_1] [i_2]);
                    }
                }
            }
        }
    }
    var_35 = ((-(((((var_18 ? 1426293946 : var_8))) ? var_4 : var_17))));
    #pragma endscop
}
