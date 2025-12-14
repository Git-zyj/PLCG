/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 *= (-2974807593398933325 & -1230270271);
                var_13 *= ((((min(-107516693, var_2) - (-1230270261 - -32)))));
                var_14 = (min(var_14, -7188887244037998842));
                var_15 *= (min((!1230270270), (min((arr_4 [i_1]), 0))));
            }
        }
    }
    var_16 = 4233116104;
    #pragma endscop
}
