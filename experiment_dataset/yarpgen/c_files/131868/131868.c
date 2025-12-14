/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((-(!-var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_12 [i_3] = arr_5 [i_2 - 2] [i_0 + 1] [4];
                        var_21 = var_10;
                        var_22 = (-(((!(arr_10 [i_0 - 1] [i_2 - 1] [i_0 - 1] [i_0 - 1])))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_23 = (-var_7 ? (2147483647 % var_3) : var_3);
                        arr_16 [i_0] [13] [13] [13] [i_4] &= ((~(var_16 / var_6)));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_24 [i_0] [i_0] [i_1] [9] [i_5] [i_5] [i_6] = ((+((min((arr_22 [i_2 - 2] [3] [i_2] [i_0 - 1] [i_6]), (arr_22 [i_2 - 1] [i_1] [i_2] [i_0 + 1] [i_6]))))));
                                var_24 = var_9;
                            }
                        }
                    }
                    var_25 = (min(var_25, -5951));
                    var_26 = (((min(var_5, var_8)) & (((arr_9 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1]) ? var_5 : (arr_7 [i_2] [i_2 - 1] [i_2 + 1] [6])))));
                }
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    arr_28 [i_0] [i_1] = ((+((-var_9 ? (arr_3 [i_0] [i_0]) : ((var_8 ? var_17 : 1521))))));
                    var_27 = var_19;
                }
                var_28 = (min(var_28, (!var_16)));
                var_29 = var_15;
                var_30 -= (min((((!(((64 ? 64 : 105)))))), (arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
