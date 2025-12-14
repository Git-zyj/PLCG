/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_16 += ((((arr_2 [i_0]) ? ((0 ? 8532699470269261146 : 4239215154399727584)) : (arr_1 [8]))));
                var_17 |= var_6;
            }
        }
    }
    var_18 = (397122708 || var_5);
    #pragma endscop
}
