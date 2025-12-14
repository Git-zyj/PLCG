/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    var_21 = -var_12;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_22 -= (!var_9);
                arr_6 [i_1] [i_1] [i_1] = var_7;
            }
        }
    }
    var_23 = (max(var_23, var_4));
    var_24 = (!var_19);
    #pragma endscop
}
