/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = (arr_5 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (arr_7 [i_0] [i_1] [i_2]);
                                var_17 = ((min(var_3, var_15)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            {
                arr_20 [i_5] [i_5] [i_5] = ((((((var_1 ? 127 : (arr_18 [1])))) / (((arr_16 [i_6]) ? var_7 : var_15)))) / (((-((min(-1, 7059)))))));
                var_18 += (((~(arr_19 [i_5] [i_6]))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        {
                            arr_28 [i_5] = (max((max((arr_26 [i_7] [3] [i_7] [11]), -37)), (((var_5 ? 70368744177663 : ((~(arr_26 [i_5] [i_6] [i_7 - 1] [16]))))))));
                            var_19 &= var_5;
                            var_20 = (min(var_20, (arr_23 [10])));
                            var_21 -= (min(0, var_3));
                        }
                    }
                }
            }
        }
    }
    var_22 -= ((((1 | var_11) ? ((-127 ? var_12 : var_4)) : (((min(var_8, var_12)))))));
    #pragma endscop
}
