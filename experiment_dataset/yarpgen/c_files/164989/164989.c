/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((max(var_7, var_1)));
    var_14 += var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_15 += (((((190 ? 74 : 81)) + 70)));
                var_16 -= var_3;
            }
        }
    }
    #pragma endscop
}
