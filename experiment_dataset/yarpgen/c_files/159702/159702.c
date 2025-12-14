/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((var_6 ? ((((((var_10 ? (arr_5 [i_1]) : 19401))) ? (arr_5 [i_1]) : var_11))) : (min(((~(arr_3 [0]))), (((!(arr_3 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_13 -= var_7;

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (((arr_13 [i_0] [i_1] [i_2 - 2] [1] [i_4]) || 37));
                                var_14 = (max(var_14, (~32)));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 10;i_5 += 1)
                            {
                                arr_18 [i_0] [i_1] [i_2 + 2] [i_3] [i_5] = (arr_5 [i_5]);
                                arr_19 [i_5] [i_0] [i_2] [i_0] [i_0] &= (!var_11);
                                var_15 = (max(var_15, (arr_11 [i_2] [i_2] [i_2 + 1] [i_2] [i_2 + 2])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 |= (((var_4 ? ((var_11 ? var_8 : var_8)) : (var_12 * var_7))));
    #pragma endscop
}
