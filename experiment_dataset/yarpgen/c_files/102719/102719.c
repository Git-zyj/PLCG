/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((min(var_2, ((2549652516768935447 ? -1477960206198286602 : -48)))))));
                var_22 = ((!58) >= -33);
            }
        }
    }
    var_23 = (max(var_23, (147614339 - -9087912786155891520)));
    #pragma endscop
}
