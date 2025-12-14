/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (!var_11)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((((((var_5 ? var_3 : var_8)) + var_13)) + (min(-var_8, var_12))));
                var_15 = (!var_13);

                /* vectorizable */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] = var_2;
                    var_16 = (((!-19574) ? 39697 : var_10));
                    arr_9 [i_0] [i_2 - 3] [i_0] [i_2] = var_11;
                    arr_10 [18] [20] [i_0] = ((var_9 || (!25856)));
                }
                var_17 += ((-(max((!var_9), -var_10))));
                arr_11 [i_0] |= ((!(!25856)));
            }
        }
    }
    var_18 = (min(var_10, var_3));
    #pragma endscop
}
