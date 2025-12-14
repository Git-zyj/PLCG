/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((var_1 ? var_11 : (!var_13)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (max(var_18, 1));
                arr_5 [i_1] = (var_0 ^ -var_0);
            }
        }
    }
    var_19 = (max(var_19, var_12));
    #pragma endscop
}
