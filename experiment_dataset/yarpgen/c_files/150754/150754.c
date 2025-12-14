/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_12, var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [19] [i_3] [1] = (max((max((arr_13 [i_0] [i_1] [i_2] [i_3] [i_3]), var_0)), ((((var_15 != var_5) && -3087546042836709042)))));
                                arr_16 [i_0] [i_0] [i_1] [i_2] [i_0] [i_0] [i_0] = ((((var_15 != (var_5 != var_13))) ? 3087546042836709042 : ((-(arr_5 [14] [i_1])))));
                                arr_17 [i_0] [i_2] [i_3] = ((-(((((arr_9 [i_3]) && var_11)) ? ((((1 && (arr_11 [i_0] [i_0] [i_2] [i_3] [i_4]))))) : var_11))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_19 += 229;
                                arr_25 [i_0] = ((((max((13849 && var_4), -34))) ? (((((max(var_12, var_3)))) - (var_10 | 229))) : (((-(var_15 && var_4))))));
                                arr_26 [i_0] [i_1] [i_2] [i_5] [16] = ((((((min(var_6, var_17))) && var_4)) ? var_9 : (((var_3 ? (arr_6 [i_0] [i_0]) : var_11)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((var_0 != (var_14 | var_7)));
    var_21 |= 92192107;
    #pragma endscop
}
