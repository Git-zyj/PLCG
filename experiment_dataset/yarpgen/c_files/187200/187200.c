/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_6 | -1);
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 -= (arr_1 [i_0 - 3]);
                var_16 = 7324898906560924821;
                var_17 &= (-(max(-6, (arr_1 [i_0 + 3]))));
            }
        }
    }
    #pragma endscop
}
