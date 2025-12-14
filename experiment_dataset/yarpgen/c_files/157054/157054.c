/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [3] = arr_0 [14];
                var_17 = (min(var_17, (arr_2 [i_1])));
                var_18 = var_2;
                var_19 = var_11;
            }
        }
    }
    var_20 = var_13;
    var_21 = var_12;
    var_22 = (min(((var_0 ? -var_8 : ((var_8 ? -7980778014719439967 : var_15)))), (((-(var_1 < var_8))))));
    var_23 ^= var_11;
    #pragma endscop
}
