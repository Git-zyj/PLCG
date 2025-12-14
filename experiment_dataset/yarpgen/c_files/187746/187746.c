/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 = var_6;
    var_20 = var_17;
    var_21 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_22 = ((((((var_16 ? -7038244872673894735 : var_15)))) ? var_7 : var_14));
                var_23 = (max(var_23, (((((min((arr_0 [i_1]), (arr_0 [i_1])))) ? var_4 : (min(var_15, var_13)))))));
            }
        }
    }
    #pragma endscop
}
