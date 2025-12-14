/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (var_9 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]));
        var_17 = ((1 ? -3186 : -3186));
        arr_3 [i_0] = ((!(((~(arr_0 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_2] = (arr_4 [i_1 + 2] [i_1] [i_1 - 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] [i_0] [i_0] [i_3 - 1] [i_4] = (((arr_0 [i_3 - 2] [i_1 - 3]) >= (arr_0 [i_3 + 1] [i_1 + 2])));
                                var_18 = ((var_8 >> (((arr_6 [i_0] [i_0] [i_0]) + 19603))));
                                var_19 = ((!(arr_13 [i_1] [i_1] [i_1 + 1] [i_1 - 3] [i_1 - 3])));
                                arr_17 [i_4] [i_3] [i_2] = (!(arr_13 [i_0] [i_0] [i_2] [i_3] [i_2]));
                            }
                        }
                    }
                }
            }
        }
        var_20 = (arr_4 [i_0] [i_0] [i_0]);
    }
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        var_21 = (arr_19 [i_5]);
        var_22 = ((((max(-23739, 0))) << (((((arr_19 [i_5 + 1]) ? (arr_19 [i_5 + 1]) : (arr_19 [i_5 - 1]))) - 1135734386))));
    }
    var_23 += var_13;
    var_24 = ((var_4 ? var_15 : ((var_1 ? (var_2 | var_0) : ((-3173 ? var_0 : var_12))))));
    var_25 = 1001192918;
    #pragma endscop
}
