/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (!var_14);
                var_21 = (~var_1);
            }
        }
    }
    var_22 = -44;
    var_23 = (((((min(4, var_10)))) ? (min(-var_12, var_13)) : (((var_5 > var_4) ? var_13 : 4294967295))));
    #pragma endscop
}
