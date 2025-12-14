/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((max(((var_0 ? ((var_8 ? 9007199250546688 : var_19)) : var_7)), ((2937937982 ? var_3 : var_19)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (((-(-5236009347362879759 && var_13))));
                arr_6 [i_0] [8] |= 29;
            }
        }
    }
    #pragma endscop
}
