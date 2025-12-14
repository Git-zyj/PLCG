/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((var_3 ? var_6 : (min(31, (~22))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (max((min(((min(14, 576460752303423487))), 8924440558173868184)), var_6));
                var_14 = (max(var_14, (((((!(!var_9))) ? -8503 : var_0)))));
            }
        }
    }
    #pragma endscop
}
