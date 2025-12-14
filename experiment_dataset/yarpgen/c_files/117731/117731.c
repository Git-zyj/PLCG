/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (min(var_18, ((max(var_7, (((!(arr_3 [i_0 + 2] [i_0 - 3] [i_1 + 2])))))))));
                arr_4 [i_0] [i_0] [i_0] = (min(1, (((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_1]) : var_12)) + 2147483647)) >> ((((var_4 ? var_7 : var_14)) - 54340))))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_3] [0] = 176;
                            var_19 = ((min(var_16, (var_12 + var_16))));
                            arr_12 [i_0] [i_2] [i_2] = (max(((var_7 ? 81 : var_1), (arr_5 [i_1 - 1] [16] [i_4]))));
                        }
                        for (int i_5 = 4; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_2] = var_17;
                            arr_16 [i_0] [i_2] [i_2] [i_2] [i_0] = (((-var_13 != 180) ? ((((var_2 ? (arr_8 [i_5 + 2] [i_2] [i_0] [i_2] [12]) : var_15)))) : (arr_1 [i_3] [i_3])));
                        }
                        /* vectorizable */
                        for (int i_6 = 4; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            var_20 ^= var_8;
                            var_21 -= ((var_16 ? (arr_1 [i_0] [i_0]) : (arr_17 [i_3] [6] [i_0 - 1] [6] [i_0])));
                        }
                        arr_20 [i_2] [1] [1] = ((+(((arr_3 [i_1 + 3] [i_0 + 2] [i_0 + 2]) / var_4))));
                        var_22 ^= (((((var_11 != (arr_8 [i_0 + 2] [0] [i_1 - 1] [0] [i_3])))) | ((max(174, var_10)))));
                    }
                    var_23 = var_14;
                    var_24 = 159;
                    var_25 -= (((((~var_13) ? (((((arr_5 [i_0 + 1] [i_1] [i_2]) == 81)))) : 56)) + (max(var_5, (arr_13 [i_1 + 3] [1] [i_2] [6] [6])))));
                }
            }
        }
    }
    var_26 ^= (~var_10);
    #pragma endscop
}
