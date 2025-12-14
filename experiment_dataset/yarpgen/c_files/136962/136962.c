/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136962
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
                arr_5 [i_0] = ((var_6 / (((var_13 / -256) ? ((112 ? -996 : var_15)) : ((-(arr_4 [i_0] [i_0] [i_1 + 2])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] |= (((var_10 - var_15) | ((((!(arr_13 [i_1])))))));
                                var_17 = (min(var_17, (((!(9223372036854767616 - var_5))))));
                            }
                            arr_16 [i_0] [12] [i_2] [i_3] = var_16;
                            var_18 = (max(var_18, ((((((((arr_14 [i_1]) & 64)))) ? ((32937 ? ((var_7 ? (arr_11 [i_0] [i_0] [i_1] [i_0] [i_0]) : var_0)) : (arr_6 [i_1 + 3] [i_1 - 2] [i_1 + 3] [i_1 - 2]))) : 21)))));
                        }
                    }
                }
                var_19 = (min(var_19, var_2));
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_20 -= (((((var_8 ? var_15 : (arr_18 [i_5])))) ? (arr_17 [i_5] [i_5]) : var_7));
        var_21 = ((238 & (arr_18 [i_5])));
    }
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {

        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    {
                        var_22 = (max(var_22, (((!(arr_18 [i_6 - 1]))))));
                        var_23 = (((!var_2) >> (((17559 | -17553) - 4294967294))));
                    }
                }
            }
            var_24 = (min(var_24, (arr_20 [i_7 + 1])));
            var_25 = 238;
        }
        var_26 = (min(var_26, ((((((~(min(var_7, var_13))))) < (arr_27 [i_6] [i_6] [i_6] [i_6 - 1]))))));
    }
    #pragma endscop
}
