/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = (var_8 / var_10);
                var_15 = (max(var_15, (~var_12)));
            }
        }
    }
    var_16 = (((var_6 - (~var_4))));
    var_17 = (min(var_17, ((((var_13 - (~var_10))) & var_10))));
    var_18 += (var_5 * -var_13);
    #pragma endscop
}
