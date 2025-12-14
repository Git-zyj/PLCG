/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 13918915403709867851;
    var_20 = ((((!(!0))) ? ((((var_17 ? var_2 : var_13)) * (197 == 65472))) : (-4222857334184782403 == var_12)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_21 = (~57);
                var_22 = 7662421288088891644;
            }
        }
    }
    var_23 = (max(var_23, (((4222857334184782406 ? var_9 : (var_12 && var_2))))));
    #pragma endscop
}
