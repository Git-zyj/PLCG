/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (((((~(arr_0 [i_0 + 1])))) ? (max((((var_1 ? (arr_2 [i_0 - 1] [i_0 - 1] [i_1]) : var_1))), (max((arr_0 [2]), (arr_1 [i_0]))))) : var_2));
                var_12 = (((var_6 ? (arr_3 [i_0 + 1]) : 40)));

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] = var_2;
                    arr_9 [i_0] [5] [i_2] = (((~var_0) ? ((((arr_4 [i_2 + 1] [i_2 + 3] [i_2 + 3]) ? var_0 : (((arr_3 [i_0]) ? var_5 : (arr_7 [i_2])))))) : ((min(var_8, var_7)))));
                    var_13 &= (((((!(arr_6 [i_0 - 1] [i_2 + 2] [i_2] [i_2 - 1])))) << (arr_6 [i_0 + 1] [i_2 + 1] [i_2] [i_2 + 2])));
                    arr_10 [i_0] [i_1] [i_1] = (((arr_2 [i_0 + 1] [i_1] [i_2 + 2]) ? (((!(arr_2 [i_0 + 1] [i_1] [i_2 + 2])))) : ((max(var_10, (arr_2 [i_0 - 1] [i_1] [i_2 - 1]))))));
                }
                for (int i_3 = 3; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    var_14 = (!var_1);
                    var_15 -= (((arr_1 [1]) ? (arr_13 [4] [i_0 - 1] [10]) : ((var_1 ? var_5 : var_10))));
                    arr_14 [i_0] [i_1] [i_0] = (max((arr_0 [i_0 + 1]), ((max(var_0, (arr_5 [i_0 - 1] [i_0 + 1] [i_0]))))));
                }
                for (int i_4 = 3; i_4 < 11;i_4 += 1) /* same iter space */
                {
                    var_16 *= ((((((arr_18 [i_0 + 1] [i_4 - 3]) ? ((max((arr_7 [i_0]), var_0))) : var_6))) ? (((!(max(1, var_0))))) : var_4));

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        arr_22 [i_5 + 2] [i_4] [i_0] [i_0] [i_0] = ((arr_20 [i_0 - 1] [i_4 - 3] [i_5 - 1] [i_5]) / var_5);
                        var_17 += arr_0 [1];
                    }
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        var_18 -= (((960 != var_8) != ((max(var_7, (arr_1 [12]))))));
                        arr_26 [i_0] [i_0] [i_4 + 2] [i_6 + 1] = (((arr_11 [i_0]) != var_2));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_19 = (((((((((arr_5 [i_0] [i_0] [i_0]) | -25998))) ? (((arr_24 [i_0 + 1] [0] [i_4] [i_0]) ? var_2 : var_1)) : (((arr_18 [i_7] [i_0]) | 0))))) ? ((min(((var_4 ? var_5 : (arr_18 [i_0] [i_0]))), (arr_2 [i_0 + 1] [i_0 - 1] [i_4 - 1])))) : ((~(((arr_28 [i_0] [i_1] [i_1] [i_4] [4] [i_7]) & (arr_0 [i_0])))))));
                        var_20 ^= (((~(arr_4 [i_0 - 1] [i_1] [i_7]))));
                        var_21 -= ((min(-var_2, ((max(1, 1))))));
                    }
                    arr_29 [i_0] [i_1] [i_1] = ((((((arr_24 [i_4] [i_4] [i_4 - 2] [i_0]) * (arr_24 [i_4 - 3] [i_4 - 2] [i_4 - 2] [i_0])))) ? (!var_5) : (max(var_0, (max(var_2, var_6))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            {
                var_22 = var_5;
                var_23 = ((((max((arr_34 [i_8] [i_9 + 1]), (arr_34 [i_8] [i_9 - 1])))) ? ((var_8 ? (arr_30 [i_9 + 1] [i_9 - 1]) : (arr_30 [i_9 + 1] [i_9 - 1]))) : (min((arr_30 [i_8] [i_9 + 1]), ((-(arr_33 [i_8] [i_8] [i_8])))))));
            }
        }
    }
    var_24 = (max(var_24, var_6));
    #pragma endscop
}
