/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 = 16384;
    var_17 = (((((var_14 >> (var_0 - 3969036826)) << (var_11 - 68)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_18 &= ((((583735127 ? 8191 : 5849016170928050752))));
                var_19 = (max(var_19, var_11));
            }
        }
    }
    #pragma endscop
}
