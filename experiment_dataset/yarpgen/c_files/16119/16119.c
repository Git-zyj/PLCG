/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = (max(var_1, 0));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (min(((4294967295 ? var_10 : var_5)), (~var_9)));
                                arr_12 [i_0] [i_0] [i_1] [i_4] [i_3] [i_3] [i_4] = (((arr_2 [i_0] [i_4]) - (var_7 >= var_11)));
                                var_14 |= var_10;
                                arr_13 [i_0] [i_4] [i_2] [i_3] [i_4] = ((117 ? 2319002712 : 116));
                            }
                        }
                    }
                    var_15 = (min(var_15, ((((((((arr_8 [i_0]) ? var_10 : var_6)))) ? (min(27905, (0 & 32505856))) : ((((1 ? 499309902 : 1)))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_16 = ((max(((0 - (arr_14 [i_0] [i_1] [i_2] [i_5]))), (arr_9 [i_0] [i_5] [i_2] [i_0] [i_0]))) - ((max((1 || var_3), (0 / var_0)))));
                                var_17 = ((var_9 ? ((~(arr_9 [i_0] [i_1 + 2] [i_2] [i_5] [i_6]))) : ((((max(4262461440, 1)) > (((-780487568682524375 ? 1 : var_9))))))));
                                var_18 = (arr_1 [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_19 += arr_24 [i_0] [i_1] [i_2] [i_7] [i_8] [i_7];
                                var_20 = (!var_2);
                                var_21 = ((((((arr_1 [i_7]) ? 27905 : var_7)) / 23300)) * (min((((arr_23 [i_7] [i_0] [i_0] [i_2] [i_8]) ? var_11 : 234)), var_0)));
                                var_22 |= (!var_7);
                                arr_26 [i_0] [i_8] [i_2] = -var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_4;
    #pragma endscop
}
