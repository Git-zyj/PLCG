/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_8;
    var_13 |= (~(~var_7));
    var_14 = -26;
    var_15 &= -var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (arr_2 [i_1] [i_0])));
                var_17 &= var_8;
            }
        }
    }
    #pragma endscop
}
