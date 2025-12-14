/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = (-((max(1, -107))));
                arr_6 [12] [15] = ((!((((((~6) + 2147483647)) << ((((1073676288 ? 6 : -6)) - 6)))))));
            }
        }
    }
    var_13 = (max((((((max(var_1, var_10))) ? var_10 : var_8))), ((min(15, var_0)))));
    #pragma endscop
}
