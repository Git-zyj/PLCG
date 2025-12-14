/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_2] [i_0] = var_1;
                            arr_10 [i_0] [i_1] [i_2] [14] [i_3] = ((((min((arr_5 [i_1 + 1] [2] [1] [i_1 + 1]), 13998270451905238493))) ? ((((arr_5 [i_1 - 1] [i_1] [i_1] [i_1 - 1]) > (arr_5 [i_1 + 1] [i_1 - 1] [11] [i_1 - 1])))) : (arr_5 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 1])));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_20 += ((4095 ? (!var_1) : 4095));
                                arr_13 [i_4] [i_2] [i_2] [4] [i_1] [i_0] = (((239 ? 43 : 209)));
                                arr_14 [i_0] [i_1 - 1] [14] [14] [18] [i_0] = var_14;
                                var_21 = ((var_18 ? (arr_2 [i_1 + 1]) : (40907 / 14)));
                            }
                            for (int i_5 = 1; i_5 < 20;i_5 += 1)
                            {
                                arr_18 [i_3] [i_2] [i_0] [i_0] = ((((((arr_12 [i_0] [i_0] [11] [18] [i_2] [i_3] [i_5]) / 37)) * ((var_2 ? var_14 : (arr_16 [i_1] [i_3] [i_5 + 1]))))));
                                arr_19 [i_0] [13] [i_2] [i_3] [i_5] = ((((arr_12 [i_5] [i_5 - 1] [i_2] [i_2] [i_1 + 1] [10] [1]) ^ (arr_12 [i_5] [i_5 + 1] [i_5] [i_2] [i_1 + 1] [11] [i_1]))));
                            }
                            for (int i_6 = 0; i_6 < 21;i_6 += 1)
                            {
                                var_22 = 147;
                                var_23 = (min(var_23, 5475386677126714264));
                            }
                            var_24 = (max(var_24, ((((-212 + 212) ? (144 & -1) : 70)))));
                        }
                    }
                }
                arr_22 [i_0] [i_1 + 1] [i_1] = 102;
            }
        }
    }
    var_25 = var_13;
    #pragma endscop
}
