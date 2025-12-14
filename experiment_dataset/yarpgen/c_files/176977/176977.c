/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    var_18 = (max(var_18, ((min((((((var_8 ? var_12 : var_11))) ? ((var_5 ? var_4 : var_15)) : ((max(32800, 1))))), var_5)))));
    var_19 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [16] [6] = ((var_5 == (arr_3 [i_3])));

                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            var_20 = (((arr_13 [i_4 + 1] [i_4] [i_2] [i_4] [14] [i_2]) ? (arr_13 [i_4 + 1] [i_4] [i_2] [i_3] [18] [i_1]) : (arr_13 [i_4 + 1] [i_4] [1] [i_3] [22] [10])));
                            var_21 = (min(var_21, (((4884511158438559546 ? 1 : 1)))));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_22 = (max(var_22, var_7));
                            arr_17 [i_0] [i_1] [i_2] [4] = (!var_14);
                        }
                    }
                }
            }
            var_23 = ((((arr_2 [1] [i_0]) ? (arr_6 [i_0] [i_1] [6] [i_0]) : var_11)));
            var_24 = (arr_8 [i_0] [i_0] [i_1] [i_0]);
            var_25 *= (((arr_10 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1]) ? (((~(arr_14 [19] [i_0] [i_0] [i_1] [i_1])))) : ((8126464 ? 9915244080881823299 : 4094))));
        }
        arr_18 [19] [i_0] = (arr_3 [i_0]);
        var_26 = var_16;
    }
    #pragma endscop
}
