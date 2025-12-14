/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_10 |= ((-29 ? 1 : 0));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_7 [i_1] [i_1] [14] = (42 ^ 15824);
                    arr_8 [i_1] [i_1] [i_2] = (((29 == var_7) / var_0));
                }
            }
        }
    }
    var_11 = (min(var_11, ((((((var_1 == var_6) ? ((var_1 ? var_1 : var_8)) : var_8)) != (min(var_5, (238 | -29))))))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    var_12 ^= ((((arr_1 [i_3]) || 0)) || var_2);

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_13 ^= (((((arr_13 [i_6] [i_4] [i_3]) ? var_4 : (((arr_1 [i_6]) ? var_5 : var_3)))) <= (arr_9 [i_3])));
                            arr_22 [1] [0] [i_5] [i_5] [i_4] [i_5] [1] = (min(((1 - (((arr_2 [i_3] [i_5] [i_6]) ? var_0 : var_6)))), -2141080602));
                            arr_23 [i_5] [i_4] = var_1;
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            var_14 = (min(var_14, 255));
                            var_15 |= (((~var_2) & var_0));
                        }
                        for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            arr_28 [i_3] [i_4] [i_5] = (!var_2);
                            arr_29 [i_3] [i_4] [i_5] [i_5] [i_4] = ((((((arr_27 [8] [i_9 - 1] [14] [i_9] [i_9 - 1]) ? (arr_19 [9] [i_9 - 1] [i_9] [i_9] [3] [i_9 - 1]) : 0))) ? (((arr_19 [i_5] [i_9 - 1] [i_9] [i_9] [i_9 - 1] [i_9 - 1]) | (arr_27 [i_4] [i_9 - 1] [i_9] [i_9] [i_9]))) : ((max(var_1, (arr_20 [i_5] [i_9 - 1] [i_9] [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 1]))))));
                            var_16 |= ((((min(234, var_3))) && 409153027));
                        }
                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_17 = (min(var_17, 15));
                            var_18 |= (var_8 ? ((1 ? (arr_20 [6] [i_4] [i_5] [10] [i_6] [i_10] [i_10]) : var_6)) : ((var_0 / (arr_19 [i_3] [i_4] [i_5] [i_6] [1] [i_10]))));
                        }
                        arr_32 [i_3] [i_3] [i_4] = ((((251 ? 803152629 : (arr_0 [i_3] [i_3])))) ? (max(1363703862, ((((arr_11 [i_3]) + 237))))) : (!var_7));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 6;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            {
                var_19 |= (1 ? (0 < 28) : -28);
                var_20 = (min(var_20, -28));
            }
        }
    }
    var_21 = ((var_8 ? ((max((!0), var_8))) : var_3));
    #pragma endscop
}
