/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = (min((22 & 1), 238));
                var_22 = (max(var_22, ((min(1, 22)))));
                arr_7 [i_0] [0] = ((min(240, var_13)));
            }
        }
    }
    #pragma endscop
}
