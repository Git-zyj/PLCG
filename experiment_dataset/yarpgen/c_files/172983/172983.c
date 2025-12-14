/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 40;
    var_16 -= (var_12 / (min(var_6, (max(54, 68053635160985008)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (min(21, 68053635160985008));
                arr_5 [i_0] [i_0] [i_0] = ((-(arr_4 [i_0] [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
