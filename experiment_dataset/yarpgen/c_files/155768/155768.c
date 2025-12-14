/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(((var_12 ? var_2 : var_6)), (!var_8)))) && var_14));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = var_13;
                                arr_14 [i_4] [i_4] |= ((arr_0 [i_0 + 2] [i_1]) ? var_5 : var_4);
                                var_17 = (((((var_7 ? var_0 : var_5))) ? 2742732374168520923 : (((var_2 ? var_7 : var_10)))));
                                var_18 = (max(var_18, (((!(var_13 && var_13))))));
                            }
                        }
                    }
                    arr_15 [i_2] = (((arr_10 [i_0 - 3] [i_1] [i_0 - 3] [i_0]) ? (((var_10 ? var_5 : (arr_0 [i_2] [i_1])))) : ((var_4 ? var_6 : var_3))));
                    arr_16 [i_2] [i_2] = var_2;
                    var_19 ^= (((((var_11 & (arr_9 [i_2] [i_0])))) ? -var_11 : -var_13));
                    var_20 = var_4;
                }
                for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_24 [i_5] [i_5] [i_5] [i_0] [i_0] = (!-var_2);
                                var_21 *= ((((var_13 ? var_10 : (!var_6))) != (var_2 & var_1)));
                            }
                        }
                    }
                    var_22 &= (-var_12 && 43765);
                }
                for (int i_8 = 3; i_8 < 19;i_8 += 1)
                {
                    var_23 = ((((min((max(var_14, var_13)), (!var_5)))) ? (((var_1 ? var_5 : (min(var_1, var_5))))) : (max(((var_13 ? var_10 : var_9)), var_7))));
                    arr_28 [9] [i_0 + 1] = (max((((var_7 && (((var_10 ? var_1 : var_0)))))), (((((var_0 ? var_14 : var_9))) ? ((var_13 ? var_2 : var_13)) : ((549755813632 ? 21 : -549755813632))))));
                }
                var_24 = (arr_0 [i_0 - 3] [i_0]);
                var_25 = ((((((arr_2 [i_0 + 2] [i_0 - 4]) ? var_13 : (arr_2 [i_0 + 2] [i_0 - 4])))) ? (((var_0 ? (arr_19 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]) : (arr_2 [i_0 - 4] [i_0 - 4])))) : (min(549755813615, -549755813632))));
            }
        }
    }
    #pragma endscop
}
