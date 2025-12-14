/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] &= var_2;
                var_21 = (min(((((min((arr_3 [i_0] [10]), (arr_0 [5])))) ? ((((var_18 && (arr_4 [i_0] [i_0]))))) : 0)), (arr_1 [i_0])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_22 -= (min((~var_9), ((((max(var_5, var_0)) > 17)))));
        var_23 = (((((arr_7 [i_2]) ? (arr_7 [i_2]) : var_4))) ? (~var_10) : var_6);
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_24 ^= (arr_8 [i_3]);
                    var_25 = var_11;
                    var_26 |= ((~(((!(!var_12))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_27 = (max(var_27, (~var_2)));
                                arr_18 [4] [4] [4] &= (arr_3 [2] [i_3]);
                                arr_19 [i_2] [i_2] [i_4] [i_2] [i_6] [i_5] [i_3] = (((arr_13 [9] [9] [i_4] [i_4]) ? ((min(var_5, (arr_17 [i_3 + 1] [i_5] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1])))) : (min(((((arr_7 [i_3]) ? (arr_15 [5] [i_4] [9] [9]) : (arr_15 [i_2] [i_3] [i_3] [6])))), (((arr_14 [i_5]) ? var_5 : var_10))))));
                                arr_20 [i_5] = (max(var_17, (min((max((arr_3 [i_2] [i_5]), var_13)), var_7))));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_28 = (max(var_28, (!var_3)));
                        var_29 = (((~(arr_8 [i_2]))));
                    }
                }
            }
        }
        var_30 += (arr_13 [i_2] [5] [i_2] [4]);
    }
    #pragma endscop
}
