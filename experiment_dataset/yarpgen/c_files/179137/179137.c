/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (max(-928375631, (max(var_6, var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 *= 96;
                var_12 *= (var_3 || -95);
            }
        }
    }
    var_13 = (((2642607093 || ((min(-3, -678857115))))) ? var_9 : (min(1985694110, (min(1534377520, 67100672)))));
    #pragma endscop
}
