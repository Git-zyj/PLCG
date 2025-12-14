/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = max((((arr_5 [i_0 + 1] [i_2] [i_2]) ? 30186 : var_12)), ((min((!var_8), var_14))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_21 ^= ((!(arr_6 [i_1])));
                        var_22 = ((-(~var_13)));
                        arr_11 [i_2] = (((arr_1 [i_0 + 1]) & (arr_1 [i_0 + 1])));
                    }
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        var_23 = (min((min((arr_3 [i_0 + 4]), (arr_3 [i_0 + 2]))), -var_15));
                        var_24 = var_15;
                    }
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        var_25 = -540581598;
                        var_26 = ((~((+(((arr_6 [i_2]) + var_14))))));
                        arr_17 [i_0 - 1] [i_1] [i_2] [i_2] = (((arr_4 [i_0 + 1] [i_0 + 4]) / (((min(1, (arr_4 [i_0 + 3] [i_0 + 4])))))));
                        var_27 = (((var_16 / (arr_0 [i_1] [i_5 - 1]))));
                        var_28 *= (((!var_7) >= (arr_1 [i_0])));
                    }
                }
            }
        }
    }
    var_29 = (max(var_5, (((!(((var_2 ? var_18 : var_14))))))));
    #pragma endscop
}
