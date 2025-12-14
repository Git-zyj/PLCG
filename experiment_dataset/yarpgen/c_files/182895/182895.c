/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((((min(var_9, (!var_11)))) ? (min((min(var_13, var_1)), var_11)) : (((!var_8) ? (((var_7 ? 3532801736 : var_3))) : 1)))))));
    var_17 = ((((var_4 ? -3681372010 : (((min(var_13, var_6)))))) + var_13));
    var_18 = (~var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 ^= var_11;
                arr_6 [i_0] = (!613595285);
                arr_7 [i_0] [i_1] = (((max(var_7, (arr_2 [i_0] [i_0] [i_1]))) & var_12));
            }
        }
    }
    var_20 = (max(((var_5 ? var_8 : (((var_1 ? var_4 : var_5))))), (((var_7 ? -var_14 : var_6)))));
    #pragma endscop
}
