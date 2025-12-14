/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 = (((arr_1 [i_0]) > var_18));
                arr_6 [i_1] = arr_3 [i_0] [i_0];
            }
        }
    }
    var_21 = (((max(var_19, var_12))) ? (var_16 ^ 2) : (min(8064, var_5)));
    var_22 = var_1;
    var_23 = ((var_13 ? ((max(var_18, var_17))) : (((1474261814 ? var_9 : var_17)))));
    #pragma endscop
}
