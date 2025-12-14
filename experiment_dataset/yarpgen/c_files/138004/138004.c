/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = max(1512832959, (max(3, 115382407)));
                arr_6 [i_0] [i_1] [i_0] = -222;
            }
        }
    }
    var_19 *= (var_1 ? (155 || 48) : (min(var_0, 144)));
    var_20 = var_17;
    #pragma endscop
}
