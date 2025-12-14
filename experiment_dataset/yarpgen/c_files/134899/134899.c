/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 1]) : (arr_4 [i_0] [i_2 + 4] [i_0 + 1])))) ? ((-(arr_0 [i_0 + 1]))) : ((var_13 ? var_4 : var_6))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 &= (min(var_14, (((((var_2 >> (arr_3 [2] [i_3] [i_4])))) ? (arr_4 [i_4] [i_4] [i_4 - 4]) : -var_16))));
                                var_19 = (min(var_19, var_3));
                            }
                        }
                    }
                    var_20 = (~141);
                    arr_14 [i_0] [6] [i_2 + 1] [6] = ((var_11 != (max(var_2, var_3))));

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        var_21 = (((((1171936750 ? var_9 : 172918602))) ? (((-(arr_2 [i_0] [i_0])))) : ((var_0 ? var_2 : var_12))));
                        arr_17 [i_0] [i_2 - 1] [i_1] [i_0] = ((var_8 ? var_0 : (arr_4 [i_0] [i_2 + 1] [i_5 - 2])));
                        var_22 += var_6;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        arr_20 [i_0] [i_0] [i_0 - 1] [i_0] = (((~var_15) ? (!var_15) : (arr_8 [i_2 + 4])));
                        var_23 -= ((var_2 ? (arr_1 [i_0 - 1]) : var_5));
                    }
                }
            }
        }
    }
    #pragma endscop
}
