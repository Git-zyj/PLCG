/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((max(((((-32767 - 1) || 1))), ((~(50 || var_1))))))));
    var_11 = var_7;
    var_12 = (min(var_12, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_13 += ((((max(-31, 35))) ? (((arr_4 [i_0] [i_1 + 2]) ? var_5 : (arr_5 [i_0] [i_1 + 1]))) : var_4));
                            arr_13 [i_0] [i_0] [i_0] [i_0] = (((((arr_4 [i_1 - 1] [i_1 + 1]) ^ var_1)) / (((1764957745 && (arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_3]))))));
                        }
                    }
                }
                var_14 = (arr_2 [i_0]);

                for (int i_4 = 2; i_4 < 23;i_4 += 1) /* same iter space */
                {
                    var_15 = (max(var_15, (arr_9 [i_0] [17] [i_4] [i_0] [i_4] [i_4])));

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_16 -= (((arr_10 [i_1 - 1]) ? ((~(!503193763))) : (((115 == (arr_9 [i_4] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4] [i_4]))))));
                        var_17 = (max(var_17, ((((((((((arr_4 [i_0] [i_0]) | var_1))) ? var_8 : (var_5 + -48)))) && (((var_1 >> (((~var_7) + 152))))))))));
                        arr_19 [i_0] = (((((44 & (((arr_8 [12] [12] [4]) ? var_5 : 65526))))) ? (980430106 || var_9) : ((var_8 ? var_8 : -801866013))));
                    }
                    arr_20 [i_0] [i_0] [i_0] [i_0] = (((min(-var_5, (!var_3))) / (((arr_11 [i_0] [i_4 + 1] [i_4 - 1] [i_0]) ? var_5 : 6))));
                }
                for (int i_6 = 2; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    var_18 = (min(var_18, ((max(((((arr_9 [i_0] [i_1] [i_6] [i_0] [i_0] [i_1 + 2]) ? -3008 : (arr_18 [i_1 + 1] [i_6 + 2] [i_6] [i_6 - 1])))), 2497997225994281369)))));
                    var_19 = 7196;
                    var_20 &= (((((max(7199, var_3)) ^ 53987)) ^ (((var_0 ? 4952 : (-7081 | 64))))));
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 23;i_7 += 1) /* same iter space */
                {
                    var_21 -= ((((((arr_16 [i_0] [15]) ^ (arr_4 [i_1 - 1] [i_0])))) ? 3032 : var_1));

                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_22 = (min(var_22, (((11671673691601846131 >> (((arr_21 [i_1 + 2] [i_1 + 2] [i_1 + 1]) + 666347276)))))));
                        var_23 = (max(var_23, (((-(arr_12 [i_7 + 2] [i_7] [i_1 - 1] [i_1 - 1]))))));
                    }
                    arr_28 [i_7 - 2] [15] [i_1] [11] = 1;
                    arr_29 [i_0] [i_0] [16] [i_0] = arr_27 [i_1];

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        arr_33 [i_7] [i_9] [i_7] [i_0] [i_0] [i_0] = (!-7181);
                        var_24 = (((~(arr_8 [1] [18] [i_0]))));
                    }
                }
                for (int i_10 = 2; i_10 < 23;i_10 += 1) /* same iter space */
                {
                    var_25 -= -7197;
                    arr_38 [i_0] [i_1] [i_1 + 1] [17] = 4194303;
                }
            }
        }
    }
    #pragma endscop
}
