/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = (min(var_19, (((var_1 ? var_12 : (min(var_3, ((var_1 ? var_6 : var_12)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = ((((arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [11]) / (arr_6 [i_2 - 1] [i_2 - 1] [i_2] [i_2]))) << (((min((arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]), var_15)) - 23805)));
                    var_21 = (arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                }
            }
        }
    }
    #pragma endscop
}
