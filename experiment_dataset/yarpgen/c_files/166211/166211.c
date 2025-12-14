/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_2 ? -var_10 : (var_11 / var_5))));
    var_17 = (~var_9);
    var_18 = (~var_3);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, ((((var_4 * var_15) - var_10)))));
                    arr_11 [i_1] = (~(((var_1 || var_1) ? (var_15 | var_5) : var_15)));
                }
            }
        }
    }
    var_20 = (!-var_11);
    #pragma endscop
}
