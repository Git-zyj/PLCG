/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = (max(var_21, var_1));
                var_22 = ((-((+(max((arr_5 [i_0] [i_0]), 576425567931334656))))));
                arr_6 [i_1] [i_1] [i_1] &= var_15;
                arr_7 [i_0] [i_1] [i_1] = (!1);
            }
        }
    }
    var_23 = var_8;
    #pragma endscop
}
