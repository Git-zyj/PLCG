/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_7 || var_14) ? -var_8 : (var_1 && 64))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 = (((((var_16 ? var_12 : var_10))) & var_0));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        var_20 = (((arr_4 [i_0 - 1]) ? (~var_9) : ((((arr_1 [i_0 - 2]) >= var_5)))));
                        var_21 = (((~var_2) >= var_14));
                        var_22 = var_3;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_23 = (25169 >= (((arr_9 [i_5] [i_2] [i_2] [i_1]) << var_14)));
                                var_24 = (((((~(arr_16 [i_0 + 2] [i_1] [i_2] [i_4 - 1] [i_5])))) | (arr_5 [i_0] [i_0 - 2] [i_0 - 2])));
                                var_25 = (((((40367 ? ((16140901064495857664 ? var_14 : 10367899427945337050)) : (arr_2 [24])))) ? (((arr_5 [i_0 + 1] [i_1] [i_0 + 2]) ? var_6 : var_11)) : (arr_13 [i_0] [i_1] [i_1] [i_4 + 1] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (max(var_26, var_2));
    var_27 = ((min(var_16, var_11)));
    #pragma endscop
}
