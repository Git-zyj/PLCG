/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = var_15;
                var_20 &= (arr_3 [i_0]);

                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    var_21 = (max((max((min((arr_2 [i_2]), var_2)), var_13)), ((min((arr_4 [i_0] [i_0] [i_2] [i_2]), ((min((arr_2 [i_2]), (arr_2 [i_0])))))))));
                    arr_6 [i_0 + 4] [i_0 + 4] [i_0] [9] = (max(var_8, var_3));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_22 = (+(max((arr_4 [i_0 + 2] [i_1] [i_1] [i_0]), var_13)));
                    var_23 = (arr_1 [i_0 + 1]);
                }
            }
        }
    }
    var_24 = (min((((((var_2 ? var_9 : var_3))) ? var_11 : ((var_3 ? var_8 : var_9)))), ((var_3 ? (((min(var_13, var_14)))) : (max(var_17, var_15))))));
    #pragma endscop
}
